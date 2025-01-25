# 1 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
.set LOCALID_STAIR_GUARD, 2
# 3 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_MapScripts:: @ 8211245
# 5 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_1F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_1F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_1F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnTransition: @ 821124B
# 11 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 0
# 12 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_1F_ShowFossil
# 13 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 1
# 14 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//goto_if_ge RustboroCity_DevonCorp_1F_HideFossil
# 15 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 2
# 16 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//goto_if_ge RustboroCity_DevonCorp_1F_HideFossil
# 17 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 3
# 18 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_eq RustboroCity_DevonCorp_1F_ShowFossil
# 19 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 4
# 20 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//goto_if_ge RustboroCity_DevonCorp_1F_HideFossil
# 21 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 6
# 22 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_ge RustboroCity_DevonCorp_1F_LockOffice
# 23 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_BlockStairs
# 24 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//call_if_unset FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_PrepareCutscene2
# 25 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_ShowFossil::
# 28 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	return
# 30 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 31 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_LockOffice::
# 32 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setflag FLAG_MAYOR_OFFICE_LOCKED
# 33 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 34 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 35 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
//RustboroCity_DevonCorp_1F_EventScript_BlockStairs:: @ 8211255
# 36 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//setobjectxyperm 2, 14, 2
# 37 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//return
# 39 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 40 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnWarp:
# 41 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script_2 VAR_WILLYSTAD_CITY_STATE, 3, RustboroCity_DevonCorp_1F_EventScript_PrepareCutscene2
# 42 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte 0
# 43 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 44 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_PrepareCutscene2:: @ 8211255
# 45 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//removeobject 3
# 46 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//addobject 3
# 47 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//clearflag FLAG_DELIVERED_DEVON_GOODS
# 48 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	addobject 5 // add fossil
# 49 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	addobject 10 // add rival
# 50 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	turnobject 10, DIR_NORTH // position rival
# 51 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH // position player
# 52 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 53 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 54 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_OnFrame:
# 55 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	map_script_2 VAR_WILLYSTAD_CITY_STATE, 3, RustboroCity_DevonCorp_1F_EventScript_Cutscene2
# 56 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.2byte 0
# 57 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 58 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// ============================================================
# 59 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// NPC INTERACTIONS. CROWD AT FOSSIL REVEAL EVENT IN CITY HALL.
# 60 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// ============================================================
# 61 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 62 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_SignWestWing:: @ 8211309
# 63 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SignWestWing, MSGBOX_SIGN
# 64 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 66 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SignWestWing:
# 67 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "City Hall West Wing:\n"
# 68 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "{LEFT_ARROW} Island Library$"
# 69 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 70 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_SignEastWing:: @ 8211312
# 71 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SignEastWing, MSGBOX_SIGN
# 72 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 73 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 74 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SignEastWing:
# 75 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "City Hall East Wing:\n"
# 76 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor's Office {RIGHT_ARROW}$"
# 77 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdBurglar:: @ 821127F
# 79 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 80 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 81 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdBurglar, MSGBOX_DEFAULT
# 82 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 83 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 84 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 86 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 87 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 88 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdGirl:: @ 821127F
# 89 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 90 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 91 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdGirl, MSGBOX_DEFAULT
# 92 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 93 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 94 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 95 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 96 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 97 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdKarateGirl:: @ 821127F
# 99 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 100 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 101 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdKarateGirl, MSGBOX_DEFAULT
# 102 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 103 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 104 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 106 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 107 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 108 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdExpertF:: @ 821127F
# 109 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 110 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 111 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdExpertF, MSGBOX_DEFAULT
# 112 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 113 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 114 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 115 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 116 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 117 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 118 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdMan:: @ 821127F
# 119 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 120 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 121 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdMan, MSGBOX_DEFAULT
# 122 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 123 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 124 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 125 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 126 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 127 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 128 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdPicknicker:: @ 821127F
# 129 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 130 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 131 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdPicknicker, MSGBOX_DEFAULT
# 132 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 133 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 134 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 135 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 136 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 137 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 138 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdOldMan:: @ 821127F
# 139 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 140 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 141 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdOldMan, MSGBOX_DEFAULT
# 142 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 143 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 144 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 145 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 146 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 147 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 148 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdRangerM:: @ 821127F
# 149 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 150 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 151 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdRangerM, MSGBOX_DEFAULT
# 152 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 153 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 154 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 155 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 156 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 157 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 158 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_CrowdHiker:: @ 821127F
# 159 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 160 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 161 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_CrowdHiker, MSGBOX_DEFAULT
# 162 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 163 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 164 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 165 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 166 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 167 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 168 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdHiker:
# 169 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I hiked all the way from Mt. Snow to\n"
# 170 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "see this reveal.$"
# 171 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 172 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdRangerM:
# 173 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm curious to know what Prof. Buxus\n"
# 174 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "found this time around!$"
# 175 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 176 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdKarateGirl:
# 177 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "What a crowd!\p"
# 178 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I can hardly see anything from here.$"
# 179 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 180 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdMan:
# 181 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "The Mayor is about to make an\n"
# 182 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "announcement. Find a spot!$"
# 183 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 184 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdGirl:
# 185 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus often goes on expedition.\n"
# 186 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "He doesn't like sitting in his lab.$"
# 187 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 188 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdExpertF:
# 189 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Science uncovers the secrets of\n"
# 190 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "nature, one discovery at a time.$"
# 191 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 192 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdPicknicker:
# 193 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Is that a fossil?\p"
# 194 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Oh no, it's the Mayor!$"
# 195 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 196 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdOldMan:
# 197 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That Buxus fellow is an adventurous\n"
# 198 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "type.\p"
# 199 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I used to be like him, back in the days.$"
# 200 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 201 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_CrowdBurglar:
# 202 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "What do you want, kid?\n"
# 203 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm not doing anything illegal!$"
# 204 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 205 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// ========================================================================
# 206 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// CUTSCENE 1: FOSSIL REVEAL AND THEFT. ENDS WITH CROWD AND FOSSIL REMOVED.
# 207 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// ========================================================================
# 208 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 209 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Cutscene1:: @ 8211289
# 210 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 211 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 212 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//work in progress
# 213 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 214 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 215 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor1, MSGBOX_DEFAULT
# 216 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 217 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 218 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 219 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 220 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 221 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 222 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 223 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 224 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 225 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 226 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 227 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 228 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 229 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 230 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 231 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 232 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof1, MSGBOX_DEFAULT
# 233 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 234 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 235 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 236 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 237 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof2, MSGBOX_DEFAULT
# 238 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 239 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 240 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 241 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 242 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof3, MSGBOX_DEFAULT
# 243 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 244 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 245 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, 0
# 246 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 247 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 14, RustboroCity_DevonCorp_1F_Movement_Burglar1
# 248 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 249 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playse SE_PIN
# 250 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 6
# 251 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playse SE_PIN
# 252 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 253 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_ExclamationMark
# 254 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 255 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 256 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Burglar1, MSGBOX_DEFAULT
# 257 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 258 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//removeobject 5
# 259 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceUp	
# 260 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 261 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 262 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 14, Common_Movement_FaceDown
# 263 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 264 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 265 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Burglar2, MSGBOX_DEFAULT
# 266 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 267 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 14, RustboroCity_DevonCorp_1F_Movement_Burglar2
# 268 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 269 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 14
# 270 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 271 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 272 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceLeft
# 273 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, Common_Movement_FaceLeft
# 274 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 275 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 276 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 277 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 278 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 279 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, Common_Movement_FaceLeft
# 280 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 281 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 282 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 283 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 284 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft	
# 285 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 11, Common_Movement_FaceLeft
# 286 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 287 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 288 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 289 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 290 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, Common_Movement_FaceRight	
# 291 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 292 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 12, Common_Movement_FaceLeft
# 293 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 294 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 295 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 296 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 297 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 298 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 299 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 300 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 7, Common_Movement_FaceUp
# 301 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 302 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, Common_Movement_FaceUp
# 303 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 304 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 306 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 307 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 308 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 309 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 310 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 311 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 312 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, RustboroCity_DevonCorp_1F_Movement_Mayor1
# 313 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor2, MSGBOX_DEFAULT	
# 314 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 315 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 316 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 317 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 318 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 319 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 320 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd1, MSGBOX_DEFAULT	
# 321 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 322 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 323 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 8, RustboroCity_DevonCorp_1F_Movement_Crowd1
# 324 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 325 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 8
# 326 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 12, RustboroCity_DevonCorp_1F_Movement_Crowd3
# 327 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 11, RustboroCity_DevonCorp_1F_Movement_Crowd4
# 328 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 7, RustboroCity_DevonCorp_1F_Movement_Crowd2
# 329 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 330 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 7
# 331 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 12
# 332 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 11
# 333 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 334 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 335 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 336 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd3, MSGBOX_DEFAULT
# 337 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 338 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 339 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 6, RustboroCity_DevonCorp_1F_Movement_Crowd5
# 340 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 341 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 342 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 343 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd4, MSGBOX_DEFAULT
# 344 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 345 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 346 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 13, RustboroCity_DevonCorp_1F_Movement_Crowd6
# 347 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 348 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 6
# 349 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 13
# 350 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 351 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 352 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 353 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 354 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd2, MSGBOX_DEFAULT
# 355 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmessage
# 356 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 357 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 9, RustboroCity_DevonCorp_1F_Movement_Crowd7
# 358 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 359 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 9
# 360 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 361 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 362 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 363 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playse SE_PIN
# 364 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 6
# 365 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playse SE_PIN
# 366 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_QuestionMark
# 367 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_QuestionMark
# 368 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 370 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 371 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 372 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 373 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 374 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 375 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor3, MSGBOX_DEFAULT
# 376 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 377 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_Prof1
# 378 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 379 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 380 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof4, MSGBOX_DEFAULT
# 381 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 382 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 383 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 384 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 385 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	special ChooseStarter
# 386 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitstate
# 387 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//delay 8
# 388 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//playfanfare MUS_FANFA5
# 389 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare1, MSGBOX_DEFAULT
# 390 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//waitfanfare
# 391 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//closemessage
# 392 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof6, MSGBOX_DEFAULT
# 393 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 394 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 395 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 396 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 397 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 398 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 399 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 400 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 401 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Rival1, MSGBOX_DEFAULT
# 402 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 403 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 404 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//playfanfare MUS_FANFA4
# 405 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare2, MSGBOX_DEFAULT
# 406 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//waitfanfare
# 407 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//closemessage
# 408 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//delay 30
# 409 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 410 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 411 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Rival2, MSGBOX_DEFAULT
# 412 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 413 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_1F_Movement_Player1
# 414 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, RustboroCity_DevonCorp_1F_Movement_Rival1
# 415 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 416 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 10
# 417 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 418 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 419 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 420 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 421 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 422 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof5, MSGBOX_DEFAULT
# 423 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 424 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_Prof2
# 425 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 426 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	fadedefaultbgm
# 427 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 428 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 429 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//setflag FLAG_DELIVERED_DEVON_GOODS
# 430 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 1
# 431 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 432 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 433 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	releaseall
# 434 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 435 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 436 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Prof1::
# 437 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof5, MSGBOX_DEFAULT
# 438 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 439 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 440 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 441 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Mayor1::
# 442 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor4, MSGBOX_NPC
# 443 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 444 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 445 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
/*
# 446 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ChooseStarterDebug::
# 447 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 448 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 449 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Prof4, MSGBOX_DEFAULT
# 450 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 451 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 452 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	special ChooseStarter
# 453 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitstate
# 454 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lockall
# 455 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 456 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Rival1, MSGBOX_DEFAULT
# 457 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 458 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 459 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare1, MSGBOX_DEFAULT
# 460 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitfanfare
# 461 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 462 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	releaseall
# 463 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 464 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
*/
# 465 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 466 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Burglar1:: @ 821127F
# 467 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_up
# 468 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_up
# 469 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_up
# 470 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_right
# 471 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_right
# 472 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_right
# 473 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_up
# 474 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 475 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 476 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Burglar2:: @ 821127F
# 477 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 478 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 479 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 480 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 481 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 482 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 483 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 484 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 485 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 486 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 487 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 488 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 489 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 490 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 491 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_WalkInPlace:: @ 821127F
# 492 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_down
# 493 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_down
# 494 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 495 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 496 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Mayor1:: @ 821127F
# 497 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 498 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 499 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 500 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 501 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 502 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_in_place_fast_down
# 503 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 504 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 505 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd1:: @ 821127F
# 506 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 507 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 508 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 509 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 510 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 511 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 512 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 513 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd2:: @ 821127F
# 514 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_down
# 515 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_down
# 516 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 517 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 518 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 519 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 520 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 521 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 522 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 523 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 524 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd3:: @ 821127F
# 525 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_right
# 526 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 527 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 528 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 529 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 530 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 531 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 532 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 533 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 534 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd4:: @ 821127F
# 535 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_left
# 536 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 537 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 538 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 539 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 540 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 541 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 542 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 543 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 544 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd5:: @ 821127F
# 545 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_up
# 546 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 547 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_right
# 548 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 549 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 550 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 551 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 552 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 553 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 554 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 555 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd6:: @ 821127F
# 556 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 557 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 558 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 559 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 560 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_fast_down
# 561 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 562 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 563 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Crowd7:: @ 821127F
# 564 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 565 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 566 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 567 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 568 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 569 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 570 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 571 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 572 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Prof1:: @ 821127F
# 573 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 574 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 575 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_down
# 576 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 577 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 578 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Rival1:: @ 821127F
# 579 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 580 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 581 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 582 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 583 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 584 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 585 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 586 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 587 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 588 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Player1:: @ 821127F
# 589 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay_16
# 590 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_down
# 591 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 592 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 593 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_Prof2:: @ 821127F
# 594 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_right
# 595 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_up
# 596 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_down
# 597 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 598 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 599 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor1:
# 600 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor: Welcome, dear Islanders and\n"
# 601 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "strangers from afar.\p"
# 602 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "My name is Bertha,\n"
# 603 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor of Willystad City.\p"
# 604 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "When Willy the Great, founder of this\n"
# 605 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "city, first set foot on this Island,\p"
# 606 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "he immediately recognized the beauty\n"
# 607 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "and power its nature had to offer.\p" 
# 608 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "To this day, we continue to learn more\n"
# 609 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "about the secrets of this Island.\p"
# 610 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Because the scientists of today are\n"
# 611 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "like the explorers of yesteryear!\p"
# 612 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "And so, I am happy to announce a new\n"
# 613 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "discovery, which will bring pride and\l"
# 614 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "power to our glorious city!\p"
# 615 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It is my pleasure to give the word\n"
# 616 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "to the renowned Prof. Buxus.$"
# 617 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 618 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof1:
# 619 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: Huh, oh, yes. Alright.\p"
# 620 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, my name is Buxus. I study the\n"
# 621 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "science of flora and Pokémon.\p"
# 622 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Flora, that is flowers and plants.\p"
# 623 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "And Pokémon, well, you know what\n"
# 624 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "that is.$"
# 625 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 626 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof2:
# 627 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In a recent expedition, our team\n"
# 628 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "found this artefact.\p"
# 629 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It is a fossil of a flower. One that\n"
# 630 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I have never seen before.$"
# 631 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 632 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof3:
# 633 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We know that some plants can give\n"
# 634 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "humans and Pokémon strength.\p"
# 635 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Other plants have healing properties.\p"
# 636 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "But this fossil… It shows traces\n"
# 637 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of an unknown kind of energy.\p"
# 638 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We need to study it further. But it\n"
# 639 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "truly is one of its kind.\p"
# 640 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That also makes it one of the rarest\n"
# 641 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "and most valuable fossils in the world!$"
# 642 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "We need to study it further. But it seems this\n"
# 643 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "is the rarest and most valuable fossil on this Island.\p"
# 644 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "We need to study it further. But either\n"
# 645 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "way, this is a thrilling time for science!\p"
# 646 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "When we're done, the fossil will be donated to \n"
# 647 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "new species of plants.\p"
# 648 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "It is my honour to give the word to the\n"
# 649 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//.string "renowned Prof. Buxus.$"
# 650 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 651 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Burglar1:
# 652 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Thief: Well, doc. Sounds like this will\n"
# 653 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "sell for a good buck!\p"
# 654 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'll take it from here, then.$"
# 655 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 656 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Burglar2:
# 657 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Thief: This city got rich by trading goods\n"
# 658 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "that were stolen from others!\l"
# 659 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "And now I will do the same!\p"
# 660 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "So long, Slowpokes!$"
# 661 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 662 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor2:
# 663 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor: We cannot let this happen!\p"
# 664 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I need a brave trainer to pursue\n"
# 665 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "this heinous thief!$"
# 666 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 667 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd1:
# 668 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Old Lady: Oh my! Look at the time!$"
# 669 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 670 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd2:
# 671 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Old Man: Good luck, kiddos.\n"
# 672 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You've got this!$"
# 673 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 674 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd3:
# 675 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Young Man: Shoot! I forgot to\n"
# 676 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "water my Berries.$"
# 677 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 678 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Crowd4:
# 679 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Young Woman: Uhh… Me too!$"
# 680 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 681 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor3:
# 682 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor: Very well. It seems we've\n"
# 683 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got ourselves two volunteers.$"
# 684 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 685 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof4:
# 686 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: {PLAYER}, this is\n"
# 687 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "very noble of you.\p"
# 688 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Here, please take one of these\n"
# 689 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Pokémon to keep you safe.$"
# 690 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 691 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Rival1:
# 692 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "???: Alright, then. I will take the\n"
# 693 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "other one, Mudkip.$"
# 694 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 695 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare1:
# 696 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "{PLAYER} obtained the Pokémon.$"
# 697 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 698 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare2:
# 699 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "??? obtained the Pokémon.$"
# 700 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 701 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof6:
# 702 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: So you choose Torchic.\n"
# 703 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Very well.$"
# 704 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 705 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Rival2:
# 706 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "???: Don't worry, Mayor. We will\n"
# 707 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "catch this bandit right away!$"
# 708 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 709 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Prof5:
# 710 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: Good luck, {PLAYER}!\p"
# 711 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We'll be waiting.$"
# 712 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 713 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene1Mayor4:
# 714 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor: Godspeed, young trainer.\p"
# 715 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Please catch that thief.$"
# 716 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 717 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// =============================================================
# 718 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// CUTSCENE 2: AFTER RETURNING THE FOSSIL. AUTO-PLAY AFTER WARP.
# 719 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// =============================================================
# 720 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 721 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Cutscene2::
# 722 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 723 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 724 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//removeitem ITEM_PLUME_FOSSIL
# 725 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 726 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 727 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene2Prof1, MSGBOX_DEFAULT
# 728 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 729 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 730 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//player and rival receive Pokémon
# 731 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	playfanfare MUS_EVOLVED
# 732 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene1Fanfare1, MSGBOX_DEFAULT
# 733 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitfanfare
# 734 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 735 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 736 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 737 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 738 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene2Mayor1, MSGBOX_DEFAULT
# 739 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 740 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 741 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 2, RustboroCity_DevonCorp_1F_Movement_MayorExit
# 742 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 743 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 2
# 744 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_WalkInPlace
# 745 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 746 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene2Prof2, MSGBOX_DEFAULT
# 747 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 748 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 749 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 750 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 751 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 752 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//removeobject 5
# 753 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 3, Common_Movement_FaceUp
# 754 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 755 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 3
# 756 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 757 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_ProfExit1
# 758 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 759 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 30
# 760 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene2Prof3, MSGBOX_DEFAULT
# 761 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 762 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 4, RustboroCity_DevonCorp_1F_Movement_ProfExit2
# 763 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 764 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 4
# 765 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 766 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 767 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 768 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	delay 16
# 769 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_Cutscene2Rival, MSGBOX_DEFAULT
# 770 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	closemessage
# 771 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement 10, RustboroCity_DevonCorp_1F_Movement_RivalExit2
# 772 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 773 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	removeobject 10
# 774 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 775 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	waitmovement 0
# 776 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 777 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 778 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	//setflag FLAG_DELIVERED_DEVON_GOODS
# 779 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 4
# 780 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 781 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 782 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 783 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene2Prof1:
# 784 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: {PLAYER}, {RIVAL}.\p"
# 785 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Thank you for retrieving the\n"
# 786 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "stolen artefact.\p"
# 787 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I can now continue my research\n"
# 788 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on its mysterious energy.\p"
# 789 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "As a token of my gratitude, please\n"
# 790 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "keep the Pokémon that helped you.\p"
# 791 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You and your Pokémon seem to\n"
# 792 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "get along well.$"
# 793 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	
# 794 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene2Mayor1:
# 795 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Mayor: The Professor is right.\p"
# 796 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You have shown much courage,\n"
# 797 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "young trainers.\p"
# 798 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "The Island could use more honest\n"
# 799 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "people like the two of you.\p"
# 800 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In fact, I need to ask you to\n"
# 801 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "help me once more.\p"
# 802 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Please visit me in my office\n"
# 803 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "whenever you are ready.$"
# 804 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 805 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene2Prof2:
# 806 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
//	.string "Prof. Buxus: An assignment from\n"
# 807 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
//	.string "the Mayor, no less!\p"
# 808 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
//	.string "It seems you have made a name\n"
# 809 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
//	.string "for yourselves.\p"
# 810 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: My duty is done,\n"
# 811 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "as well.\l"
# 812 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Time to pack up.$"
# 813 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 814 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene2Prof3:
# 815 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prof. Buxus: Come and visit my\n"
# 816 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Laboratory, later.\p"
# 817 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I have something to show you.$"
# 818 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 819 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_Cutscene2Rival:
# 820 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "{RIVAL}: An assignment from\n"
# 821 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the Mayor, no less.\l"
# 822 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "And an invitation from the Professor.\l"
# 823 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "What an honour, {PLAYER}!\p"
# 824 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "But first, I will take my Mudkip\n"
# 825 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "to the Pokémon Center.\p"
# 826 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Taking care of your Pokémon\n"
# 827 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "always comes first.\p"
# 828 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "See you around, {PLAYER}!$"
# 829 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 830 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_MayorExit:
# 831 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_up
# 832 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_up
# 833 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_up
# 834 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_up
# 835 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_slow_up
# 836 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 837 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 838 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_ProfExit1:
# 839 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 840 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_left
# 841 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	face_down
# 842 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 843 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 844 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_ProfExit2:
# 845 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 846 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 847 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 848 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 849 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 850 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 851 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 852 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 853 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 854 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Movement_RivalExit2:
# 855 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 856 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 857 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 858 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 859 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 860 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 861 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 862 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 863 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	walk_down
# 864 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	step_end
# 865 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 866 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// =============================================
# 867 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// REMAINING SCRIPTS FROM ORIGINAL GAME, UNUSED:
# 868 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
// =============================================
# 869 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 870 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Employee:: @ 8211261
# 871 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 872 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 873 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered
# 874 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright
# 875 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct, MSGBOX_DEFAULT
# 876 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 877 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 878 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 879 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RobberWasntBright:: @ 821127F
# 880 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright, MSGBOX_DEFAULT
# 881 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 882 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 883 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 884 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GoodsRecovered:: @ 8211289
# 885 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered, MSGBOX_DEFAULT
# 886 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 887 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 888 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 889 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StairGuard:: @ 8211293
# 890 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 891 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 892 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome
# 893 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 894 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_GotRobbed
# 895 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter, MSGBOX_DEFAULT
# 896 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 897 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 898 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 899 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_AlwaysWelcome:: @ 82112BA
# 900 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere, MSGBOX_DEFAULT
# 901 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 902 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 903 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 904 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_GotRobbed:: @ 82112C4
# 905 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed, MSGBOX_DEFAULT
# 906 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 907 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 908 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 909 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_Greeter:: @ 82112CE
# 910 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	lock
# 911 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	faceplayer
# 912 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RETURNED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp
# 913 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_DEVON_GOODS, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 914 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	goto_if_set FLAG_DEVON_GOODS_STOLEN, RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed
# 915 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 916 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 917 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 918 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 919 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_WelcomeToDevonCorp:: @ 82112F5
# 920 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp, MSGBOX_DEFAULT
# 921 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 922 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 923 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 924 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_StaffGotRobbed:: @ 82112FF
# 925 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_StaffGotRobbed, MSGBOX_DEFAULT
# 926 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	release
# 927 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 928 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 929 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_RocksMetalDisplay:: @ 8211309
# 930 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay, MSGBOX_SIGN
# 931 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 932 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 933 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_EventScript_ProductsDisplay:: @ 8211312
# 934 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	msgbox RustboroCity_DevonCorp_1F_Text_ProductDisplay, MSGBOX_SIGN
# 935 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	end
# 936 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 937 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_WelcomeToDevonCorp: @ 821131B
# 938 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hello and welcome to the DEVON\n"
# 939 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "CORPORATION.\p"
# 940 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "We're proud producers of items and\n"
# 941 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "medicine that enhance your life.$"
# 942 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 943 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_StaffGotRobbed: @ 821138B
# 944 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "One of our research staff stupidly\n"
# 945 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "got robbed of an important parcel.$"
# 946 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 947 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ThoseShoesAreOurProduct: @ 82113D1
# 948 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hey, those RUNNING SHOES!\n"
# 949 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "They're one of our products!\p"
# 950 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It makes me happy when I see someone\n"
# 951 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "using something we made.$"
# 952 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 953 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RobberWasntVeryBright: @ 8211446
# 954 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "That stolen parcel…\p"
# 955 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Well, sure it's important, but it's not\n"
# 956 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "anything that anyone can use.\p"
# 957 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "In my estimation, that robber must not\n"
# 958 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "have been very bright.$"
# 959 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 960 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_SoundsLikeStolenGoodsRecovered: @ 82114DE
# 961 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It sounds like they've recovered\n"
# 962 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the ripped-off DEVON GOODS.$"
# 963 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 964 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_OnlyAuthorizedPeopleEnter: @ 821151B
# 965 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "I'm sorry, only authorized people\n"
# 966 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "are allowed to enter here.$"
# 967 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 968 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_HowCouldWeGetRobbed: @ 8211558
# 969 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "It's beyond stupid.\n"
# 970 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "How could we get robbed?$"
# 971 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 972 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_YoureAlwaysWelcomeHere: @ 8211585
# 973 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Hi, there!\n"
# 974 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "You're always welcome here!$"
# 975 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 976 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_RocksMetalDisplay: @ 82115AC
# 977 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Samples of rocks and metal are\n"
# 978 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "displayed in the glass case.\p"
# 979 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with some writing\n"
# 980 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "on it…\p"
# 981 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON CORPORATION got its start as\n"
# 982 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "a producer of stones from quarries.\p"
# 983 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“The company also produced iron from\n"
# 984 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "filings in the sand.\p"
# 985 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“From that humble start as a producer\n"
# 986 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "of raw materials, DEVON developed.\p"
# 987 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“DEVON is now a manufacturer of a wide\n"
# 988 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "range of industrial products.”$"
# 989 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"

# 990 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
RustboroCity_DevonCorp_1F_Text_ProductDisplay: @ 8211722
# 991 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "Prototypes and test products fill\n"
# 992 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "the glass display case.\p"
# 993 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "There's a panel with a description…\p"
# 994 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“In addition to industrial products,\n"
# 995 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "DEVON now markets sundries and\l"
# 996 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "pharmaceuticals for better lifestyles.\p"
# 997 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "“Recently, DEVON has begun marketing\n"
# 998 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "tools for POKéMON TRAINERS, including\l"
# 999 "data/maps/RustboroCity_DevonCorp_1F/scripts.pory"
	.string "POKé BALLS and POKéNAV systems.”$"
