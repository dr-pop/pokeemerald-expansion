# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
@ new:
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
// ============================================================
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
// NPC INTERACTIONS. LIBRARY.
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
// ============================================================
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay:: @ 8212600
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay: @ 8212EE9
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of beautiful tools\n"
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a jewelery made from gold and silver.$"
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Sign:: @ 8212600
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_Sign, MSGBOX_SIGN
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_Sign: @ 8212EE9
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Island Library\n"
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Rules and Regulation:\l"
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please be quiet.\l"
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Return books on time.\l"
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "No Fire Pokémon allowed.$"
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls:: @ 82125F6
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_IndigenousItems, MSGBOX_NPC
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_IndigenousItems: @ 8212E88
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "These artefacts were used by the\n"
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Island's original inhabitants.\p"
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Many of their descendants now live\n"
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "in a place called Konuko Town.$"
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//.string "I wonder how life was, before the first\n"
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//.string "explorers arrived.$"
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Librarian::
# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_Librarian1, MSGBOX_NPC
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_Librarian1: @ 8212E88
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, hello there.\n"
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Welcome to the Island Library.\p"
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "My name is Mr. Booker.\n"
# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am the Island Librarian.\p"
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "The books here are free\n"
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for you to read.\p"
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Just remember to put them\n"
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "back where they belong.\p"
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "A number of books have gone missing\n"
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "over time by careless readers.\p"
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Gosh, I would give a lot to get\n"
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "those back…$"
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Woman::
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_Woman1, MSGBOX_NPC
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_Woman1: @ 8212E88
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I love to just spend hours browsing\n"
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "books in the Library.\p"
# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "There's so many stories left to read!$"
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
@ old:
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis, MSGBOX_DEFAULT
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	message RustboroCity_DevonCorp_3F_Text_ReceivedPokenav
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitfanfare
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare, MSGBOX_DEFAULT
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ExplainExpShare, MSGBOX_DEFAULT
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
//RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//release
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//end
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
//RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//end
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm MR. STONE, the PRESIDENT of\n"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to SLATEPORT's SHIPYARD.\p"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD TOWN?\p"
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "LETTER to STEVEN in DEWFORD.$"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Now, you should know that\n"
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great PRESIDENT.\p"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why I want you to have this!$"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a POKéNAV.$"
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: That device…\p"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a POKéMON NAVIGATOR, or POKéNAV\n"
# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for short.\p"
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's an indispensable tool for any\n"
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINER on an adventure.\p"
# 298 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It has a map of the HOENN region.\p"
# 299 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You can check the locations of\n"
# 300 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEWFORD and SLATEPORT easily!\p"
# 301 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that sinister\n"
# 302 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "criminals--MAGMA and AQUA, I believe--\l"
# 303 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "have been making trouble far and wide.\p"
# 304 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I think it would be best if you rested\n"
# 305 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "up before you go on your way.$"
# 306 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 307 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 308 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
# 309 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 310 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 311 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 312 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: I'm counting on you!$"
# 313 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 314 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 315 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 316 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 317 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 318 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a TRAINER.$"
# 319 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 320 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 321 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
# 322 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 323 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "EXP Points from battle.\p"
# 324 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 325 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 326 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 327 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak POKéMON.$"
# 328 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 329 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 330 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 331 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 332 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 333 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 334 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 335 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "TRAINERS in the POKéMON LEAGUE?$"
# 336 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 337 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 338 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 339 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 340 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 341 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 342 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 343 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 344 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 345 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 346 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 347 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 348 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 349 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 350 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 351 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 352 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 353 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 354 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 355 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 356 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 357 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 358 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 359 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 360 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 361 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 362 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 363 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 364 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 365 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 366 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 367 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 368 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 369 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 370 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among TRAINERS.$"
# 371 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 372 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
//RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 373 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//.string "It's a collection of rare rocks and\n"
# 374 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	//.string "stones assembled by the PRESIDENT.$"
