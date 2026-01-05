#include "global.h"
#include "bg.h"
#include "palette.h"
#include "gpu_regs.h"
#include "dma3.h"
#include "malloc.h"
#include "sound.h"
#include "text.h"
#include "sprite.h"
#include "window.h"
#include "blit.h"
#include "string_util.h"
#include "data.h"
#include "decompress.h"
#include "dynamic_placeholder_text_util.h"
#include "item.h"
#include "item_menu_icons.h"
#include "menu.h"
#include "pokemon_special_anim_internal.h"
#include "random.h"
#include "strings.h"
#include "text_window.h"
#include "trig.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "main.h"
#include "global.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_message.h"
#include "battle_setup.h"
#include "battle_tower.h"
#include "data.h"
#include "event_data.h"
#include "frontier_util.h"
#include "graphics.h"
#include "international_string_util.h"
#include "item.h"
#include "link.h"
#include "menu.h"
#include "palette.h"
#include "recorded_battle.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "trainer_hill.h"
#include "window.h"
#include "global.h"
#include "main.h"
#include "menu.h"
#include "palette.h"
#include "sprite.h"
#include "sound.h"
#include "task.h"
#include "malloc.h"
#include "bg.h"
#include "gpu_regs.h"
#include "window.h"
#include "overworld.h"
#include "text.h"
#include "text_window.h"
#include "international_string_util.h"
#include "strings.h"
#include "string_util.h"
#include "gba/m4a_internal.h"
#include "constants/rgb.h"
#include "battle_main.h"
#include "pokemon.h"
#include "event_data.h"


/* NOTE ON THIS FILE!

The whole file is used only for the level up vertical animation. The rest is completely unused, and will be for the forseeable future.
It includes the following Fire Red Stuff

*/

static void Task_LevelUpVerticalSprites(u8 taskId);
static void CreateLevelUpVerticalSprite(u8 taskId, s16 *data);
static void SpriteCB_LevelUpVertical(struct Sprite *sprite);

static const u16 sLevelUp_Pal[] = INCBIN_U16("graphics/pokemon_special_anim/level_up.gbapal");
static const u32 sLevelUp_Gfx[] = INCBIN_U32("graphics/pokemon_special_anim/level_up.4bpp.lz");


static const struct OamData sOamData_LevelUpVertical = {
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_BLEND,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(8x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(8x16),
    .tileNum = 0x000,
    .priority = 1,
    .paletteNum = 0
};

static const union AnimCmd sAnim_LevelUpVertical[] = {
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_END
};

static const union AnimCmd *const sAnimTable_LevelUpVertical[] = {
    sAnim_LevelUpVertical
};

static const struct SpriteTemplate sSpriteTemplate_LevelUpVertical = {
    .tileTag = 0,
    .paletteTag = 0,
    .oam = &sOamData_LevelUpVertical,
    .anims = sAnimTable_LevelUpVertical,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_LevelUpVertical
};

// ========================================================

#define tState       data[0]
#define tActiveSprCt data[1]
#define tMadeSprCt   data[2]
#define tTimer       data[3]
#define tXpos        data[4]
#define tYpos        data[5]
#define tTileTag     data[6]
#define tPaletteTag  data[7]
#define tPriority    data[8]
#define tSubpriority data[9]

#define tsYsubpixel data[1]
#define tsSpeed     data[2]
#define tsTaskId    data[7]

void CreateLevelUpVerticalSpritesTask(u16 x, u16 y, u16 tileTag, u16 paletteTag, u16 priority, u16 subpriority)
{
    static struct CompressedSpriteSheet spriteSheet;
    static struct SpritePalette spritePalette;
    u8 taskId;
    spriteSheet.tag = tileTag;
    spriteSheet.data = sLevelUp_Gfx;
    spriteSheet.size = sLevelUp_Gfx[0] >> 8;
    spritePalette.data = sLevelUp_Pal;
    spritePalette.tag = paletteTag;
    LoadCompressedSpriteSheet(&spriteSheet);
    LoadSpritePalette(&spritePalette);
    taskId = CreateTask(Task_LevelUpVerticalSprites, 0);
    gTasks[taskId].tXpos = x - 32;
    gTasks[taskId].tYpos = y + 32;
    gTasks[taskId].tTileTag = tileTag;
    gTasks[taskId].tPaletteTag = paletteTag;
    gTasks[taskId].tPriority = priority;
    gTasks[taskId].tSubpriority = subpriority;
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_NONE  | BLDCNT_TGT2_ALL);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(12, 6));
}

bool8 LevelUpVerticalSpritesTaskIsRunning(void)
{
    return FuncIsActiveTask(Task_LevelUpVerticalSprites);
}

static void Task_LevelUpVerticalSprites(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    switch (tState)
    {
    case 0:
        if (tTimer == 0)
        {
            tTimer++;
            CreateLevelUpVerticalSprite(taskId, data);
            if (tMadeSprCt > 17)
                tState++;
        }
        else
        {
            tTimer++;
            if (tTimer == 2)
                tTimer = 0;
        }
        break;
    case 1:
        if (tActiveSprCt == 0)
        {
            FreeSpriteTilesByTag(tTileTag);
            FreeSpritePaletteByTag(tPaletteTag);
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateLevelUpVerticalSprite(u8 taskId, s16 *data)
{
    u8 spriteId;
    struct SpriteTemplate template = sSpriteTemplate_LevelUpVertical;
    template.tileTag = tTileTag;
    template.paletteTag = tPaletteTag;
    tMadeSprCt++;
    spriteId = CreateSprite(&template, ((tMadeSprCt * 219) & 0x3F) + tXpos, tYpos, tSubpriority);
    if (spriteId != MAX_SPRITES)
    {
        gSprites[spriteId].oam.priority = tPriority;
        gSprites[spriteId].tsYsubpixel = 0;
        gSprites[spriteId].tsSpeed = (ISO_RANDOMIZE1(tMadeSprCt) & 0x3F) + 0x20;
        gSprites[spriteId].tsTaskId = taskId;
        tActiveSprCt++;
    }
}

static void SpriteCB_LevelUpVertical(struct Sprite *sprite)
{
    sprite->tsYsubpixel -= sprite->tsSpeed;
    sprite->y2 = sprite->tsYsubpixel >> 4;
    if (sprite->y2 < -0x40)
    {
        gTasks[sprite->tsTaskId].tActiveSprCt--;
        DestroySprite(sprite);
    }
}

#undef tsTaskId
#undef tsSpeed
#undef tsYsubpixel

#undef tSubpriority
#undef tPriority
#undef tPaletteTag
#undef tTileTag
#undef tYpos
#undef tXpos
#undef tTimer
#undef tMadeSprCt
#undef tActiveSprCt
#undef tState

bool8 PSA_LevelUpVerticalSpritesTaskIsRunning(void)
{
    return LevelUpVerticalSpritesTaskIsRunning();
}