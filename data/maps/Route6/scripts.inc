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
	.string "problem at the POWER PLANT is\l"
	.string "solved.$"

Route6_Text_UndergroundPathSign:
	.string "UNDERGROUND PATH\p"
	.string "CERULEAN CITY - VERMILION CITY$"

PokefanM_Text_RexSeen:
	.string "My STANTLER is the cutest in the\n"
	.string "world.$"

PokefanM_Text_RexBeaten:
	.string "My STANTLER!$"

PokefanM_Text_RexAfter:
	.string "Look how adorable my STANTLER\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"

PokefanM_Text_AllanSeen:
	.string "My GRANBULL is the cutest in the\n"
	.string "world.$"

PokefanM_Text_AllanSeen_Rematch:
	.string "My GRANBULL is the cutest in the\n"
	.string "world.\p"
	.string "And so are the rest of my POKÉMON!$"

PokefanM_Text_Allan_Register::
	.string "Do you want to see how strong my\n"
	.string "GRANBULL gets?$"

PokefanM_Text_AllanBeaten:
	.string "My GRANBULL!$"

PokefanM_Text_AllanAfter:
	.string "Look how adorable my GRANBULL\n"
	.string "acts!\p"
	.string "Isn't it cute enough to make\n"
	.string "your heart melt?$"

