Route6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route6_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route6_EventScript_Rex::
	trainerbattle_single TRAINER_REX PokefanM_Text_RexSeen, PokefanM_Text_RexBeaten
	msgbox PokefanM_Text_RexAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Allan::
	trainerbattle_single TRAINER_ALLAN PokefanM_Text_AllanSeen, PokefanM_Text_AllanBeaten, Route6_EventScript_Allan_Register
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route6_EventScript_Allan_Rematch
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Allan_Register::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox PokefanM_Text_Allan_Register, MSGBOX_DEFAULT
	register_matchcall TRAINER_ALLAN
	release
	end

Route6_EventScript_Allan_Rematch::
	trainerbattle_rematch TRAINER_ALLAN PokefanM_Text_AllanSeen_Rematch, PokefanM_Text_AllanBeaten
	msgbox PokefanM_Text_AllanAfter, MSGBOX_AUTOCLOSE
	end

Route6_EventScript_Pokefan::
	msgbox Route6_Text_PokefanM, MSGBOX_NPC
	end

Route6_EventScript_Sign::
	msgbox Route6_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route6_Text_PokefanM:
	.string "The road is closed until the\n"
	.string "problem at the Power Plant is\l"
	.string "solved.$"

Route6_Text_UndergroundPathSign:
	.string "Underground Path\p"
	.string "Cerulean City - Vermilion City$"

PokefanM_Text_RexSeen:
	.string "My Stantler is the cutest in the\n"
	.string "world.$"

PokefanM_Text_RexBeaten:
	.string "My Stantler!$"

PokefanM_Text_RexAfter:
	.string "Look how adorable my Stantler\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"

PokefanM_Text_AllanSeen:
	.string "My Granbull is the cutest in the\n"
	.string "world.$"

PokefanM_Text_AllanSeen_Rematch:
	.string "My Granbull is the cutest in the\n"
	.string "world.\p"
	.string "And so are the rest of my PokÉMon!$"

PokefanM_Text_Allan_Register::
	.string "Do you want to see how strong my\n"
	.string "Granbull gets?$"

PokefanM_Text_AllanBeaten:
	.string "My Granbull!$"

PokefanM_Text_AllanAfter:
	.string "Look how adorable my Granbull\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"

