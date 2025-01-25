# 1 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
@ new:
# 6 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_Azumarill:: @ 8216117
# 8 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	lock
# 9 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	faceplayer
# 10 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	waitse
# 11 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	playmoncry SPECIES_AZUMARILL, 0
# 12 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_Azumarill, MSGBOX_NPC
# 13 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	waitmoncry
# 14 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	release
# 15 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 16 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 17 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_Woman:: @ 8216120
# 18 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_Nostalgic, MSGBOX_NPC
# 19 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 21 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_Azumarill: @ 8216129
# 22 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "Azumarill: Paarriii!$"
# 23 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 24 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_Nostalgic: @ 8216159
# 25 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "I love visiting my parents. But my\n"
# 26 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "childhood room makes me nostalgic.$"
# 27 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 28 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
@ old:
# 29 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_EventScript_DevonEmployee::
# 31 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	msgbox RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones, MSGBOX_NPC
# 32 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	end
# 33 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 34 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
//RustboroCity_Flat2_3F_EventScript_Woman::
# 35 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	//msgbox RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones, MSGBOX_NPC
# 36 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	//end
# 37 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 38 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones:
# 39 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "DEVON's PRESIDENT likes to collect\n"
# 40 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "rare stones.$"
# 41 "data/maps/RustboroCity_Flat2_3F/scripts.pory"

# 42 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones:
# 43 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "I think the PRESIDENT's son also\n"
# 44 "data/maps/RustboroCity_Flat2_3F/scripts.pory"
	.string "collects rare stones.$"
