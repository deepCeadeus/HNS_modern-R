Route1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

Route1_OnTransition: 
	callnative SetTimeBasedEncounters
	end

Route1_EventScript_SchoolboyDanny::
	trainerbattle_single TRAINER_DANNY, Route1_Text_SchoolboyDanny_Seen, Route1_Text_SchoolboyDanny_Beaten
	msgbox Route1_Text_SchoolboyDanny_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Quinn::
	trainerbattle_single TRAINER_QUINN, Route1_Text_CooltrainerFQuinn_Seen, Route1_Text_CooltrainerFQuinn_Beaten, Route1_EventScript_Quinn_Register
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route1_EventScript_Quinn_Rematch
	msgbox Route1_Text_CooltrainerFQuinn_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Quinn_Register::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route1_Text_CooltrainerFQuinn_Register, MSGBOX_DEFAULT
	register_matchcall TRAINER_QUINN
	release
	end

Route1_EventScript_Quinn_Rematch::
	trainerbattle_rematch TRAINER_QUINN, Route1_Text_CooltrainerFQuinn_Seen, Route1_Text_CooltrainerFQuinn_Beaten
	msgbox Route1_Text_CooltrainerFQuinn_AfterBattle, MSGBOX_AUTOCLOSE
	end

Route1_EventScript_Sign::
	msgbox Route1_Text_Sign, MSGBOX_SIGN
	end

Route1_Text_SchoolboyDanny_Seen:
	.string "If Trainers meet, the first\n"
	.string "thing to do is battle.$"

Route1_Text_SchoolboyDanny_Beaten:
	.string "Awww… I've got a losing record…$"

Route1_Text_SchoolboyDanny_AfterBattle:
	.string "For Trainers, it's a given that\n"
	.string "we'll battle whenever we meet.$"

Route1_Text_CooltrainerFQuinn_Seen:
	.string "You there! Want to battle?$"

Route1_Text_CooltrainerFQuinn_Register:
	.string "You! Your number!$"

Route1_Text_CooltrainerFQuinn_Beaten:
	.string "Down and out…$"

Route1_Text_CooltrainerFQuinn_AfterBattle:
	.string "You're strong.\p"
	.string "You obviously must have trained\n"
	.string "hard.$"

Route1_Text_Sign:
	.string "Route 1\p"
	.string "Pallet Town - Viridian City$"
