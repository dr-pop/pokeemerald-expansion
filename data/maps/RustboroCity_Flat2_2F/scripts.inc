# 1 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_MapScripts::
# 3 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.byte 0
# 4 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 5 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
@ new:
# 6 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_OldMan::
# 8 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MayorFounder, MSGBOX_NPC
# 9 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 10 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 11 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_Grandchild:: @ 8215FE1
# 12 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_Grandchild, MSGBOX_NPC
# 13 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 14 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 15 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MayorFounder: @ 821601A
# 16 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "The Mayor of Willystad descends from\n"
# 17 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "the founder of the city.\p"
# 18 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Do you think that's a coincidence?$"
# 19 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 20 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_Grandchild: @ 821605A
# 21 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Grandpa is amazing!\p"
# 22 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "He knows so much history!$"
# 23 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 24 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
@ old:
# 25 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 26 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_NinjaBoy::
# 27 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	lock
# 28 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	faceplayer
# 29 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_PREMIER_BALL_RUSTBORO, RustboroCity_Flat2_2F_EventScript_GavePremierBall
# 30 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt, MSGBOX_DEFAULT
# 31 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	giveitem ITEM_PREMIER_BALL
# 32 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 33 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	setflag FLAG_RECEIVED_PREMIER_BALL_RUSTBORO
# 34 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 35 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 37 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_EventScript_GavePremierBall::
# 38 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	msgbox RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	release
# 40 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	end
# 41 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 42 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays:
# 43 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "Way back in the old days, DEVON was just\n"
# 44 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "a teeny, tiny company.$"
# 45 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 46 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt:
# 47 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
# 48 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy made this!\n"
# 49 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "But I can't use it, so you can have it.$"
# 50 "data/maps/RustboroCity_Flat2_2F/scripts.pory"

# 51 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo:
# 52 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "My daddy's working at the CORPORATION.\p"
# 53 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "When I grow up, I'm going to work for\n"
# 54 "data/maps/RustboroCity_Flat2_2F/scripts.pory"
	.string "DEVON, too.$"
