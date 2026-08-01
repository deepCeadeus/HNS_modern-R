.set LOCALID_SUDOWOODO, 14
.set LOCALID_BRANDON, 40

BattleFrontier_OutsideEast_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, BattleFrontier_OutsideEast_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, BattleFrontier_OutsideEast_OnTransition
	.byte 0

BattleFrontier_OutsideEast_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo
	end

BattleFrontier_OutsideEast_EventScript_TryRemoveSudowoodo::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

BattleFrontier_OutsideEast_OnTransition:
	setvar VAR_BRAVO_TRAINER_BATTLE_TOWER_ON, 0
	setflag FLAG_HIDE_BATTLE_TOWER_REPORTER
	call_if_unset FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_ShowSudowoodo
	end

BattleFrontier_OutsideEast_EventScript_ShowSudowoodo::
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
	return

BattleFrontier_OutsideEast_EventScript_BattleTowerSign::
	msgbox BattleFrontier_OutsideEast_Text_BattleTowerSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattlePalaceSign::
	msgbox BattleFrontier_OutsideEast_Text_BattlePalaceSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattleArenaSign::
	msgbox BattleFrontier_OutsideEast_Text_BattleArenaSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_BattlePyramidSign::
	msgbox BattleFrontier_OutsideEast_Text_BattlePyramidSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_ScientistF::
	msgbox BattleFrontier_OutsideEast_Text_DecidingTeam, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man1::
	msgbox BattleFrontier_OutsideEast_Text_BFLights, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Hiker::
	msgbox BattleFrontier_OutsideEast_Text_WallsMoved, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_HexManiac::
	msgbox BattleFrontier_OutsideEast_Text_BreathingInDarkness, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_BlackBelt1::
	msgbox BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Cook::
	lock
	msgbox BattleFrontier_OutsideEast_Text_BelieveInYouBuddyNew, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideWest_EventScript_Engineer5::
	msgbox BattleFrontier_OutsideWest_Text_Reparations5, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer6::
	msgbox BattleFrontier_OutsideWest_Text_Reparations6, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer7::
	msgbox BattleFrontier_OutsideWest_Text_Reparations7, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_EventScript_Engineer8::
	msgbox BattleFrontier_OutsideWest_Text_Reparations8, MSGBOX_NPC
	end

BattleFrontier_OutsideWest_Text_Reparations5:
	.string "We’re almost done with the repairs.\p"
    .string "MACHAMP’s been a huge help\n"
    .string "lifting the heavier rocks.$"

BattleFrontier_OutsideWest_Text_Reparations6:
    .string "Watch your step!\n"
    .string "The ground’s still unstable here.\p"
    .string "Good thing the MACHOKE team’s been\n"
    .string "helping us clear the debris.$"

BattleFrontier_OutsideWest_Text_Reparations7:
    .string "Those wooden bridges are the only\n"
    .string "way across while we finish repairs.$"

BattleFrontier_OutsideWest_Text_Reparations8:
    .string "The cave’s still unstable, so we built\n"
    .string "temporary wooden bridges.\p"
    .string "They’re sturdy… I think.$"

BattleFrontier_OutsideWest_EventScript_Brandon::
	lock
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	msgbox BattleFrontier_OutsideWest_Text_Brandon, MSGBOX_NPC
	closemessage
	setflag FLAG_BF_BRANDON_CAVEDOOR
	applymovement LOCALID_BRANDON, BattleFrontier_OutsideWest_EventScript_Brandon_Movement
	waitmovement 0
	playse SE_EXIT
	applymovement LOCALID_BRANDON, BattleFrontier_OutsideWest_EventScript_Brandon_Movement2
	waitmovement 0
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	callnative UpdateFollowingPokemon
	release
	end

BattleFrontier_OutsideWest_Text_Brandon:
	.string "?????: Hahahah!\p"
	.string "Are you the explorer SCOTT brought to\n"
	.string "deal with the POKéMON tearing up\l"
	.string "the underground?\p"
	.string "…\p"
	.string "No?\p"
	.string "That can't be!\p"
	.string "SCOTT swears you're the best option\n"
	.string "we've got.\p"
	.string "BRANDON: I'm BRANDON, nice to meet\n"
	.string "a young explorer like you.\p"
	.string "Come inside. We'll go over the ruins\n"
	.string "while we examine them.$"

BattleFrontier_OutsideWest_EventScript_Brandon_Movement:
	face_up
	walk_up
	step_end

BattleFrontier_OutsideWest_EventScript_Brandon_Movement2:
	set_invisible
	walk_up
	walk_up
	step_end

BattleFrontier_OutsideEast_EventScript_Lickilicky::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_LICKILICKY, CRY_MODE_NORMAL
	msgbox BattleFrontier_OutsideEast_Text_LickyIsReady, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_OutsideEast_EventScript_Swampert::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SWAMPERT, CRY_MODE_NORMAL
	msgbox BattleFrontier_OutsideEast_Text_SwampertObj, MSGBOX_DEFAULT
	waitmoncry
	release
	end

BattleFrontier_OutsideEast_EventScript_RichBoy::
	msgbox BattleFrontier_OutsideEast_Text_TrustTheirNature, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_ExpertF::
	msgbox BattleFrontier_OutsideEast_Text_TrainsOrTrainers, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_TriathleteF::
	msgbox BattleFrontier_OutsideEast_Text_SuspiciousMe, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Twin::
	msgbox BattleFrontier_OutsideEast_Text_DontKnowWhereToStart, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man2::
	lock
	msgbox BattleFrontier_OutsideEast_Text_WhereToStart, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_TriathleteM::
	msgbox BattleFrontier_OutsideEast_Text_HaventGoneYet, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Sudowoodo::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
	waitmovement 0
	release
	end

BattleFrontier_OutsideEast_EventScript_WaterSudowoodo::
	lock
	faceplayer
	special DoWateringBerryTreeAnim
	waitstate
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement LOCALID_SUDOWOODO, BattleFrontier_OutsideEast_Movement_SudowoodoShake
	waitmovement 0
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
	setwildbattle SPECIES_SUDOWOODO, 40
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo
	setflag FLAG_DEFEATED_SUDOWOODO
	release
	end

BattleFrontier_OutsideEast_EventScript_DefeatedSudowoodo::
	setflag FLAG_DEFEATED_SUDOWOODO
	goto Common_EventScript_RemoveStaticPokemon
	end

BattleFrontier_OutsideEast_Movement_SudowoodoShake:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

BattleFrontier_OutsideEast_EventScript_Maniac1::
	msgbox BattleFrontier_OutsideEast_Text_RipMaths, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Girl::
	msgbox BattleFrontier_OutsideEast_Text_SpencerTaughtMe, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_CooltrainerF::
	msgbox BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Man3::
	msgbox BattleFrontier_OutsideEast_Text_AnabelOnAnotherLevel, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Woman1::
	msgbox BattleFrontier_OutsideEast_Text_AnabelSixthSense, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Woman2::
	msgbox BattleFrontier_OutsideEast_Text_SmellsLikeChallenge, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_BlackBelt2::
	msgbox BattleFrontier_OutsideEast_Text_SecondPage, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_Maniac2::
	lock
	msgbox BattleFrontier_OutsideEast_Text_BestIsDome, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_Woman3::
	lock
	msgbox BattleFrontier_OutsideEast_Text_NoBestIsPalace, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_RankingHallSign::
	msgbox BattleFrontier_OutsideEast_Text_RankingHallSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_ExchangeCornerSign::
	msgbox BattleFrontier_OutsideEast_Text_ExchangeCornerSign, MSGBOX_SIGN
	end

BattleFrontier_OutsideEast_EventScript_Gentleman::
	msgbox BattleFrontier_OutsideEast_Text_SwamperStrong, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_EventScript_OldWoman::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone
	msgbox BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_OldWomanSudowoodoGone::
	msgbox BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
	release
	end

BattleFrontier_OutsideEast_EventScript_Camper::
	msgbox BattleFrontier_OutsideEast_Text_StickyMonWithLongTail, MSGBOX_NPC
	end

BattleFrontier_OutsideEast_Text_BattleTowerSign:
	.string "This is the Battle Tower!\n"
	.string "Keep the win streak as the toughest\l"
	.string "Trainer!$"

BattleFrontier_OutsideEast_Text_BattlePalaceSign:
	.string "This is the Battle Palace!\n"
	.string "Keep your eyes on Pokémon battles!$"

BattleFrontier_OutsideEast_Text_BattleArenaSign:
	.string "This is the Battle Arena!\n"
	.string "Let the toughest teams gather!$"

BattleFrontier_OutsideEast_Text_BattlePyramidSign:
	.string "This is the Battle Pyramid!\n"
	.string "Advance through the Battle Quest!$"

BattleFrontier_OutsideEast_Text_RankingHallSign:
	.string "Battle Frontier Ranking Hall\n"
	.string "Set your sights on new records!$"

BattleFrontier_OutsideEast_Text_ExchangeCornerSign:
	.string "Battle Point Exchange Service Corner\n"
	.string "Exchange your Battle Points and\l"
	.string "trade with other Trainers!$"

BattleFrontier_OutsideEast_Text_DecidingTeam:
	.string "I'm trying to decide on my team for\n"
	.string "the Battle Tower.\p"
	.string "It's so hard!$"

BattleFrontier_OutsideEast_Text_BFLights:
	.string "The lights at night?\p" 
	.string "Beautiful.\p" 
	.string "The battles during the day?\p" 
	.string "Brutal.$"

BattleFrontier_OutsideEast_Text_WallsMoved:
	.string "I swear the Battle Pyramid walls move\n"
	.string "by themselves!$"
	
BattleFrontier_OutsideEast_Text_BreathingInDarkness:
	.string "My flashlight died inside the pyramid.\p"
	.string "Then I heard breathing.\p"
	.string "It wasn't mine…$"

BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam:
	.string "I didn't sleep for a week, but then\n"
	.string "I put together the ultimate team!\p"
	.string "I can't see myself losing, no joke.\n"
	.string "We're storming the Battle Arena!$"

BattleFrontier_OutsideEast_Text_HaventGoneYet:
	.string "My hands won't stop shaking.\n"
	.string "And I haven't even gone inside\l"
	.string "the Battle Pyramid yet.$"

BattleFrontier_OutsideEast_Text_BelieveInYouBuddyNew:
	.string "Licky!\n"
	.string "I believe in you, big buddy!\p"
	.string "I'll make my big Licky any favorite\n"
	.string "tasty treats you like if you win!\p"
	.string "Just like I did with Zigg!$"

BattleFrontier_OutsideEast_Text_LickyIsReady:
	.string "Lickilicky seems ready to battle!$"

BattleFrontier_OutsideEast_Text_SwampertObj:
	.string "Swampert: Swaaamp!$"

BattleFrontier_OutsideEast_Text_TrustTheirNature:
	.string "In the Battle Palace, you have\n"
	.string "to trust your Pokémon's nature.$"

BattleFrontier_OutsideEast_Text_TrainsOrTrainers:
	.string "Some trains never come back.\n"
	.string "Neither do some Trainers.$"

BattleFrontier_OutsideEast_Text_SuspiciousMe:
	.string "Suspicious? Me?\p"
	.string "I guess I do look like a Burglar.$"

BattleFrontier_OutsideEast_Text_DontKnowWhereToStart:
	.string "Wow!\p"
	.string "This place is huge!\p"
	.string "I don't know where to start!$"

BattleFrontier_OutsideEast_Text_WhereToStart:
	.string "Which place should we visit first,\n"
	.string "sweetie?$"

BattleFrontier_OutsideEast_Text_RipMaths:
	.string "I used to calculate everything.\n"
	.string "Probabilities.\l"
	.string "Counters.\l"
	.string "Switch advantages.\p"
	.string "Then I spent one hour in this Dojo and\n"
	.string "realized I'd never really battled.\p"
	.string "I'm just done with Pokémon math.$"

BattleFrontier_OutsideEast_Text_SpencerTaughtMe:
	.string "Spenser taught me that a Pokémon's\n"
	.string "nature isn't just a set of stats,\l" 
	.string "it's a reflection of its soul.$"

BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid:
	.string "I've been to the bottom of Granite Cave.\n"
	.string "I've explored the innermost chambers of\l"
	.string "Victory Road…\p"
	.string "But the silence in the Battle Pyramid?\p"
	.string "That's a different kind of dark.\n"
	.string "It's a heavy silence.\p"
	.string "It's the sound of a mountain that knows\n"
	.string "you're an intruder.\p"
	.string "When you finally see Brandon's\n"
	.string "silhouette at the top, it's like\l"
	.string "finding a lighthouse in a storm.$"

BattleFrontier_OutsideEast_Text_AnabelOnAnotherLevel:
	.string "I've won 100 times in a row at the\n" 
	.string "Battle Tower.\p" 
	.string "But the Frontier Brain…\p"
	.string "She's on another level.$"

BattleFrontier_OutsideEast_Text_AnabelSixthSense:
	.string "The Battle Tower is a pure test of\n"
	.string "strength and strategy, a pillar of logic.\p"
	.string "Yet, Anabel reads the flow of battle\n"
	.string "like she can see a few seconds into\l"
	.string "the future.\p"
	.string "It's not just skill;\n"
	.string "it's a sixth sense.$"

BattleFrontier_OutsideEast_Text_SmellsLikeChallenge:
	.string "The sea air here is different from\n"
	.string "Johto or Kanto.\p"
	.string "It smells like challenge.$"

BattleFrontier_OutsideEast_Text_SecondPage:
	.string "My name was on that board once!\p"
	.string "Second page.\n"
	.string "Still counts.$"

BattleFrontier_OutsideEast_Text_BestIsDome:
	.string "The Battle Dome is obviously the best!\n"
	.string "It's got the biggest crowd!$"

BattleFrontier_OutsideEast_Text_NoBestIsPalace:
	.string "No way! The Battle Palace is the best!\n"
	.string "You can hear the Pokémon cheering\l"
	.string "for themselves!$"

BattleFrontier_OutsideEast_Text_SwamperStrong:
	.string "My Swampert is incredibly strong,\n"
	.string "but it's also incredibly lazy in battle.$"

BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle:
	.string "Excuse me, young one.\n"
	.string "Have you good eyesight?\p"
	.string "There is an odd tree past here, and to\n"
	.string "my tired eyes it seems to wiggle.$"

BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere:
	.string "Excuse me, young one.\n"
	.string "Have you a good memory?\p"
	.string "I have this feeling there once was\n"
	.string "an odd tree past here.$"

BattleFrontier_OutsideEast_Text_StickyMonWithLongTail:
	.string "I…\n"
	.string "I saw it!\p"
	.string "There was a sticky sort of a Pokémon\n"
	.string "with a long tail up ahead!\p"
	.string "It was hiding under a boulder, and\n"
	.string "it kept staring at me!$"
