.set LOCALID_SEAFOAM_ARTICUNO, 1

SeafoamIslands_B1F_MapScripts::
	.byte 0

SeafoamIslands_B1F_EventScript_Articuno::
	lock
	faceplayer
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
	msgbox SeafoamIslands_B1F_Text_ArticunoBattle
	delay 40
	waitmoncry
	seteventmon SPECIES_ARTICUNO, 50
	call_if_set FLAG_DIFFICULTY_HARD, SeafoamIslands_B1F_EventScript_Articuno_Stats
	special BattleSetup_StartLegendaryBattle
waitstate
	calculatemonstats
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B1F_EventScript_ArticunoRan
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_SEAFOAM_ARTICUNO
	setflag FLAG_HIDE_ARTICUNO
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

SeafoamIslands_B1F_EventScript_Articuno_Stats::
	setvar VAR_0x8000, 450 @HP
	setvar VAR_0x8006, 400 @SP. DEF
	special SetHpStat
	special SetSpDefStat
	return

SeafoamIslands_B1F_EventScript_ArticunoRan::
	release
	end

SeafoamIslands_B1F_Text_ArticunoBattle:
	.string "Gyaoo!$"


