.set LOCALID_CERULEANCAVE_MEWTWO, 8

CeruleanCave_B2F_MapScripts::
	.byte 0

CeruleanCave3_EventScript_MewtwoNew::
	lock
	faceplayer
	playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER
	waitmoncry
	seteventmon SPECIES_MEWTWO, 80
	call_if_set FLAG_DIFFICULTY_HARD, CeruleanCave3_EventScript_Mewtwo_Hard_Stats
	special BattleSetup_StartLegendaryBattle
waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, CeruleanCave3_EventScript_MewtwoRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_CERULEANCAVE_MEWTWO
	setflag FLAG_HIDE_MEWTWO
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

CeruleanCave3_EventScript_Mewtwo_Hard_Stats::
	setvar VAR_0x8000, 500 @HP
	setvar VAR_0x8003, 500 @SPD
	special SetHpStat
	special SetSpdStat
	return

CeruleanCave3_EventScript_MewtwoRan::
	release
	end

CeruleanCave3_EventScript_MaxRevive::
    finditem ITEM_MAX_REVIVE
    end

CeruleanCave3_EventScript_UltraBall::
    finditem ITEM_ULTRA_BALL
    end

