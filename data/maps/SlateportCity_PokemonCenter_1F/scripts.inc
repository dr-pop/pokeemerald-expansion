# 1 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_MapScripts::
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_OnTransition
# 6 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_OnTransition:
# 10 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
@ new:
# 23 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Sailor:: @ 820DAE1
# 25 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_WillyTheGreat, MSGBOX_NPC
# 26 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_EventScript_Woman:: @ 820DAEA
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_Text_IntoTheWild, MSGBOX_NPC
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_WillyTheGreat: @ 820DAF3
# 33 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "This city is named after its founder,\n"
# 34 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Willy the Great.\p"
# 35 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I wish I had a city named after myself.$"
# 36 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_IntoTheWild: @ 820DBBC
# 38 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'm mustering up courage to go out\n"
# 39 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "into the wild with my Pokémon.\p"
# 40 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "My mom tells me I'm strong enough,\n"
# 41 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "but I don't feel ready yet.$"
# 42 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
@ old:
# 44 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
//SlateportCity_PokemonCenter_1F_EventScript_Sailor::
# 46 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	//msgbox SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon, MSGBOX_NPC
# 47 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	//end
# 48 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
//SlateportCity_PokemonCenter_1F_EventScript_Woman::
# 50 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	//msgbox SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend, MSGBOX_NPC
# 51 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	//end
# 52 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_RaiseDifferentTypesOfPokemon:
# 54 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Want a tip for battling?\p"
# 55 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I'd say it's raising different kinds\n"
# 56 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "of POKéMON in a balanced manner.\p"
# 57 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "It's no good to make just one\n"
# 58 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON strong.\p"
# 59 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If it has a type disadvantage,\n"
# 60 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "it might not stand a chance.$"
# 61 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
SlateportCity_PokemonCenter_1F_Text_TradedMonWithFriend:
# 63 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "I trade POKéMON with my friends.\p"
# 64 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "If a traded POKéMON is holding an\n"
# 65 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "item, it makes me twice as happy!$"
