# 1 "data/maps/RustboroCity_House1/scripts.pory"

# 2 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 3 "data/maps/RustboroCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_House1/scripts.pory"

# 5 "data/maps/RustboroCity_House1/scripts.pory"
@ new:
# 6 "data/maps/RustboroCity_House1/scripts.pory"

# 7 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Husband:: @ 82159DF
# 8 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_Husband, MSGBOX_NPC
# 9 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 10 "data/maps/RustboroCity_House1/scripts.pory"

# 11 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Daughter:: @ 82159DF
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_Daughter, MSGBOX_NPC
# 13 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 14 "data/maps/RustboroCity_House1/scripts.pory"

# 15 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_Husband: @ 8215B57
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	.string "My husband is a true adventurer. But\n"
# 17 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I prefer the coziness of being home.\p"
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh, opposites attract, I guess.$"
# 19 "data/maps/RustboroCity_House1/scripts.pory"

# 20 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_Daughter: @ 8215B57
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Daddy said that if I study hard, one\n"
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	.string "day I will join him on his travels!$"
# 23 "data/maps/RustboroCity_House1/scripts.pory"

# 24 "data/maps/RustboroCity_House1/scripts.pory"
@ old:
# 25 "data/maps/RustboroCity_House1/scripts.pory"

# 26 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Trader::
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_TradeCompleted
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 31 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 33 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 34 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_House1_EventScript_DeclineTrade
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, RustboroCity_House1_EventScript_DeclineTrade
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 43 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 44 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 46 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 47 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 48 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 49 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 50 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 52 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 53 "data/maps/RustboroCity_House1/scripts.pory"

# 54 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_DeclineTrade::
# 55 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 56 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 57 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 58 "data/maps/RustboroCity_House1/scripts.pory"

# 59 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_NotRequestedMon::
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 61 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 63 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 64 "data/maps/RustboroCity_House1/scripts.pory"

# 65 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_TradeCompleted::
# 66 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 67 "data/maps/RustboroCity_House1/scripts.pory"
	release
# 68 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 69 "data/maps/RustboroCity_House1/scripts.pory"

# 70 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_EventScript_Hiker::
# 71 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
# 72 "data/maps/RustboroCity_House1/scripts.pory"
	end
# 73 "data/maps/RustboroCity_House1/scripts.pory"

# 74 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_IllTradeIfYouWant:
# 75 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
# 76 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Sure, I knew that.\p"
# 77 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But if you really want, I'm willing\n"
# 78 "data/maps/RustboroCity_House1/scripts.pory"
	.string "to trade it to you.\p"
# 79 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I'll trade you my {STR_VAR_2} for\n"
# 80 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} if you want.$"
# 81 "data/maps/RustboroCity_House1/scripts.pory"

# 82 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_PleaseBeGoodToMyPokemon:
# 83 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
# 84 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Please be good to my POKéMON.$"
# 85 "data/maps/RustboroCity_House1/scripts.pory"

# 86 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_DoesntLookLikeMonToMe:
# 87 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
# 88 "data/maps/RustboroCity_House1/scripts.pory"
	.string "a {STR_VAR_1} to me.$"
# 89 "data/maps/RustboroCity_House1/scripts.pory"

# 90 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_YouDontWantToThatsOkay:
# 91 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
# 92 "data/maps/RustboroCity_House1/scripts.pory"
	.string "But my POKéMON is cute, you know…$"
# 93 "data/maps/RustboroCity_House1/scripts.pory"

# 94 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AnyPokemonCanBeCute:
# 95 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
# 96 "data/maps/RustboroCity_House1/scripts.pory"
	.string "it with care and kindness.$"
# 97 "data/maps/RustboroCity_House1/scripts.pory"

# 98 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_Text_AllSortsOfPlaces:
# 99 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
# 100 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of POKéMON and people.\p"
# 101 "data/maps/RustboroCity_House1/scripts.pory"
	.string "I find that fascinating, so I go to all\n"
# 102 "data/maps/RustboroCity_House1/scripts.pory"
	.string "sorts of places.$"
