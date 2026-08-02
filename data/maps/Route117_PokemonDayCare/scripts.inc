Route117_PokemonDayCare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route117_PokemonDayCare_OnTransition
	.byte 0

Route117_PokemonDayCare_OnTransition:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end

Route117_PokemonDayCare_Incense::
	msgbox Route117_PokemonDayCare_Incense_Text, MSGBOX_NPC
	end

Route117_PokemonDayCare_Incense_Text:
	.string "Certain Pokémon can only be obtained\n"
	.string "if they are bred with an item called\l"
	.string "Incense. There are 2 types of it.\p"
	.string "How many Pokémon can be obtained?\n"
	.string "Well, currently 9 different Pokémon\l"
	.string "can be obtained using Incense.$"
