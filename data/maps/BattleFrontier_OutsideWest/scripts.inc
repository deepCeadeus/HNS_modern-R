.set LOCALID_SS_TIDAL, 2
.set LOCALID_FERRY_ATTENDANT, 3
.set LOCALID_MANIAC_1, 9
.set LOCALID_MANIAC_2, 10
.set LOCALID_GIRL, 12
.set LOCALID_CAMPER, 14
.set LOCALID_FISHERMAN_2, 18
.set LOCALID_MAN_4, 23

BattleFrontier_OutsideWest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideWest_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, SetTimeEncounters
	.byte 0

BattleFrontier_OutsideWest_OnTransition:
	callnative SetTimeBasedEncounters
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	end

BattleFrontier_OutsideWest_EventScript_Sailor::
	lock
	faceplayer
	msgbox BattleFrontierOutsideWest_Text_SailorReturn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_AsYouLike
	msgbox EventTicket_Text_SailHome, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	warpsilent MAP_VERMILION_CITY_PORT_INSIDE, 8, 9
	waitstate
	release
	end

BattleFrontier_OutsideWest_AsYouLike::
	msgbox EventTicket_Text_AsYouLike, MSGBOX_DEFAULT
	release
	end

BattleFrontierOutsideWest_Text_SailorReturn:
	.string "Do you want to return to VERMILION?$"

BattleFrontier_OutsideWest_EventScript_FerryAttendant::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_MayISeeYourTicket, MSGBOX_DEFAULT
	checkitem ITEM_SS_TICKET
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_OutsideWest_EventScript_NoSSTicket
	message BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination::
	multichoicedefault 18, 6, MULTI_SSTIDAL_BATTLE_FRONTIER, 2, FALSE
	switch VAR_RESULT
	case 0, BattleFrontier_OutsideWest_EventScript_FerryToSlateport
	case 1, BattleFrontier_OutsideWest_EventScript_FerryToLilycove
	case 2, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	case MULTI_B_PRESSED, BattleFrontier_OutsideWest_EventScript_CancelFerrySelect
	end

BattleFrontier_OutsideWest_EventScript_NoSSTicket::
	msgbox BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToSlateport::
	msgbox BattleFrontier_OutsideWest_Text_SlateportItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
	warp MAP_SLATEPORT_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_FerryToLilycove::
	msgbox BattleFrontier_OutsideWest_Text_LilycoveItIs, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination
	msgbox BattleFrontier_OutsideWest_Text_PleaseBoardFerry, MSGBOX_DEFAULT
	call BattleFrontier_OutsideWest_EventScript_BoardFerry
	warp MAP_LILYCOVE_CITY_HARBOR, 8, 11
	waitstate
	release
	end

BattleFrontier_OutsideWest_EventScript_ChooseNewFerryDestination::
	message BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo
	waitmessage
	goto BattleFrontier_OutsideWest_EventScript_ChooseFerryDestination
	end

BattleFrontier_OutsideWest_EventScript_BoardFerry::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	delay 30
	hideobjectat LOCALID_FERRY_ATTENDANT, MAP_BATTLE_FRONTIER_OUTSIDE_WEST
	setvar VAR_0x8004, LOCALID_SS_TIDAL
	call Common_EventScript_FerryDepartIsland
	return

BattleFrontier_OutsideWest_EventScript_CancelFerrySelect::
	msgbox BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_BattleDomeSign::
	msgbox BattleFrontier_OutsideWest_Text_BattleDomeSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattleFactorySign::
	msgbox BattleFrontier_OutsideWest_Text_BattleFactorySign, MSGBOX_SIGN
	end

BattleFrontier_OutsideWest_EventScript_BattlePikeSign::
	msgbox BattleFrontier_OutsideWest_Text_BattlePikeSign, MSGBOX_SIGN
	end

@ Unused. Of note, Battle Tower is in the East section in the final release
BattleFrontier_OutsideWest_EventScript_UnusedNPC1::
	msgbox BattleFrontier_OutsideWest_Text_ThisIsBattleTower, MSGBOX_NPC
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC2::
	msgbox BattleFrontier_OutsideWest_Text_CantFindBattleTower, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Boy1::
	msgbox BattleFrontier_OutsideWest_Text_MineNeedSnacks, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer::
	msgbox BattleFrontier_OutsideWest_Text_Reparations, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer2::
	msgbox BattleFrontier_OutsideWest_Text_Reparations2, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer3::
	msgbox BattleFrontier_OutsideWest_Text_Reparations3, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer4::
	msgbox BattleFrontier_OutsideWest_Text_Reparations4, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Fisherman2::
	msgbox BattleFrontier_OutsideWest_Text_HaventBlinked, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man1::
	msgbox BattleFrontier_OutsideWest_Text_BadgesMeantSomething, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman5::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end

BattleFrontier_OutsideWest_EventScript_Man3::
	lock
	goto BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk
	end

BattleFrontier_OutsideWest_EventScript_FactoryChallengersTalk::
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_SeviperScary, MSGBOX_DEFAULT
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox BattleFrontier_OutsideWest_Text_PikeFrontierBrain, MSGBOX_DEFAULT
	closemessage
	delay 25
	applymovement LOCALID_MANIAC_1, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_MANIAC_2, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

BattleFrontier_OutsideWest_EventScript_Camper::
	lock
	faceplayer
	delay 20
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_CamperFaceFactory
	msgbox BattleFrontier_OutsideWest_Text_OneBadSwap, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_CamperFaceFactory::
	applymovement LOCALID_CAMPER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_CamperAlreadyFacingFactory::
	return

BattleFrontier_OutsideWest_EventScript_Girl::
	lock
	faceplayer
	message BattleFrontier_OutsideWest_Text_DoFrontierBrainsDreamOfTrainers
	waitmessage
	call_if_eq VAR_FACING, DIR_NORTH, BattleFrontier_OutsideWest_EventScript_GirlShudderNorth
	call_if_eq VAR_FACING, DIR_SOUTH, BattleFrontier_OutsideWest_EventScript_GirlShudderSouth
	call_if_eq VAR_FACING, DIR_WEST, BattleFrontier_OutsideWest_EventScript_GirlShudderWest
	call_if_eq VAR_FACING, DIR_EAST, BattleFrontier_OutsideWest_EventScript_GirlShudderEast
	waitbuttonpress
	release
	end

BattleFrontier_OutsideWest_EventScript_GirlShudderNorth::
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderNorth
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderSouth::
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderSouth
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderWest::
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderWest
	waitmovement 0
	return

BattleFrontier_OutsideWest_EventScript_GirlShudderEast::
	applymovement LOCALID_GIRL, BattleFrontier_OutsideWest_Movement_GirlShudderEast
	waitmovement 0
	return

BattleFrontier_OutsideWest_Movement_GirlShudderNorth:
	walk_in_place_faster_down
	walk_in_place_faster_down
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderSouth:
	walk_in_place_faster_up
	walk_in_place_faster_up
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderWest:
	walk_in_place_faster_right
	walk_in_place_faster_right
	step_end

BattleFrontier_OutsideWest_Movement_GirlShudderEast:
	walk_in_place_faster_left
	walk_in_place_faster_left
	step_end

BattleFrontier_OutsideWest_EventScript_Woman2::
	lock
	faceplayer
	msgbox BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors, MSGBOX_DEFAULT
	random 2
	goto_if_eq VAR_RESULT, 1, BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors
	goto BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors
	end

BattleFrontier_OutsideWest_EventScript_WomanWonRockPaperScissors::
	msgbox BattleFrontier_OutsideWest_Text_WonIllTakeDomeChallenge, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_WomanLostRockPaperScissors::
	msgbox BattleFrontier_OutsideWest_Text_LostIllPutOffDomeChallenge, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Fisherman1::
	msgbox BattleFrontier_OutsideWest_Text_NoPokemonInWater, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Fisherman_Milotic::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MILOTIC, CRY_MODE_NORMAL
	msgbox BattleFrontier_OutsideWest_Text_Milotic, MSGBOX_DEFAULT
	waitmoncry
	release
	end

@ Unused
BattleFrontier_OutsideWest_EventScript_UnusedNPC3::
	msgbox BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Gentleman::
	msgbox BattleFrontier_OutsideWest_Text_IFoughtRegions, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Psychic::
	msgbox BattleFrontier_OutsideWest_Text_AreThereMoreBF, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_ExpertM::
	msgbox BattleFrontier_OutsideWest_Text_CantFindGlasses, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Juggler::
	msgbox BattleFrontier_OutsideWest_Text_FrontierBrainsSame, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman1::
	msgbox BattleFrontier_OutsideWest_Text_CoolOffTrainers, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan1::
	msgbox BattleFrontier_OutsideWest_Text_PalletTownStreak, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_FatMan2::
	msgbox BattleFrontier_OutsideWest_Text_LostToALinoone, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman3::
	msgbox BattleFrontier_OutsideWest_Text_Legends, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Woman4::
	msgbox BattleFrontier_OutsideWest_Text_TerrifyingBrains, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_OldMan::
	msgbox BattleFrontier_OutsideWest_Text_ChampionOnce, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Man4::
	msgbox BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_PokefanF::
	msgbox BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_Text_BattleDomeSign:
	.string "This is the BATTLE DOME!\n"
	.string "Your path to the invincible superstar!$"

BattleFrontier_OutsideWest_Text_BattleFactorySign:
	.string "This is the BATTLE FACTORY!\n"
	.string "Seek out the toughest POKéMON!$"

BattleFrontier_OutsideWest_Text_BattlePikeSign:
	.string "This is the BATTLE PIKE!\n"
	.string "Choose one of three paths!$"

BattleFrontier_OutsideWest_Text_ThisIsBattleTower:
	.string "This is the BATTLE TOWER.\p"
	.string "TRAINERS bring their best-raised\n"
	.string "POKéMON for elimination-style matches.$"

BattleFrontier_OutsideWest_Text_MayISeeYourTicket:
	.string "Hello, are you here for the ferry?\n"
	.string "May I see your TICKET?$"

BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard:
	.string "{PLAYER} doesn't have the TICKET…\p"
	.string "I'm terribly sorry.\p"
	.string "You must have a TICKET to board\n"
	.string "the ferry.$"

BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo:
	.string "{PLAYER} flashed the TICKET.\p"
	.string "Perfect! That's all you need!\p"
	.string "And where would you like to go?$"

BattleFrontier_OutsideWest_Text_SlateportItIs:
	.string "SLATEPORT CITY it is, then!$"

BattleFrontier_OutsideWest_Text_LilycoveItIs:
	.string "LILYCOVE CITY it is, then!$"

BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime:
	.string "Please sail with us another time!$"

BattleFrontier_OutsideWest_Text_PleaseBoardFerry:
	.string "Please board the ferry and wait for\n"
	.string "departure.$"

BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo:
	.string "Then, where would you like to go?$"

BattleFrontier_OutsideWest_Text_MineNeedSnacks:
	.string "That trainer’s Pokémon didn’t even\n"
	.string "look tired!\p"
	.string "Mine needs snacks after one battle.$"

BattleFrontier_OutsideWest_Text_CantFindBattleTower:
	.string "I want to go to the BATTLE TOWER,\n"
	.string "but I can't find it even though I have\l"
	.string "a map of the BATTLE FRONTIER.\p"
	.string "This place is just too big!$"

BattleFrontier_OutsideWest_Text_HaventBlinked:
	.string "I came to watch one battle.\p"
	.string "That was three hours ago.\n"
	.string "I think I forgot to blink.$"

BattleFrontier_OutsideWest_Text_BadgesMeantSomething:
	.string "Back in my day, eight badges\n"
	.string "meant something.\p"
	.string "Here? That just gets you\n"
	.string "through the front door.$"

BattleFrontier_OutsideWest_Text_SeviperScary:
	.string "Hey…\p"
	.string "Isn't that SEVIPER a bit scary?$"

BattleFrontier_OutsideWest_Text_PikeFrontierBrain:
	.string "The FRONTIER BRAIN from the BATTLE\n"
	.string "PIKE is scarier, trust me!\p"
	.string "I lost pretty quickly…$"

BattleFrontier_OutsideWest_Text_OneBadSwap:
	.string "Some trainers leave smiling.\p"
	.string "Some leave in silence.\p"
	.string "The difference is usually one bad swap.\p"
	.string "In the BATTLE FACTORY, you fight\n"
	.string "uncertainty.$"

BattleFrontier_OutsideWest_Text_DoFrontierBrainsDreamOfTrainers:
	.string "I wanna grow up and be a FRONTIER\n"
	.string "BRAIN!\p"
	.string "… … …\p"
	.string "Do they sleep?$"

BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors:
	.string "Let's play rock, paper, scissors!\n"
	.string "One, two, three!\p"
	.string "… … … … … …$"

BattleFrontier_OutsideWest_Text_WonIllTakeDomeChallenge:
	.string "Yay! I won!\n"
	.string "I will take the BATTLE DOME challenge!$"

BattleFrontier_OutsideWest_Text_LostIllPutOffDomeChallenge:
	.string "Oh, no…\n"
	.string "I lost.\p"
	.string "I guess I'm not very lucky today.\n"
	.string "I'll put off my BATTLE DOME challenge\l"
	.string "until tomorrow.$"

BattleFrontier_OutsideWest_Text_NoPokemonInWater:
	.string "How is it possible that there are no\n"
	.string "water POKéMON in a place located in\l"
	.string "the middle of the sea?$"

BattleFrontier_OutsideWest_Text_AreThereMoreBF:
	.string "I wonder if there are more BATTLE\n"
	.string "FRONTIERS out there.$"

BattleFrontier_OutsideWest_Text_IFoughtRegions:
	.string "I fought through KANTO, JOHTO,\n"
	.string "and HOENN.\p"
	.string "This place scares me more than\n"
	.string "all of them.$"

BattleFrontier_OutsideWest_Text_DomeIsHereGrandpa:
	.string "Grandpa, over here!\n"
	.string "The BATTLE DOME is here!\l"
	.string "Go get 'em, Grandpa!$"

BattleFrontier_OutsideWest_Text_CantFindGlasses:
	.string "I lost my glasses!\p"
	.string "I need them to see the increible\n"
	.string "battles that happen in the BATTLE DOME!$"

BattleFrontier_OutsideWest_Text_FrontierBrainsSame:
	.string "If this place is a recreation of\n"
	.string "HOENN's BATTLE FRONTIER…\p"
	.string "How did they get the same people\n"
	.string "to be FRONTIER BRAINS?$"

BattleFrontier_OutsideWest_Text_CoolOffTrainers:
	.string "They built this on the coast so trainers\n"
	.string "could ‘cool off’ after losing.\p"
	.string "The ocean’s very popular today.$"

BattleFrontier_OutsideWest_Text_PalletTownStreak:
	.string "I saw a kid from PALLET TOWN\n"
	.string "go on a 42-win streak.\p"
	.string "Professor Oak hasn’t stopped\n"
	.string "bragging since.$"

BattleFrontier_OutsideWest_Text_LostToALinoone:
	.string "I lost to a LINOONE.\p"
	.string "A.\p"
	.string "LINOONE.\p"
	.string "I trained for six months!$"

BattleFrontier_OutsideWest_Text_Legends:
	.string "I didn’t come for symbols.\p"
	.string "I came for legends.$"

BattleFrontier_OutsideWest_Text_TerrifyingBrains:
	.string "A Brain only battles when\n"
	.string "they feel like it.\p"
	.string "Which is terrifying, if you\n"
	.string "think about it.$"

BattleFrontier_OutsideWest_Text_ChampionOnce:
	.string "They say one of the FRONTIER BRAINS\n"
	.string "once become the CHAMPION without\l"
	.string "using their ace.$"

BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers:
	.string "I heard they scout trainers in secret.\p"
	.string "If you trip on the stairs, you’ve\n"
	.string "already been evaluated.$"

BattleFrontier_OutsideWest_Text_MonWithLongTailInFrontier:
	.string "Until just a few weeks ago, there used to\n"
	.string "be a cave here in the BATTLE FRONTIER!\p"
	.string "Inside, you could find strange POKéMON\n"
	.string "with unusually long tails!\p"
	.string "But not long ago, the cave suddenly\n"
	.string "collapsed for no clear reason…\p"
	.string "I can’t help but wonder what became\n"
	.string "of those poor creatures…$"

BattleFrontier_OutsideWest_Text_Reparations:
    .string "Careful there!\p"
    .string "The cave below the BATTLE FRONTIER\n"
    .string "collapsed not long ago.\p"
    .string "We’re reinforcing the structure so it\n"
    .string "won’t happen again.\p"
    .string "Until repairs are finished, you’ll need\n"
    .string "to move around using wooden bridges.$"

BattleFrontier_OutsideWest_Text_Reparations2:
    .string "Watch your step!\p"
    .string "We’re still fixing the damage from\n"
    .string "the cave collapse.\p"
    .string "These wooden bridges are just\n"
    .string "temporary, so be careful!$"

BattleFrontier_OutsideWest_Text_Reparations3:
    .string "Ugh… Another day of repairs.\n"
    .string "That cave collapse caused a mess.\p"
    .string "I just hope these supports hold\n"
    .string "until we finish the job.$"

BattleFrontier_OutsideWest_Text_Reparations4:
    .string "These MACHOKE and MACHAMP are a\n"
    .string "huge help with the repairs!\p"
    .string "Without them, rebuilding after the\n"
    .string "collapse would take forever!$"

BattleFrontier_OutsideWest_Text_Milotic:
	.string "MILOTIC: Milooo!$"
