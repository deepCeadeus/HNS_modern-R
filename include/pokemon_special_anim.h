#ifndef GUARD_POKEMON_SPECIAL_ANIM_H
#define GUARD_POKEMON_SPECIAL_ANIM_H

#include "global.h"
#include "main.h"

void CreateLevelUpVerticalSpritesTask(u16 x, u16 y, u16 tileTag, u16 paletteTag, u16 priority, u16 subpriority);
bool8 LevelUpVerticalSpritesTaskIsRunning(void);
bool8 PSA_LevelUpVerticalSpritesTaskIsRunning(void);

#endif // GUARD_POKEMON_SPECIAL_ANIM_H
