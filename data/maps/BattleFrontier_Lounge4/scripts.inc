BattleFrontier_Lounge4_MapScripts::
	.byte 0

BattleFrontier_Lounge4_EventScript_FatMan::
	msgbox BattleFrontier_Lounge4_Text_Challenge, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Youngster::
	msgbox BattleFrontier_Lounge4_Text_IcyVeins, MSGBOX_NPC
	end

BattleFrontier_Lounge4_EventScript_Man::
	msgbox BattleFrontier_Lounge4_Text_AmbitionInTheAir, MSGBOX_NPC
	end

BattleFrontier_Lounge4_Text_Challenge:
	.string "The view from the top of the BATTLE\n" 
	.string "TOWER must be something else.\p"
	.string "But it's not the view I'm after,\n" 
	.string "it's the challenge that comes\l"
	.string "with earning it.$"

BattleFrontier_Lounge4_Text_IcyVeins:
	.string "My big sis says this place is for\n"
	.string "trainers with ice in their veins.\p"
	.string "I want to be that cool one day, too.$"

BattleFrontier_Lounge4_Text_AmbitionInTheAir:
	.string "I don't battle much, but I\n"
	.string "love the atmosphere.\p"
	.string "You can feel the ambition and\n"
	.string "tension in the air.$"
