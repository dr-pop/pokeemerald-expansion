# 1 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 2 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
.set LOCALID_OWNER, 1
# 3 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 4 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_MapScripts::
# 5 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.byte 0
# 6 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 7 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_HotelOwner:: @ 8218189
# 8 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 9 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	faceplayer
# 10 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_TroubleUpstairs, MSGBOX_DEFAULT
# 11 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 12 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 13 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitse
# 14 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playmoncry SPECIES_SPINARAK, 0
# 15 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmoncry
# 16 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 17 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0	
# 18 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_ComeBackLater, MSGBOX_DEFAULT
# 19 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 20 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 21 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 23 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 24 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 25 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_TroubleUpstairs: @ 8218264
# 26 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, I'm sorry. The Willystad Hotel is\n"
# 27 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "temporarily closed.\p"
# 28 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We're, uh…$"
# 29 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	
# 30 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_ComeBackLater: @ 8218264
# 31 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We're having some trouble upstairs…\p"
# 32 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Please come back later!$"
# 33 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 34 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
@ old:
# 35 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 36 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_MotelOwner::
# 37 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 38 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear
# 39 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted
# 40 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot, MSGBOX_DEFAULT
# 41 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 42 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua, MSGBOX_DEFAULT
# 44 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 45 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 46 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 48 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 49 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 50 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_AquaHideoutBusted::
# 51 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem, MSGBOX_DEFAULT
# 52 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 53 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 54 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted, MSGBOX_DEFAULT
# 55 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 56 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 57 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 59 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 60 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 61 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_GameClear::
# 62 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar, MSGBOX_DEFAULT
# 63 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FacePlayer
# 64 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 67 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_FaceOriginalDirection
# 68 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 69 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	releaseall
# 70 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 71 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 72 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_EventScript_BlockingTV::
# 73 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lockall
# 74 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	playse SE_PIN
# 75 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_ExclamationMark
# 76 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 77 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, Common_Movement_Delay48
# 78 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 79 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 80 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	msgbox LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV, MSGBOX_DEFAULT
# 82 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	closemessage
# 83 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV
# 84 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer
# 85 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	applymovement LOCALID_OWNER, LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn
# 87 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	waitmovement 0
# 88 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	release
# 89 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	end
# 90 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 91 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_PlayerPushFromTV:
# 92 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_right
# 93 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	lock_facing_direction
# 94 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_left
# 95 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	unlock_facing_direction
# 96 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 97 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 98 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerPushPlayer:
# 99 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_up
# 100 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 101 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 102 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Movement_OwnerReturn:
# 103 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_down
# 104 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	walk_down
# 105 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	face_up
# 106 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	step_end
# 107 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 108 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot:
# 109 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, so they doubled the guests by\n"
# 110 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "using POKéMON as attractions?\p"
# 111 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hm, well, maybe I should make a cute\n"
# 112 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON our inn's mascot.\p"
# 113 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I wonder if that will attract more\n"
# 114 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests to stay with us?$"
# 115 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 116 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua:
# 117 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 118 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 119 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Since that TEAM AQUA came to town,\n"
# 120 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the tourists have been staying away.$"
# 121 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 122 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV:
# 123 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Hey, down in front!\n"
# 124 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I can't see the TV!$"
# 125 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 126 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem:
# 127 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! You're telling me a POKéMON\n"
# 128 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "found someone's lost item?\p"
# 129 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had some smart\n"
# 130 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON like that…\p"
# 131 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We could recover anything that our\n"
# 132 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "guests mislaid…$"
# 133 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 134 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted:
# 135 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 136 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV!\p"
# 137 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I heard that someone busted\n"
# 138 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "the TEAM AQUA HIDEOUT.\p"
# 139 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Thanks to that, we just booked\n"
# 140 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a reservation from a big group.\p"
# 141 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "It was a company called… Uh…\n"
# 142 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "GAME something…$"
# 143 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 144 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar:
# 145 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Amazing! A house-sitting POKéMON\n"
# 146 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "caught a burglar?\p"
# 147 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "That's something. If we had a tough\n"
# 148 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "POKéMON as a security guard…\p"
# 149 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "We would be able to provide our guests\n"
# 150 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "with greater safety.$"
# 151 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"

# 152 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner:
# 153 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, sorry, sorry!\n"
# 154 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "I was too involved in watching TV.\p"
# 155 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Oh, yes. A big group of guests arrived\n"
# 156 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "a little while ago.\p"
# 157 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "They booked in as GAME FREAK,\n"
# 158 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "so I guess they must make games.\p"
# 159 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "Uh-oh, I'd better get working on\n"
# 160 "data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.pory"
	.string "their dinner!$"
