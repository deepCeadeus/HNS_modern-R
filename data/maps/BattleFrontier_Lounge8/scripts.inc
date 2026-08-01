BattleFrontier_Lounge8_MapScripts::
	.byte 0

BattleFrontier_Lounge8_EventScript_Old_Man::
	msgbox BattleFrontier_Lounge8_Text_TrainersComeBack, MSGBOX_NPC
	end

BattleFrontier_Lounge8_EventScript_LittleGirl::
	msgbox BattleFrontier_Lounge8_Text_BeatMyBrother, MSGBOX_NPC
	end

BattleFrontier_Lounge8_EventScript_Policeman::
	msgbox BattleFrontier_Lounge8_Text_ThievesLurk, MSGBOX_NPC
	end

BattleFrontier_Lounge8_Text_TrainersComeBack:
	.string "I've been coming here since the\n"
	.string "Frontier opened.\p"
	.string "Seen trainers come and go.\n"
	.string "Some win.\l"
	.string "Most lose.\p"
	.string "The ones who keep coming back?\n"
	.string "Those are the real champions.$"

BattleFrontier_Lounge8_Text_BeatMyBrother:
	.string "My big brother said I'm too young\n"
	.string "for the Frontier.\p"
	.string "But I beat him in a battle yesterday.\n"
	.string "So I think I'm ready!\p"
	.string "Maybe.\p"
	.string "Probably not.$"

BattleFrontier_Lounge8_Text_ThievesLurk:
	.string "Be careful around here, trainer. We've\n"
	.string "had reports of thieves lurking about.\l"
	.string "They target distracted battlers.\p"
	.string "Stay sharp.$"
