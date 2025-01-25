# 1 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
@ new:
# 6 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_OldWoman::
# 8 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_RichCity, MSGBOX_NPC
# 9 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 11 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_EventScript_Skitty::
# 12 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	lock
# 13 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	faceplayer
# 14 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitse
# 15 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
# 16 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	msgbox RustboroCity_Flat2_1F_Text_Skitty, MSGBOX_DEFAULT
# 17 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	waitmoncry
# 18 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	release
# 19 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 21 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_RichCity: @ 8215F93
# 22 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "Our city has become rich through trade,\n"
# 23 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "but we don't produce anything.\p"
# 24 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "Without the other towns on the Island,\n"
# 25 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "we would be nothing.$"
# 26 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 27 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
RustboroCity_Flat2_1F_Text_Skitty:
# 28 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
	.string "SKITTY: Gyaaaah!$"
# 29 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 30 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
@ old:
# 31 "data/maps/RustboroCity_Flat2_1F/scripts.pory"

# 32 "data/maps/RustboroCity_Flat2_1F/scripts.pory"
// none
