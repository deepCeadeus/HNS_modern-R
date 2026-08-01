const struct Trainer gTrainers[] = {
    [TRAINER_NONE] =
    {
        .partyFlags = 0,
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _(""),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .partySize = 0,
        .party = {.NoItemDefaultMoves = NULL},
    },

    [TRAINER_SAWYER_1] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sawyer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sawyer1),
    },

    [TRAINER_ROSS] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Ross"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ross),
    },


    [TRAINER_MITCH] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Mitch"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mitch),
    },


    [TRAINER_JED] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Jed"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jed),
    },


    [TRAINER_MARC] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Marc"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marc),
    },


    [TRAINER_RICH] =
    {
        .trainerClass = TRAINER_CLASS_COLLECTOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .trainerName = _("Rich"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rich),
    },


    [TRAINER_JOEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey),
    },


    [TRAINER_MIKEY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Mikey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey),
    },


    [TRAINER_ALBERT] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Albert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Albert),
    },


    [TRAINER_GORDON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Gordon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gordon),
    },


    [TRAINER_SAMUEL] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Samuel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samuel),
    },


    [TRAINER_IAN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Ian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ian),
    },


    [TRAINER_WARREN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Warren"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren),
    },


    [TRAINER_JIMMY] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jimmy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jimmy),
    },


    [TRAINER_OWEN] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Owen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Owen),
    },


    [TRAINER_JASON] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jason"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason),
    },


    [TRAINER_JACK] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Jack"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jack),
    },


    [TRAINER_KIPP] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Kipp"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kipp),
    },


    [TRAINER_ALAN] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Alan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alan),
    },


    [TRAINER_JOHNNY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Johnny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Johnny),
    },


    [TRAINER_DANNY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Danny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Danny),
    },


    [TRAINER_TOMMY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Tommy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tommy),
    },


    [TRAINER_DUDLEY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Dudley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dudley),
    },


    [TRAINER_JOE] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Joe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe),
    },


    [TRAINER_BILLY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Billy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Billy),
    },


    [TRAINER_CHAD] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Chad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chad),
    },


    [TRAINER_NATE] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Nate"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nate),
    },


    [TRAINER_RICKY] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Ricky"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ricky),
    },


    [TRAINER_ROD] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Rod"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rod),
    },


    [TRAINER_ABE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Abe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Abe),
    },


    [TRAINER_BRYAN] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bryan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bryan),
    },


    [TRAINER_THEO] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Theo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Theo),
    },


    [TRAINER_TOBY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Toby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby),
    },


    [TRAINER_DENIS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Denis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denis),
    },


    [TRAINER_VANCE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Vance"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vance),
    },


    [TRAINER_HANK] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Hank"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hank),
    },


    [TRAINER_ROY] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Roy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy),
    },


    [TRAINER_BORIS] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Boris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Boris),
    },


    [TRAINER_BOB] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bob),
    },


    [TRAINER_JOSE] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Jose"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jose),
    },


    [TRAINER_PETER] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Peter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Peter),
    },


    [TRAINER_PERRY] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Perry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Perry),
    },


    [TRAINER_BRET] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Bret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret),
    },


    [TRAINER_CARRIE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Carrie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carrie),
    },


    [TRAINER_BRIDGET] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Bridget"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bridget),
    },


    [TRAINER_ALICE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Alice"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alice),
    },


    [TRAINER_KRISE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Krise"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Krise),
    },


    [TRAINER_CONNIE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Connie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Connie),
    },


    [TRAINER_LINDA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Linda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Linda),
    },


    [TRAINER_LAURA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Laura"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Laura),
    },


    [TRAINER_SHANNON] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Shannon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shannon),
    },


    [TRAINER_MICHELLE] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Michelle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michelle),
    },


    [TRAINER_DANA] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Dana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dana),
    },


    [TRAINER_ELLEN] =
    {
        .trainerClass = TRAINER_CLASS_LASS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_LASS,
        .trainerName = _("Ellen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ellen),
    },


    [TRAINER_NICK] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Nick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nick),
    },


    [TRAINER_AARON] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Aaron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Aaron),
    },


    [TRAINER_PAUL] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Paul"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paul),
    },


    [TRAINER_CODY] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Cody"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cody),
    },


    [TRAINER_MIKE] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Mike"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mike),
    },


    [TRAINER_GAVEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Gaven"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gaven),
    },


    [TRAINER_RYAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Ryan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ryan),
    },


    [TRAINER_JAKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jake"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake),
    },


    [TRAINER_BLAKE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Blake"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Blake),
    },


    [TRAINER_BRIAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Brian"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brian),
    },


    [TRAINER_ERICK] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Erick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erick),
    },


    [TRAINER_ANDY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Andy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andy),
    },


    [TRAINER_TYLER] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Tyler"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tyler),
    },


    [TRAINER_SEAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Sean"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sean),
    },


    [TRAINER_KEVIN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Kevin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kevin),
    },


    [TRAINER_STEVE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Steve"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Steve),
    },


    [TRAINER_ALLEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Allen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allen),
    },


    [TRAINER_DARIN] =
    {
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .trainerName = _("Darin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Darin),
    },


    [TRAINER_GWEN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Gwen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gwen),
    },


    [TRAINER_LOIS] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Lois"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lois),
    },


    [TRAINER_FRAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Fran"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fran),
    },


    [TRAINER_LOLA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Lola"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lola),
    },


    [TRAINER_KATE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kate"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kate),
    },


    [TRAINER_IRENE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Irene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irene),
    },


    [TRAINER_KELLY] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly),
    },


    [TRAINER_JOYCE] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Joyce"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joyce),
    },


    [TRAINER_BETH] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Beth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth),
    },


    [TRAINER_REENA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Reena"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Reena),
    },


    [TRAINER_MEGAN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Megan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Megan),
    },


    [TRAINER_CAROL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Carol"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carol),
    },


    [TRAINER_QUINN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Quinn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn),
    },


    [TRAINER_EMMA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Emma"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Emma),
    },


    [TRAINER_CYBIL] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cybil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cybil),
    },


    [TRAINER_JENN] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Jenn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jenn),
    },


    [TRAINER_CARA] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Cara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cara),
    },


    [TRAINER_VICTORIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Victoria"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Victoria),
    },


    [TRAINER_SAMANTHA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Samantha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Samantha),
    },


    [TRAINER_JULIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Julie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julie),
    },


    [TRAINER_JACLYN] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jaclyn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaclyn),
    },


    [TRAINER_BRENDA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Brenda"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brenda),
    },


    [TRAINER_CASSIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Cassie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cassie),
    },


    [TRAINER_CAROLINE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Caroline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Caroline),
    },


    [TRAINER_CARLENE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Carlene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carlene),
    },


    [TRAINER_JESSICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Jessica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jessica),
    },


    [TRAINER_RACHAEL] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Rachael"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rachael),
    },


    [TRAINER_ANGELICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Angelica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Angelica),
    },


    [TRAINER_KENDRA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Kendra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kendra),
    },


    [TRAINER_VERONICA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Veronica"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Veronica),
    },


    [TRAINER_JULIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Julia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Julia),
    },


    [TRAINER_THERESA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Theresa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Theresa),
    },


    [TRAINER_VALERIE] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Valerie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Valerie),
    },


    [TRAINER_OLIVIA] =
    {
        .trainerClass = TRAINER_CLASS_BEAUTY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BEAUTY,
        .trainerName = _("Olivia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Olivia),
    },


    [TRAINER_LARRY] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Larry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Larry),
    },


    [TRAINER_ANDREW] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Andrew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andrew),
    },


    [TRAINER_CALVIN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Calvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Calvin),
    },


    [TRAINER_SHANE] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane),
    },


    [TRAINER_BEN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ben"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ben),
    },


    [TRAINER_BRENT] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Brent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent),
    },


    [TRAINER_RON] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron),
    },


    [TRAINER_ETHAN] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ethan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethan),
    },


    [TRAINER_ISSAC] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Issac"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Issac),
    },


    [TRAINER_DONALD] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Donald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Donald),
    },


    [TRAINER_ZACH] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Zach"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zach),
    },


    [TRAINER_MILLER] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Miller"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Miller),
    },


    [TRAINER_GRUNT] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt),
    },

    [TRAINER_GRUNT_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt2),
    },


    [TRAINER_GRUNT_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt3),
    },


    [TRAINER_GRUNT_4] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt4),
    },


    [TRAINER_GRUNT_5] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt5),
    },


    [TRAINER_GRUNT_6] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt6),
    },


    [TRAINER_GRUNT_7] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt7),
    },


    [TRAINER_GRUNT_8] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt8),
    },


    [TRAINER_GRUNT_9] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt9),
    },


    [TRAINER_GRUNT_10] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt10),
    },


    [TRAINER_GRUNT_11] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt11),
    },


    [TRAINER_GRUNT_12] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt12),
    },


    [TRAINER_GRUNT_13] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt13),
    },


    [TRAINER_GRUNT_14] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt14),
    },


    [TRAINER_GRUNT_15] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt15),
    },


    [TRAINER_GRUNT_16] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt16),
    },


    [TRAINER_GRUNT_17] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt17),
    },


    [TRAINER_GRUNT_18] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt18),
    },


    [TRAINER_GRUNT_19] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt19),
    },


    [TRAINER_GRUNT_20] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt20),
    },


    [TRAINER_GRUNT_21] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt21),
    },


    [TRAINER_GRUNT_22] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt22),
    },


    [TRAINER_GRUNT_23] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt23),
    },


    [TRAINER_GRUNT_24] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt24),
    },


    [TRAINER_GRUNT_25] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt25),
    },


    [TRAINER_GRUNT_26] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt26),
    },


    [TRAINER_GRUNT_27] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt27),
    },


    [TRAINER_GRUNT_28] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt28),
    },


    [TRAINER_GRUNT_29] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        .trainerName = _("Grunt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt29),
    },

    [TRAINER_GRUNT_30] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt30),
    },


    [TRAINER_GRUNT_31] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt31),
    },


    [TRAINER_GRUNT_32] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt32),
    },

    [TRAINER_GRUNT_33] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Grunt"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt33),
    },

    [TRAINER_ETO] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Eto"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto),
    },

    [TRAINER_ETO_2] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Eto"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto3),
    },

    [TRAINER_ETO_3] =
    {
        .trainerClass = TRAINER_CLASS_TEAM_ROCKET,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        .trainerName = _("Eto"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eto2),
    },

    [TRAINER_PRESTON] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Preston"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Preston),
    },


    [TRAINER_EDWARD] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Edward"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edward),
    },


    [TRAINER_GREGORY] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Gregory"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gregory),
    },


    [TRAINER_VIRGIL] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Virgil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Virgil),
    },


    [TRAINER_ALFRED] =
    {
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .trainerName = _("Alfred"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alfred),
    },


    [TRAINER_ROXANNE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Roxanne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roxanne),
    },


    [TRAINER_CLARISSA] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Clarissa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clarissa),
    },


    [TRAINER_COLETTE] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Colette"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette),
    },


    [TRAINER_HILLARY] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Hillary"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hillary),
    },


    [TRAINER_SHIRLEY] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Shirley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shirley),
    },


    [TRAINER_DON] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Don"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Don),
    },


    [TRAINER_ROB] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Rob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rob),
    },


    [TRAINER_ED] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Ed"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ed),
    },


    [TRAINER_WADE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Wade"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wade),
    },


    [TRAINER_BENNY] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Benny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benny),
    },


    [TRAINER_AL] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Al"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Al),
    },


    [TRAINER_JOSH] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Josh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Josh),
    },


    [TRAINER_ARNIE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Arnie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Arnie),
    },


    [TRAINER_KEN] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Ken"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ken),
    },


    [TRAINER_DOUG] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Doug"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doug),
    },


    [TRAINER_WAYNE] =
    {
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .trainerName = _("Wayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wayne),
    },


    [TRAINER_JUSTIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Justin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Justin),
    },


    [TRAINER_RALPH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Ralph"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ralph),
    },


    [TRAINER_ARNOLD] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Arnold"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Arnold),
    },


    [TRAINER_KYLE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Kyle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kyle),
    },


    [TRAINER_HENRY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry),
    },


    [TRAINER_MARVIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Marvin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Marvin),
    },


    [TRAINER_TULLY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Tully"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tully),
    },


    [TRAINER_ANDRE] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Andre"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Andre),
    },


    [TRAINER_RAYMOND] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Raymond"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Raymond),
    },


    [TRAINER_WILTON] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Wilton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wilton),
    },


    [TRAINER_EDGAR] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Edgar"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edgar),
    },


    [TRAINER_JONAH] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Jonah"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jonah),
    },


    [TRAINER_MARTIN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Martin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martin),
    },


    [TRAINER_STEPHEN] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Stephen"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stephen),
    },


    [TRAINER_BARNEY] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Barney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barney),
    },


    [TRAINER_SCOTT] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Scott"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Scott),
    },


    [TRAINER_HAROLD] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Harold"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harold),
    },


    [TRAINER_SIMON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Simon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon),
    },


    [TRAINER_RANDALL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Randall"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Randall),
    },


    [TRAINER_CHARLIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Charlie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charlie),
    },


    [TRAINER_GEORGE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("George"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_George),
    },


    [TRAINER_BERKE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Berke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Berke),
    },


    [TRAINER_KIRK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Kirk"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kirk),
    },


    [TRAINER_MATHEW] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Mathew"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mathew),
    },


    [TRAINER_HAL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Hal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hal),
    },


    [TRAINER_PATON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Paton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paton),
    },


    [TRAINER_DARYL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Daryl"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daryl),
    },


    [TRAINER_WALTER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Walter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walter),
    },


    [TRAINER_TONY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tony),
    },


    [TRAINER_JEROME] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Jerome"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerome),
    },


    [TRAINER_TUCKER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Tucker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tucker),
    },


    [TRAINER_RICK] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Rick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rick),
    },


    [TRAINER_CAMERON] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Cameron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cameron),
    },


    [TRAINER_SETH] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Seth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Seth),
    },


    [TRAINER_JAMES] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("James"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_James),
    },


    [TRAINER_LEWIS] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Lewis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lewis),
    },


    [TRAINER_PARKER] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Parker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Parker),
    },


    [TRAINER_ELAINE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Elaine"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elaine),
    },


    [TRAINER_PAULA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Paula"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Paula),
    },


    [TRAINER_KAYLEE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kaylee"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kaylee),
    },


    [TRAINER_SUSIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Susie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Susie),
    },


    [TRAINER_DENISE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Denise"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Denise),
    },


    [TRAINER_KARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Kara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kara),
    },


    [TRAINER_WENDY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Wendy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wendy),
    },


    [TRAINER_LISA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Lisa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lisa),
    },


    [TRAINER_JILL] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jill"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jill),
    },


    [TRAINER_MARY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Mary"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mary),
    },


    [TRAINER_KATIE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Katie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Katie),
    },


    [TRAINER_DAWN] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Dawn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dawn),
    },


    [TRAINER_TARA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Tara"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tara),
    },


    [TRAINER_NICOLE] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Nicole"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nicole),
    },


    [TRAINER_LORI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Lori"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lori),
    },


    [TRAINER_JODY] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Jody"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jody),
    },


    [TRAINER_NIKKI] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Nikki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nikki),
    },


    [TRAINER_DIANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Diana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Diana),
    },


    [TRAINER_BRIANA] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .trainerName = _("Briana"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Briana),
    },


    [TRAINER_EUGENE] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Eugene"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eugene),
    },


    [TRAINER_HUEY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Huey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Huey),
    },


    [TRAINER_TERRELL] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Terrell"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Terrell),
    },


    [TRAINER_KENT] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Kent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kent),
    },


    [TRAINER_ERNEST] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Ernest"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ernest),
    },


    [TRAINER_JEFF] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Jeff"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeff),
    },


    [TRAINER_GARRETT] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Garrett"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Garrett),
    },


    [TRAINER_KENNETH] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Kenneth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenneth),
    },


    [TRAINER_STANLY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Stanly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stanly),
    },


    [TRAINER_HARRY] =
    {
        .trainerClass = TRAINER_CLASS_SAILOR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_SAILOR,
        .trainerName = _("Harry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harry),
    },


    [TRAINER_STAN] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Stan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Stan),
    },


    [TRAINER_ERIC] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Eric"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eric),
    },


    [TRAINER_GREGG] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Gregg"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gregg),
    },


    [TRAINER_JAY] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Jay"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jay),
    },


    [TRAINER_DAVE] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Dave"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dave),
    },


    [TRAINER_SAM] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Sam"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sam),
    },


    [TRAINER_TOM] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Tom"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tom),
    },


    [TRAINER_PAT] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Pat"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Pat),
    },


    [TRAINER_SHAWN] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Shawn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shawn),
    },


    [TRAINER_TERU] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Teru"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Teru),
    },


    [TRAINER_RUSS] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Russ"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Russ),
    },


    [TRAINER_NORTON] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Norton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Norton),
    },


    [TRAINER_HUGH] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Hugh"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hugh),
    },


    [TRAINER_MARKUS] =
    {
        .trainerClass = TRAINER_CLASS_SUPER_NERD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        .trainerName = _("Markus"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Markus),
    },


    [TRAINER_CLYDE] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Clyde"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Clyde),
    },


    [TRAINER_VINCENT] =
    {
        .trainerClass = TRAINER_CLASS_GUITARIST,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_GUITARIST,
        .trainerName = _("Vincent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Vincent),
    },


    [TRAINER_ANTHONY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Anthony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony),
    },


    [TRAINER_RUSSELL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Russell"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Russell),
    },


    [TRAINER_PHILLIP] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Phillip"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phillip),
    },


    [TRAINER_LEONARD] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Leonard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leonard),
    },


    [TRAINER_BENJAMIN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Benjamin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Benjamin),
    },


    [TRAINER_ERIK] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Erik"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erik),
    },


    [TRAINER_MICHAEL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Michael"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Michael),
    },


    [TRAINER_PARRY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Parry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Parry),
    },


    [TRAINER_TIMOTHY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Timothy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Timothy),
    },


    [TRAINER_BAILEY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Bailey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bailey),
    },


    [TRAINER_TIM] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Tim"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tim),
    },


    [TRAINER_NOLAND] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Noland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Noland),
    },


    [TRAINER_SIDNEY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sidney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sidney),
    },


    [TRAINER_KENNY] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Kenny"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenny),
    },


    [TRAINER_JIM] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Jim"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jim),
    },

    [TRAINER_DEVIN] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Devin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Devin),
    },

    [TRAINER_DANIEL] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Daniel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Daniel),
    },


    [TRAINER_KAZU] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Kazu"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kazu),
    },


    [TRAINER_DWAYNE] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Dwayne"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dwayne),
    },


    [TRAINER_HARRIS] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Harris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harris),
    },


    [TRAINER_ZEKE] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Zeke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke),
    },


    [TRAINER_CHARLES] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Charles"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Charles),
    },


    [TRAINER_RILEY] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Riley"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Riley),
    },


    [TRAINER_JOEL] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Joel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joel),
    },


    [TRAINER_GLENN] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Glenn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Glenn),
    },


    [TRAINER_DUNCAN] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("Duncan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Duncan),
    },


    [TRAINER_EDDIE] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("Eddie"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Eddie),
    },


    [TRAINER_RICHARDO] =
    {
        .trainerClass = TRAINER_CLASS_BURGLAR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BURGLAR,
        .trainerName = _("Richardo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richardo),
    },


    [TRAINER_NARD] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Nard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nard),
    },


    [TRAINER_COREY] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Corey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Corey),
    },


    [TRAINER_OTIS] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Otis"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Otis),
    },


    [TRAINER_DICK] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Dick"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dick),
    },


    [TRAINER_NED] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Ned"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ned),
    },


    [TRAINER_BURT] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Burt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Burt),
    },


    [TRAINER_BILL] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Bill"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bill),
    },


    [TRAINER_WALT] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Walt"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Walt),
    },


    [TRAINER_RAY] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Ray"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ray),
    },


    [TRAINER_LYLE] =
    {
        .trainerClass = TRAINER_CLASS_FIREBREATHER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FIREBREATHER,
        .trainerName = _("Lyle"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lyle),
    },


    [TRAINER_IRWIN] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Irwin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Irwin),
    },


    [TRAINER_FRITZ] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Fritz"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fritz),
    },


    [TRAINER_HORTON] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Horton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Horton),
    },


    [TRAINER_KENJI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kenji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kenji),
    },


    [TRAINER_YOSHI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Yoshi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Yoshi),
    },


    [TRAINER_LAO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Lao"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lao),
    },


    [TRAINER_NOB] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Nob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nob),
    },


    [TRAINER_KIYO] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Kiyo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kiyo),
    },


    [TRAINER_LUNG] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Lung"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lung),
    },


    [TRAINER_WAI] =
    {
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .trainerName = _("Wai"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Wai),
    },


    [TRAINER_NATHAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Nathan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nathan),
    },


    [TRAINER_FRANKLIN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Franklin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Franklin),
    },


    [TRAINER_HERMAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Herman"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Herman),
    },


    [TRAINER_FIDEL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Fidel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Fidel),
    },


    [TRAINER_GREG] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Greg"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greg),
    },


    [TRAINER_NORMAN] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Norman"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Norman),
    },


    [TRAINER_MARK] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Mark"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mark),
    },


    [TRAINER_PHIL] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Phil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil),
    },


    [TRAINER_RICHARD] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Richard"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Richard),
    },


    [TRAINER_GILBERT] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Gilbert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gilbert),
    },


    [TRAINER_JARED] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Jared"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jared),
    },

    [TRAINER_RODNEY] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Rodney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rodney),
    },


    [TRAINER_LIZ] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Liz"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz),
    },


    [TRAINER_GINA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Gina"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gina),
    },


    [TRAINER_BROOKE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Brooke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke),
    },


    [TRAINER_KIM] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Kim"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kim),
    },


    [TRAINER_CINDY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Cindy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Cindy),
    },


    [TRAINER_HOPE] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Hope"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Hope),
    },


    [TRAINER_SHARON] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Sharon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sharon),
    },


    [TRAINER_DEBRA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Debra"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Debra),
    },


    [TRAINER_ERIN] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Erin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Erin),
    },


    [TRAINER_HEIDI] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Heidi"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Heidi),
    },


    [TRAINER_EDNA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Edna"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edna),
    },


    [TRAINER_TIFFANY] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Tiffany"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tiffany),
    },


    [TRAINER_TANYA] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Tanya"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tanya),
    },


    [TRAINER_ROLAND] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Roland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roland),
    },


    [TRAINER_TODD] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Todd"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Todd),
    },


    [TRAINER_IVAN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ivan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ivan),
    },


    [TRAINER_ELLIOT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot),
    },


    [TRAINER_BARRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Barry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Barry),
    },


    [TRAINER_LLOYD] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Lloyd"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lloyd),
    },


    [TRAINER_DEAN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Dean"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dean),
    },


    [TRAINER_SID] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Sid"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sid),
    },


    [TRAINER_HARVEY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Harvey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Harvey),
    },


    [TRAINER_DALE] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Dale"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dale),
    },


    [TRAINER_TED] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Ted"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ted),
    },


    [TRAINER_THOMAS] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Thomas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Thomas),
    },


    [TRAINER_LEROY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Leroy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Leroy),
    },


    [TRAINER_DAVID] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("David"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_David),
    },


    [TRAINER_JOHN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("John"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_John),
    },


    [TRAINER_JERRY] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Jerry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jerry),
    },

    [TRAINER_GRANT] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Grant"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grant),
    },

    [TRAINER_SPENCER] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Spencer"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spencer),
    },


    [TRAINER_QUENTIN] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Quentin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quentin),
    },


    [TRAINER_CHOW] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Chow"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Chow),
    },


    [TRAINER_NICO] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Nico"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Nico),
    },


    [TRAINER_JIN] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Jin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jin),
    },


    [TRAINER_TROY] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Troy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Troy),
    },


    [TRAINER_JEFFREY] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Jeffrey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeffrey),
    },


    [TRAINER_PING] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Ping"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ping),
    },


    [TRAINER_EDMOND] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Edmond"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Edmond),
    },


    [TRAINER_NEAL] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Neal"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Neal),
    },


    [TRAINER_LI] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_MR_FUJI,
        .trainerName = _("Li"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Li),
    },


    [TRAINER_GAKU] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Gaku"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Gaku),
    },


    [TRAINER_MASA] =
    {
        .trainerClass = TRAINER_CLASS_SAGE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_SAGE,
        .trainerName = _("Masa"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Masa),
    },


    [TRAINER_KOJI] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Koji"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Koji),
    },


    [TRAINER_MARTHA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Martha"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Martha),
    },


    [TRAINER_GRACE] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Grace"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grace),
    },


    [TRAINER_BETHANY] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Bethany"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bethany),
    },


    [TRAINER_MARGRET] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Margret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Margret),
    },


    [TRAINER_ETHEL] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Ethel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ethel),
    },


    [TRAINER_REBECCA] =
    {
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SAGE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .trainerName = _("Rebecca"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rebecca),
    },


    [TRAINER_DORIS] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .trainerName = _("Doris"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Doris),
    },


    [TRAINER_RONALD] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Ronald"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ronald),
    },


    [TRAINER_BRAD] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Brad"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brad),
    },


    [TRAINER_DOUGLAS] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .trainerName = _("Douglas"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Douglas),
    },


    [TRAINER_WILLIAM] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("William"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_William),
    },


    [TRAINER_DEREK] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Derek"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Derek),
    },


    [TRAINER_ROBERT] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Robert"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Robert),
    },


    [TRAINER_JOSHUA] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Joshua"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joshua),
    },


    [TRAINER_CARTER] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Carter"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Carter),
    },


    [TRAINER_TREVOR] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Trevor"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Trevor),
    },


    [TRAINER_BRANDON] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon),
    },


    [TRAINER_JEREMY] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Jeremy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jeremy),
    },


    [TRAINER_COLIN] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Colin"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colin),
    },


    [TRAINER_ALEX] =
    {
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .trainerName = _("Alex"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Alex),
    },


    [TRAINER_REX] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Rex"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rex),
    },


    [TRAINER_ALLAN] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Allan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan),
    },


    [TRAINER_NAOKO] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("Naoko"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Naoko),
    },


    [TRAINER_SAYO] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("Sayo"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Sayo),
    },


    [TRAINER_ZUKI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("Zuki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Zuki),
    },


    [TRAINER_KUNI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("Kuni"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Kuni),
    },


    [TRAINER_MIKI] =
    {
        .trainerClass = TRAINER_CLASS_KIMONO_GIRL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_KIMONO_GIRL,
        .trainerName = _("Miki"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Miki),
    },


    [TRAINER_AMY_AND_MAY] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Amy&May"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AmyAndMay),
    },


    [TRAINER_ANN_AND_ANNE] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Ann&Anne"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne),
    },


    [TRAINER_JO_AND_ZOE] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Jo&Zoe"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_JoAndZoe),
    },


    [TRAINER_MEG_AND_PEG] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Meg&Peg"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_MegAndPeg),
    },


    [TRAINER_LEA_AND_PIA] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Lea&Pia"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_LeaAndPia),
    },


    [TRAINER_BEVERLY] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Beverly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beverly),
    },


    [TRAINER_RUTH] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Ruth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ruth),
    },


    [TRAINER_GEORGIA] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Georgia"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Georgia),
    },


    [TRAINER_JAMIE] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Jaime"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime),
    },


    [TRAINER_KEITH] =
    {
        .trainerClass = TRAINER_CLASS_POLICEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .trainerName = _("Keith"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Keith),
    },


    [TRAINER_DIRK] =
    {
        .trainerClass = TRAINER_CLASS_POLICEMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_POLICEMAN,
        .trainerName = _("Dirk"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Dirk),
    },


    [TRAINER_THOM_AND_KAE] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Thom & Kae"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae),
    },

    [TRAINER_DUFF_AND_EDA] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Duff & Eda"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_DuffAndEda),
    },


        
    [TRAINER_FALKNER_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .trainerName = _("Falkner"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Falkner),
    },


    [TRAINER_FALKNER_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_FALKNER,
        .trainerName = _("Falkner"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Falkner2),
    },


    [TRAINER_BUGSY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .trainerName = _("Bugsy"),
        .items = {ITEM_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bugsy),
    },


    [TRAINER_BUGSY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BUGSY,
        .trainerName = _("Bugsy"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bugsy2),
    },


    [TRAINER_WHITNEY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .trainerName = _("Whitney"),
        .items = {ITEM_SUPER_POTION, ITEM_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Whitney),
    },


    [TRAINER_WHITNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_WHITNEY,
        .trainerName = _("Whitney"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Whitney2),
    },


    [TRAINER_MORTY_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .trainerName = _("Morty"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Morty),
    },


    [TRAINER_MORTY_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_MORTY,
        .trainerName = _("Morty"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Morty2),
    },


    [TRAINER_PRYCE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce),
    },


    [TRAINER_PRYCE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce2),
    },


    [TRAINER_PRYCE_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce_2),
    },


    [TRAINER_PRYCE_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_PRYCE,
        .trainerName = _("Pryce"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Pryce_3),
    },


    [TRAINER_JASMINE_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("Jasmine"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine),
    },


    [TRAINER_JASMINE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("Jasmine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine2),
    },


    [TRAINER_JASMINE_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("Jasmine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine_2),
    },


    [TRAINER_JASMINE_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_JASMINE,
        .trainerName = _("Jasmine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Jasmine_3),
    },


    [TRAINER_CHUCK_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("Chuck"),
        .items = {ITEM_SUPER_POTION, ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck),
    },


    [TRAINER_CHUCK_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("Chuck"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck2),
    },


    [TRAINER_CHUCK_1_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("Chuck"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck_2),
    },


    [TRAINER_CHUCK_1_3] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CHUCK,
        .trainerName = _("Chuck"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Chuck_3),
    },


    [TRAINER_CLAIR_1] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .trainerName = _("Clair"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Clair),
    },


    [TRAINER_CLAIR_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_CLAIR,
        .trainerName = _("Clair"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Clair2),
    },


    [TRAINER_BROCK] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BROCK,
        .trainerName = _("Brock"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Brock),
    },


    [TRAINER_MISTY] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_MISTY,
        .trainerName = _("Misty"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Misty),
    },


    [TRAINER_LTSURGE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_SURGE,
        .trainerName = _("Lt.Surge"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_LtSurge),
    },


    [TRAINER_ERIKA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_ERIKA,
        .trainerName = _("Erika"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Erika),
    },


    [TRAINER_SABRINA] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_SABRINA,
        .trainerName = _("Sabrina"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Sabrina),
    },


    [TRAINER_JANINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_JANINE,
        .trainerName = _("Janine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Janine),
    },


    [TRAINER_BLAINE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BLAINE,
        .trainerName = _("Blaine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blaine),
    },


    [TRAINER_BLUE] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .trainerName = _("Blue"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blue),
    },


    [TRAINER_BLUE_2] =
    {
        .trainerClass = TRAINER_CLASS_LEADER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_LEADER_BLUE,
        .trainerName = _("Blue"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Blue2),
    },


    [TRAINER_WILL_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .trainerName = _("Will"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Will),
    },


    [TRAINER_WILL_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_WILL,
        .trainerName = _("Will"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Will2),
    },


    [TRAINER_BRUNO_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("Bruno"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bruno),
    },


    [TRAINER_BRUNO_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_BRUNO,
        .trainerName = _("Bruno"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bruno2),
    },


    [TRAINER_KAREN_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .trainerName = _("Karen"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Karen),
    },


    [TRAINER_KAREN_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KAREN,
        .trainerName = _("Karen"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Karen2),
    },


    [TRAINER_KOGA_1] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .trainerName = _("Koga"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Koga),
    },


    [TRAINER_KOGA_2] =
    {
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .trainerPic = TRAINER_PIC_ELITE_FOUR_KOGA,
        .trainerName = _("Koga"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Koga2),
    },


    [TRAINER_LANCE_1] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .trainerName = _("Lance"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Lance),
    },


    [TRAINER_LANCE_2] =
    {
        .trainerClass = TRAINER_CLASS_CHAMPION,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_CHAMPION_LANCE,
        .trainerName = _("Lance"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Lance2),
    },


    [TRAINER_RIVAL_CHIKORITA_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Chikorita1),
    },


    [TRAINER_RIVAL_CHIKORITA_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita2),
    },


    [TRAINER_RIVAL_CHIKORITA_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita3),
    },


    [TRAINER_RIVAL_CHIKORITA_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita4),
    },


    [TRAINER_RIVAL_CHIKORITA_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita5),
    },


    [TRAINER_RIVAL_CHIKORITA_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita6),
    },


    [TRAINER_RIVAL_CHIKORITA_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Chikorita7),
    },


    [TRAINER_RIVAL_CYNDAQUIL_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Cyndaquil1),
    },


    [TRAINER_RIVAL_CYNDAQUIL_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil2),
    },


    [TRAINER_RIVAL_CYNDAQUIL_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil3),
    },


    [TRAINER_RIVAL_CYNDAQUIL_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil4),
    },


    [TRAINER_RIVAL_CYNDAQUIL_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil5),
    },


    [TRAINER_RIVAL_CYNDAQUIL_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil6),
    },


    [TRAINER_RIVAL_CYNDAQUIL_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Cyndaquil7),
    },


    [TRAINER_RIVAL_TOTODILE_1] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("???"),
        .items = {ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Rival_Totodile1),
    },


    [TRAINER_RIVAL_TOTODILE_2] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Totodile2),
    },


    [TRAINER_RIVAL_TOTODILE_3] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Rival_Totodile3),
    },


    [TRAINER_RIVAL_TOTODILE_4] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile4),
    },


    [TRAINER_RIVAL_TOTODILE_5] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile5),
    },


    [TRAINER_RIVAL_TOTODILE_6] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile6),
    },


    [TRAINER_RIVAL_TOTODILE_7] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_SILVER,
        .trainerPic = TRAINER_PIC_SILVER,
        .trainerName = _("{B_RIVAL_NAME}"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Rival_Totodile7),
    },


    [TRAINER_RED_2] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_CHAMPION,
        .trainerPic = TRAINER_PIC_RED,
        .trainerName = _("Red"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Red2),
    },


    [TRAINER_EUSINE] =
    {
        .trainerClass = TRAINER_CLASS_MYSTERY_MAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_EUSINE,
        .trainerName = _("Eusine"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Eusine),
    },


    [TRAINER_GIOVANNI] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        .trainerName = _("Giovanni"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Giovanni),
    },

    [TRAINER_PROTON_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = _("Proton"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Grunt),
    },
    

    [TRAINER_PROTON_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PROTON,
        .trainerName = _("Proton"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Proton2),
    },


    [TRAINER_ARCHER] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("Archer"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
    },


    [TRAINER_ARCHER_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("Archer"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_1),
    },


    [TRAINER_ARCHER_4] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("Archer"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
    },


    [TRAINER_ARCHER_5] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARCHER,
        .trainerName = _("Archer"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Archer_2),
    },

    [TRAINER_PETREL_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("Petrel"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Petrel_1),
    },

    [TRAINER_PETREL_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_PETREL,
        .trainerName = _("Petrel"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Petrel_2),
    },



    [TRAINER_ARIANA_1] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = _("Ariana"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ariana),
    },


    [TRAINER_ARIANA_2] =
    {
        .trainerClass = TRAINER_CLASS_ROCKET_ADMIN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_ROCKET,
        .trainerPic = TRAINER_PIC_ARIANA,
        .trainerName = _("Ariana"),
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Ariana2),
    },

    [TRAINER_ANABEL_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .trainerName = _("Anabel"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anabel),
    },

    [TRAINER_TUCKER_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_DOME_ACE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .trainerName = _("Tucker"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Tucker),
    },

    [TRAINER_SPENSER_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .trainerName = _("Spenser"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Spenser),
    },

    [TRAINER_GRETA_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .trainerName = _("Greta"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Greta),
    },

    [TRAINER_NOLAND_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .trainerName = _("Noland"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Noland),
    },

    [TRAINER_LUCY_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .trainerName = _("Lucy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Lucy),
    },

    [TRAINER_BRANDON_BF_BRAIN] =
    {
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_MALE,
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon),
    },

    [TRAINER_NURSE] =
    {
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Joline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Nurse),
    },

    //Used for Exp. Farming, before beating Red
    [TRAINER_NURSE_PRE_RED] =
    {
        .trainerClass = TRAINER_CLASS_NURSE,
        .encounterMusic_gender = F_TRAINER_FEMALE | TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .trainerPic = TRAINER_PIC_NURSE,
        .trainerName = _("Joline"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = 0,
        .party = NO_ITEM_CUSTOM_MOVES(sParty_Nurse_Pre_Red),
    },

    //Rematch Joey
    [TRAINER_JOEY_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey_2),
    },
    [TRAINER_JOEY_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey_3),
    },
    [TRAINER_JOEY_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey_4),
    },
    [TRAINER_JOEY_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Joey"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joey_5),
    },

    //Rematch Mikey
    [TRAINER_MIKEY_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Mikey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey_2),
    },
    [TRAINER_MIKEY_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Mikey"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey_3),
    },
    [TRAINER_MIKEY_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Mikey"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey_4),
    },
    [TRAINER_MIKEY_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Mikey"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Mikey_5),
    },

    //Rematch Liz
    [TRAINER_LIZ_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Liz"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz_2),
    },
    [TRAINER_LIZ_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Liz"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz_3),
    },
    [TRAINER_LIZ_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Liz"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz_4),
    },
    [TRAINER_LIZ_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Liz"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Liz_5),
    },

    //Rematch Henry
    [TRAINER_HENRY_2] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry_2),
    },
    [TRAINER_HENRY_3] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry_3),
    },
    [TRAINER_HENRY_4] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry_4),
    },
    [TRAINER_HENRY_5] =
    {
        .trainerClass = TRAINER_CLASS_FISHERMAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .trainerName = _("Henry"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Henry_5),
    },

    //Rematch Anthony
    [TRAINER_ANTHONY_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Anthony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony_2),
    },
    [TRAINER_ANTHONY_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Anthony"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony_3),
    },
    [TRAINER_ANTHONY_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Anthony"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Anthony_4),
    },
    [TRAINER_ANTHONY_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Anthony"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Anthony_5),
    },

    //Rematch Brandon
    [TRAINER_BRANDON_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon_2),
    },
    [TRAINER_BRANDON_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Brandon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon_3),
    },
    [TRAINER_BRANDON_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Brandon"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon_4),
    },
    [TRAINER_BRANDON_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Brandon"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brandon_5),
    },

    //Rematch Ann and Anne
    [TRAINER_ANN_AND_ANNE_2] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Ann&Anne"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne_2),
    },
    [TRAINER_ANN_AND_ANNE_3] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Ann&Anne"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne_3),
    },
    [TRAINER_ANN_AND_ANNE_4] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Ann&Anne"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne_4),
    },
    [TRAINER_ANN_AND_ANNE_5] =
    {
        .trainerClass = TRAINER_CLASS_TWINS,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_TWINS,
        .trainerName = _("Ann&Anne"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_AnnAndAnne_5),
    },

    //Rematch Brooke
    [TRAINER_BROOKE_2] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Brooke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke_2),
    },
    [TRAINER_BROOKE_3] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Brooke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke_3),
    },
    [TRAINER_BROOKE_4] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Brooke"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke_4),
    },
    [TRAINER_BROOKE_5] =
    {
        .trainerClass = TRAINER_CLASS_PICNICKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_PICNICKER,
        .trainerName = _("Brooke"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brooke_5),
    },

    //Rematch Elliot
    [TRAINER_ELLIOT_2] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot_2),
    },
    [TRAINER_ELLIOT_3] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Elliot"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot_3),
    },
    [TRAINER_ELLIOT_4] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Elliot"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot_4),
    },
    [TRAINER_ELLIOT_5] =
    {
        .trainerClass = TRAINER_CLASS_CAMPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_CAMPER,
        .trainerName = _("Elliot"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Elliot_5),
    },

    //Rematch Toby
    [TRAINER_TOBY_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Toby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby_2),
    },
    [TRAINER_TOBY_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Toby"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby_3),
    },
    [TRAINER_TOBY_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Toby"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby_4),
    },
    [TRAINER_TOBY_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Toby"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Toby_5),
    },

    //Rematch Jamie
    [TRAINER_JAMIE_2] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Jaime"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime_2),
    },
    [TRAINER_JAMIE_3] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Jaime"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime_3),
    },
    [TRAINER_JAMIE_4] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Jaime"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime_4),
    },
    [TRAINER_JAMIE_5] =
    {
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .trainerName = _("Jaime"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jaime_5),
    },

    //Rematch Simon
    [TRAINER_SIMON_2] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Simon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon_2),
    },
    [TRAINER_SIMON_3] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Simon"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon_3),
    },
    [TRAINER_SIMON_4] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Simon"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon_4),
    },
    [TRAINER_SIMON_5] =
    {
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .trainerName = _("Simon"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Simon_5),
    },

    //Rematch Shane
    [TRAINER_SHANE_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane_2),
    },
    [TRAINER_SHANE_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Shane"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane_3),
    },
    [TRAINER_SHANE_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Shane"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane_4),
    },
    [TRAINER_SHANE_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Shane"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Shane_5),
    },

    //Rematch Ron
    [TRAINER_RON_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron_2),
    },
    [TRAINER_RON_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ron"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron_3),
    },
    [TRAINER_RON_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ron"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron_4),
    },
    [TRAINER_RON_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Ron"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Ron_5),
    },

    //Rematch Brent
    [TRAINER_BRENT_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Brent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent_2),
    },
    [TRAINER_BRENT_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Brent"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent_3),
    },
    [TRAINER_BRENT_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Brent"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent_4),
    },
    [TRAINER_BRENT_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .trainerName = _("Brent"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Brent_5),
    },

    //Rematch Phil
    [TRAINER_PHIL_2] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Phil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil_2),
    },
    [TRAINER_PHIL_3] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Phil"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil_3),
    },
    [TRAINER_PHIL_4] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Phil"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil_4),
    },
    [TRAINER_PHIL_5] =
    {
        .trainerClass = TRAINER_CLASS_PSYCHIC_M,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .trainerName = _("Phil"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Phil_5),
    },

    //Rematch Kelly
    [TRAINER_KELLY_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly_2),
    },
    [TRAINER_KELLY_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kelly"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly_3),
    },
    [TRAINER_KELLY_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kelly"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly_4),
    },
    [TRAINER_KELLY_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Kelly"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Kelly_5),
    },

    //Rematch Thom and Kae
    [TRAINER_THOM_AND_KAE_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Thom & Kae"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae_2),
    },
    [TRAINER_THOM_AND_KAE_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Thom & Kae"),
        .items = {},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae_3),
    },
    [TRAINER_THOM_AND_KAE_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Thom & Kae"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae_4),
    },
    [TRAINER_THOM_AND_KAE_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_1,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .trainerName = _("Thom & Kae"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = TRUE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_ThomAndKae_5),
    },

    //Rematch Quinn
    [TRAINER_QUINN_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Quinn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn_2),
    },
    [TRAINER_QUINN_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Quinn"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn_3),
    },
    [TRAINER_QUINN_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Quinn"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn_4),
    },
    [TRAINER_QUINN_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Quinn"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Quinn_5),
    },

    //Rematch Warren
    [TRAINER_WARREN_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Warren"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren_2),
    },
    [TRAINER_WARREN_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Warren"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren_3),
    },
    [TRAINER_WARREN_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Warren"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren_4),
    },
    [TRAINER_WARREN_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Warren"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Warren_5),
    },

    //Rematch Allan
    [TRAINER_ALLAN_2] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Allan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan_2),
    },
    [TRAINER_ALLAN_3] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Allan"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan_3),
    },
    [TRAINER_ALLAN_4] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Allan"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan_4),
    },
    [TRAINER_ALLAN_5] =
    {
        .trainerClass = TRAINER_CLASS_POKEFAN,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .trainerName = _("Allan"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Allan_5),
    },

    //Rematch Zeke
    [TRAINER_ZEKE_2] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Zeke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke_2),
    },
    [TRAINER_ZEKE_3] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Zeke"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke_3),
    },
    [TRAINER_ZEKE_4] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Zeke"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke_4),
    },
    [TRAINER_ZEKE_5] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Zeke"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Zeke_5),
    },

    //Rematch Sidney
    [TRAINER_SIDNEY_2] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sidney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sidney_2),
    },
    [TRAINER_SIDNEY_3] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sidney"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sidney_3),
    },
    [TRAINER_SIDNEY_4] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sidney"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sidney_4),
    },
    [TRAINER_SIDNEY_5] =
    {
        .trainerClass = TRAINER_CLASS_HIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_HIKER,
        .trainerName = _("Sidney"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Sidney_5),
    },

    //Rematch Jason
    [TRAINER_JASON_2] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jason"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason_2),
    },
    [TRAINER_JASON_3] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jason"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason_3),
    },
    [TRAINER_JASON_4] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jason"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason_4),
    },
    [TRAINER_JASON_5] =
    {
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .trainerName = _("Jason"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jason_5),
    },
    
    //Rematch Bret
    [TRAINER_BRET_2] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Bret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret_2),
    },
    [TRAINER_BRET_3] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Bret"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret_3),
    },
    [TRAINER_BRET_4] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Bret"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret_4),
    },
    [TRAINER_BRET_5] =
    {
        .trainerClass = TRAINER_CLASS_JUGGLER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_1,
        .trainerPic = TRAINER_PIC_JUGGLER,
        .trainerName = _("Bret"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bret_5),
    },

    //Rematch Roy
    [TRAINER_ROY_2] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Roy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy_2),
    },
    [TRAINER_ROY_3] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Roy"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy_3),
    },
    [TRAINER_ROY_4] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Roy"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy_4),
    },
    [TRAINER_ROY_5] =
    {
        .trainerClass = TRAINER_CLASS_BIKER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_2,
        .trainerPic = TRAINER_PIC_BIKER,
        .trainerName = _("Roy"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Roy_5),
    },

    //Rematch Colette
    [TRAINER_COLETTE_2] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Colette"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette_2),
    },
    [TRAINER_COLETTE_3] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Colette"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette_3),
    },
    [TRAINER_COLETTE_4] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Colette"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette_4),
    },
    [TRAINER_COLETTE_5] =
    {
        .trainerClass = TRAINER_CLASS_EXPERT,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .trainerName = _("Colette"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Colette_5),
    },

    //Rematch Bob
    [TRAINER_BOB_2] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bob_2),
    },
    [TRAINER_BOB_3] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bob"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bob_3),
    },
    [TRAINER_BOB_4] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bob"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Bob_4),
    },
    [TRAINER_BOB_5] =
    {
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .trainerName = _("Bob"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = ITEM_CUSTOM_MOVES(sParty_Bob_5),
    },

    //Rematch Joe
    [TRAINER_JOE_2] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Joe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe_2),
    },
    [TRAINER_JOE_3] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Joe"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe_3),
    },
    [TRAINER_JOE_4] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Joe"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe_4),
    },
    [TRAINER_JOE_5] =
    {
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_BOY_1,
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .trainerName = _("Joe"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Joe_5),
    },

    //Rematch Jake
    [TRAINER_JAKE_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jake"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake_2),
    },
    [TRAINER_JAKE_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jake"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake_3),
    },
    [TRAINER_JAKE_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jake"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake_4),
    },
    [TRAINER_JAKE_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_SUSPICIOUS_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .trainerName = _("Jake"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Jake_5),
    },

    //Rematch Beth
    [TRAINER_BETH_2] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Beth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth_2),
    },
    [TRAINER_BETH_3] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Beth"),
        .items = {},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth_3),
    },
    [TRAINER_BETH_4] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Beth"),
        .items = {ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth_4),
    },
    [TRAINER_BETH_5] =
    {
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
        .encounterMusic_gender = TRAINER_ENCOUNTER_MUSIC_HG_GIRL_2,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .trainerName = _("Beth"),
        .items = {ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_TRY_TO_FAINT | AI_SCRIPT_CHECK_VIABILITY,
        .party = NO_ITEM_DEFAULT_MOVES(sParty_Beth_5),
    },
};
