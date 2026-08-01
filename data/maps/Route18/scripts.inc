Route18_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route18_OnTransition:
	callnative SetTimeBasedEncounters
	end

Route18_EventScript_Boris::
	trainerbattle_single TRAINER_BORIS Route18_Text_BirdKeeperBorisSeen, Route18_Text_BirdKeeperBorisBeaten
	msgbox Route18_Text_BirdKeeperBorisAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Bob::
	trainerbattle_single TRAINER_BOB Route18_Text_BirdKeeperBobSeen, Route18_Text_BirdKeeperBobBeaten, Route18_EventScript_Bob_Register
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route18_EventScript_Bob_Rematch
	msgbox Route18_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Bob_Register::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route18_Text_BirdKeeperBob_Register, MSGBOX_DEFAULT
	register_matchcall TRAINER_BOB
	release
	end

Route18_EventScript_Bob_Rematch::
	trainerbattle_rematch TRAINER_BOB Route18_Text_BirdKeeperBobSeen, Route18_Text_BirdKeeperBobBeaten
	msgbox Route18_Text_BirdKeeperBobAfterBattle, MSGBOX_AUTOCLOSE
	end

Route18_EventScript_Sign::
	msgbox Route18_Text_Sign, MSGBOX_SIGN
	end

Route18_Text_BirdKeeperBorisSeen:
	.string "If you're looking for Pokémon,\n"
	.string "you have to look in the tall grass.$"

Route18_Text_BirdKeeperBorisBeaten:
	.string "Ayieee!$"

Route18_Text_BirdKeeperBorisAfterBattle:
	.string "Since you're so strong, it must be\n"
	.string "fun to battle.$"

Route18_Text_BirdKeeperBobSeen:
	.string "Cycling Road is a quick shortcut\n"
	.string "to Celadon.$"

Route18_Text_BirdKeeperBob_Register:
	.string "I'll stay here for a while.\p"
	.string "Come back if you want to\n"
	.string "battle again.$"

Route18_Text_BirdKeeperBobBeaten:
	.string "…Whew!$"

Route18_Text_BirdKeeperBobAfterBattle:
	.string "If you don't have a bicycle,\n"
	.string "you're not allowed to use the\l"
	.string "shortcut.$"

Route18_Text_Sign:
	.string "Route 18\p"
	.string "Celadon City - Fuchsia City$"
