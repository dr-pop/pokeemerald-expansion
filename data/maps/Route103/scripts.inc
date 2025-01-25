# 1 "data/maps/Route103/scripts.pory"

# 2 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 3 "data/maps/Route103/scripts.pory"

# 4 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 5 "data/maps/Route103/scripts.pory"
	//map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 6 "data/maps/Route103/scripts.pory"
	//map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 7 "data/maps/Route103/scripts.pory"
	.byte 0
# 8 "data/maps/Route103/scripts.pory"

# 9 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 10 "data/maps/Route103/scripts.pory"
	//call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/Route103/scripts.pory"
	//call ProfBirch_EventScript_UpdateLocation
# 12 "data/maps/Route103/scripts.pory"
	end
# 13 "data/maps/Route103/scripts.pory"

# 14 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 15 "data/maps/Route103/scripts.pory"
	//call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 16 "data/maps/Route103/scripts.pory"
	end
# 17 "data/maps/Route103/scripts.pory"

# 18 "data/maps/Route103/scripts.pory"
@ new:
# 19 "data/maps/Route103/scripts.pory"

# 20 "data/maps/Route103/scripts.pory"
// ====
# 21 "data/maps/Route103/scripts.pory"
// CUTSCENE. THIEF.
# 22 "data/maps/Route103/scripts.pory"
// ====
# 23 "data/maps/Route103/scripts.pory"

# 24 "data/maps/Route103/scripts.pory"
Route103_EventScript_Thief::
# 25 "data/maps/Route103/scripts.pory"
	lock
# 26 "data/maps/Route103/scripts.pory"
	copyvar VAR_TEMP_1, VAR_FACING
# 27 "data/maps/Route103/scripts.pory"
	applymovement 17, Route103_Movement_RivalEnter2
# 28 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 29 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Thief3, MSGBOX_DEFAULT
# 30 "data/maps/Route103/scripts.pory"
	delay 16
# 31 "data/maps/Route103/scripts.pory"
	faceplayer
# 32 "data/maps/Route103/scripts.pory"
	delay 16
# 33 "data/maps/Route103/scripts.pory"
	playse SE_PIN
# 34 "data/maps/Route103/scripts.pory"
	applymovement 17, Common_Movement_ExclamationMark
# 35 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 36 "data/maps/Route103/scripts.pory"
	delay 16
# 37 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Thief4, MSGBOX_DEFAULT
# 38 "data/maps/Route103/scripts.pory"
	delay 16
# 39 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MARCOS, Route103_Text_MarcosDefeated
# 40 "data/maps/Route103/scripts.pory"
	//trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 41 "data/maps/Route103/scripts.pory"
	//trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 42 "data/maps/Route103/scripts.pory"
	//msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/Route103/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 44 "data/maps/Route103/scripts.pory"
	addobject 12
# 45 "data/maps/Route103/scripts.pory"
	applymovement 12, Route103_Movement_RivalEnter
# 46 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route103/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 48 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 49 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route103/scripts.pory"
	applymovement 12, Route103_Movement_RivalEnter2
# 51 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 52 "data/maps/Route103/scripts.pory"
	delay 16
# 53 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Rival1, MSGBOX_DEFAULT
# 54 "data/maps/Route103/scripts.pory"
	delay 16
# 55 "data/maps/Route103/scripts.pory"
	switch VAR_TEMP_1
# 56 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_PlayerLookSouth
# 57 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_PlayerLookNorth
# 58 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_PlayerLookWest
# 59 "data/maps/Route103/scripts.pory"
	release
# 60 "data/maps/Route103/scripts.pory"
	end
# 61 "data/maps/Route103/scripts.pory"

# 62 "data/maps/Route103/scripts.pory"
Route103_EventScript_PlayerLookSouth::
# 63 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 64 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefGivesItem
# 66 "data/maps/Route103/scripts.pory"
	end
# 67 "data/maps/Route103/scripts.pory"

# 68 "data/maps/Route103/scripts.pory"
Route103_EventScript_PlayerLookNorth::
# 69 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 70 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefGivesItem
# 72 "data/maps/Route103/scripts.pory"
	end
# 73 "data/maps/Route103/scripts.pory"

# 74 "data/maps/Route103/scripts.pory"
Route103_EventScript_PlayerLookWest::
# 75 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 76 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefGivesItem
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"
	
# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_ThiefGivesItem::
# 81 "data/maps/Route103/scripts.pory"
	delay 16
# 82 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Thief1, MSGBOX_DEFAULT
# 83 "data/maps/Route103/scripts.pory"
	closemessage
# 84 "data/maps/Route103/scripts.pory"
	faceplayer
# 85 "data/maps/Route103/scripts.pory"
	delay 16
# 86 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Thief3, MSGBOX_DEFAULT
# 87 "data/maps/Route103/scripts.pory"
	closemessage
# 88 "data/maps/Route103/scripts.pory"
	delay 16
# 89 "data/maps/Route103/scripts.pory"
	giveitem ITEM_PLUME_FOSSIL
# 90 "data/maps/Route103/scripts.pory"
	delay 16
# 91 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Thief2, MSGBOX_DEFAULT
# 92 "data/maps/Route103/scripts.pory"
	closemessage
# 93 "data/maps/Route103/scripts.pory"
	//delay 8
# 94 "data/maps/Route103/scripts.pory"
	switch VAR_TEMP_1
# 95 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_ThiefExitSouth
# 96 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_ThiefExitNorth
# 97 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_ThiefExitWest
# 98 "data/maps/Route103/scripts.pory"
	release
# 99 "data/maps/Route103/scripts.pory"
	end
# 100 "data/maps/Route103/scripts.pory"

# 101 "data/maps/Route103/scripts.pory"
Route103_EventScript_ThiefExitNorth::
# 102 "data/maps/Route103/scripts.pory"
	applymovement 17, Route103_Movement_ThiefExitNorth
# 103 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route103/scripts.pory"
	applymovement 12, Route103_Movement_RivalMoveNorth
# 105 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 106 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefExitEnd
# 107 "data/maps/Route103/scripts.pory"
	end
# 108 "data/maps/Route103/scripts.pory"

# 109 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalMoveNorth:
# 110 "data/maps/Route103/scripts.pory"
	walk_down
# 111 "data/maps/Route103/scripts.pory"
	walk_left
# 112 "data/maps/Route103/scripts.pory"
	step_end
# 113 "data/maps/Route103/scripts.pory"

# 114 "data/maps/Route103/scripts.pory"
Route103_EventScript_ThiefExitSouth::
# 115 "data/maps/Route103/scripts.pory"
	applymovement 17, Route103_Movement_ThiefExitSouthWest
# 116 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 117 "data/maps/Route103/scripts.pory"
	applymovement 12, Route103_Movement_RivalMoveSouth
# 118 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 119 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefExitEnd
# 120 "data/maps/Route103/scripts.pory"
	end
# 121 "data/maps/Route103/scripts.pory"

# 122 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalMoveSouth:
# 123 "data/maps/Route103/scripts.pory"
	walk_up
# 124 "data/maps/Route103/scripts.pory"
	walk_left
# 125 "data/maps/Route103/scripts.pory"
	step_end
# 126 "data/maps/Route103/scripts.pory"

# 127 "data/maps/Route103/scripts.pory"
Route103_EventScript_ThiefExitWest::
# 128 "data/maps/Route103/scripts.pory"
	applymovement 17, Route103_Movement_ThiefExitSouthWest
# 129 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 130 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_ThiefExitEnd
# 131 "data/maps/Route103/scripts.pory"
	end
# 132 "data/maps/Route103/scripts.pory"

# 133 "data/maps/Route103/scripts.pory"
Route103_EventScript_ThiefExitEnd::	
# 134 "data/maps/Route103/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 135 "data/maps/Route103/scripts.pory"
	removeobject 17
# 136 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 137 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route103/scripts.pory"
	delay 16
# 139 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Rival2, MSGBOX_DEFAULT
# 140 "data/maps/Route103/scripts.pory"
	delay 16
# 141 "data/maps/Route103/scripts.pory"
	//fadescreen FADE_TO_BLACK
# 142 "data/maps/Route103/scripts.pory"
	//clearflag DEVON_GOODS_STOLEN
# 143 "data/maps/Route103/scripts.pory"
	//clearflag FLAG_DELIVERED_DEVON_GOODS
# 144 "data/maps/Route103/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 3
# 145 "data/maps/Route103/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_1F, 255, 9, 13
# 146 "data/maps/Route103/scripts.pory"
	waitstate
# 147 "data/maps/Route103/scripts.pory"
	releaseall
# 148 "data/maps/Route103/scripts.pory"
	end
# 149 "data/maps/Route103/scripts.pory"

# 150 "data/maps/Route103/scripts.pory"
Route103_Text_Thief3:
# 151 "data/maps/Route103/scripts.pory"
	.string "Thief: …Curses!\p"
# 152 "data/maps/Route103/scripts.pory"
	.string "It's a dead end…$"
# 153 "data/maps/Route103/scripts.pory"

# 154 "data/maps/Route103/scripts.pory"
Route103_Text_Thief4:
# 155 "data/maps/Route103/scripts.pory"
	.string "What do you want, punk?\p"
# 156 "data/maps/Route103/scripts.pory"
	.string "Are you here to take the Fossil\n"
# 157 "data/maps/Route103/scripts.pory"
	.string "I rightfully stole?\p"
# 158 "data/maps/Route103/scripts.pory"
	.string "Well, guess what?\n"
# 159 "data/maps/Route103/scripts.pory"
	.string "You'll run into a dead end yourself.$"
# 160 "data/maps/Route103/scripts.pory"

# 161 "data/maps/Route103/scripts.pory"
Route103_Text_Thief1:
# 162 "data/maps/Route103/scripts.pory"
	.string "Thief: Oh, great.\n"
# 163 "data/maps/Route103/scripts.pory"
	.string "Another one.\p"
# 164 "data/maps/Route103/scripts.pory"
	.string "Here, take this stupid Fossil alright.$"
# 165 "data/maps/Route103/scripts.pory"
	
# 166 "data/maps/Route103/scripts.pory"
Route103_Text_Thief2:
# 167 "data/maps/Route103/scripts.pory"
	.string "Thief: Now leave me alone!$"
# 168 "data/maps/Route103/scripts.pory"

# 169 "data/maps/Route103/scripts.pory"
Route103_Text_Rival1:
# 170 "data/maps/Route103/scripts.pory"
	.string "{RIVAL}: {PLAYER}, you've caught\n"
# 171 "data/maps/Route103/scripts.pory"
	.string "the scoundrel!$"
# 172 "data/maps/Route103/scripts.pory"

# 173 "data/maps/Route103/scripts.pory"
Route103_Text_Rival2:
# 174 "data/maps/Route103/scripts.pory"
	.string "{RIVAL}: That good-for-nothing was\n"
# 175 "data/maps/Route103/scripts.pory"
	.string "lucky to get away!\p"
# 176 "data/maps/Route103/scripts.pory"
	.string "Come on, let's bring this fossil back\n"
# 177 "data/maps/Route103/scripts.pory"
	.string "to the Professor and the Mayor.$"
# 178 "data/maps/Route103/scripts.pory"

# 179 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalEnter:
# 180 "data/maps/Route103/scripts.pory"
	walk_left
# 181 "data/maps/Route103/scripts.pory"
	walk_left
# 182 "data/maps/Route103/scripts.pory"
	walk_left
# 183 "data/maps/Route103/scripts.pory"
	walk_left
# 184 "data/maps/Route103/scripts.pory"
	walk_left
# 185 "data/maps/Route103/scripts.pory"
	walk_left
# 186 "data/maps/Route103/scripts.pory"
	walk_left
# 187 "data/maps/Route103/scripts.pory"
	walk_left
# 188 "data/maps/Route103/scripts.pory"
	step_end
# 189 "data/maps/Route103/scripts.pory"

# 190 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalEnter2:
# 191 "data/maps/Route103/scripts.pory"
	walk_in_place_fast_left
# 192 "data/maps/Route103/scripts.pory"
	walk_in_place_fast_left
# 193 "data/maps/Route103/scripts.pory"
	step_end
# 194 "data/maps/Route103/scripts.pory"

# 195 "data/maps/Route103/scripts.pory"
Route103_Movement_ThiefExitNorth:
# 196 "data/maps/Route103/scripts.pory"
	walk_right
# 197 "data/maps/Route103/scripts.pory"
	walk_down
# 198 "data/maps/Route103/scripts.pory"
	walk_right
# 199 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 200 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 201 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 202 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 203 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 204 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 205 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 206 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 207 "data/maps/Route103/scripts.pory"
	step_end
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route103_Movement_ThiefExitSouthWest:
# 210 "data/maps/Route103/scripts.pory"
	walk_down
# 211 "data/maps/Route103/scripts.pory"
	walk_right
# 212 "data/maps/Route103/scripts.pory"
	walk_right
# 213 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 215 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 216 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 219 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 220 "data/maps/Route103/scripts.pory"
	walk_fast_right
# 221 "data/maps/Route103/scripts.pory"
	step_end
# 222 "data/maps/Route103/scripts.pory"

# 223 "data/maps/Route103/scripts.pory"
// ====
# 224 "data/maps/Route103/scripts.pory"
// NPC INTERACTIONS
# 225 "data/maps/Route103/scripts.pory"
// ====
# 226 "data/maps/Route103/scripts.pory"

# 227 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man:: @ 81EC5E2
# 228 "data/maps/Route103/scripts.pory"
	lock
# 229 "data/maps/Route103/scripts.pory"
	faceplayer
# 230 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_WILLYSTAD_CITY_STATE, 2, Route103_EventScript_Man2
# 231 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Ledges, MSGBOX_DEFAULT //edited
# 232 "data/maps/Route103/scripts.pory"
	release
# 233 "data/maps/Route103/scripts.pory"
	end
# 234 "data/maps/Route103/scripts.pory"

# 235 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man2::
# 236 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_Man2, MSGBOX_DEFAULT //edited
# 237 "data/maps/Route103/scripts.pory"
	release
# 238 "data/maps/Route103/scripts.pory"
	end
# 239 "data/maps/Route103/scripts.pory"

# 240 "data/maps/Route103/scripts.pory"
Route103_Text_Ledges: @ 81ECBB5 //edited
# 241 "data/maps/Route103/scripts.pory"
	.string "I jumped down from this ledge.\p"
# 242 "data/maps/Route103/scripts.pory"
	.string "But now there's no way back up.$"
# 243 "data/maps/Route103/scripts.pory"

# 244 "data/maps/Route103/scripts.pory"
Route103_Text_Man2:
# 245 "data/maps/Route103/scripts.pory"
	.string "You see that shady figure\n"
# 246 "data/maps/Route103/scripts.pory"
	.string "over there?\p"
# 247 "data/maps/Route103/scripts.pory"
	.string "I bet he's up to no good.$"
# 248 "data/maps/Route103/scripts.pory"

# 249 "data/maps/Route103/scripts.pory"
@ old:
# 250 "data/maps/Route103/scripts.pory"

# 251 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 252 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 253 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 254 "data/maps/Route103/scripts.pory"
	return
# 255 "data/maps/Route103/scripts.pory"

# 256 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 257 "data/maps/Route103/scripts.pory"
	lockall
# 258 "data/maps/Route103/scripts.pory"
	checkplayergender
# 259 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 260 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 261 "data/maps/Route103/scripts.pory"
	end
# 262 "data/maps/Route103/scripts.pory"

# 263 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 264 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 265 "data/maps/Route103/scripts.pory"
	closemessage
# 266 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 267 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 268 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 269 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 270 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 272 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 273 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 274 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 275 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 276 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 277 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 278 "data/maps/Route103/scripts.pory"
	end
# 279 "data/maps/Route103/scripts.pory"

# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 281 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 282 "data/maps/Route103/scripts.pory"
	closemessage
# 283 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 284 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 285 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 286 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 287 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 288 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 289 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 290 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 291 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 292 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 293 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 294 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 295 "data/maps/Route103/scripts.pory"
	end
# 296 "data/maps/Route103/scripts.pory"

# 297 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 298 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 299 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 300 "data/maps/Route103/scripts.pory"
	end
# 301 "data/maps/Route103/scripts.pory"

# 302 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 303 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 304 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 305 "data/maps/Route103/scripts.pory"
	end
# 306 "data/maps/Route103/scripts.pory"

# 307 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 308 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 309 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 310 "data/maps/Route103/scripts.pory"
	end
# 311 "data/maps/Route103/scripts.pory"

# 312 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 313 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 314 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 315 "data/maps/Route103/scripts.pory"
	end
# 316 "data/maps/Route103/scripts.pory"

# 317 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 318 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 319 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 320 "data/maps/Route103/scripts.pory"
	end
# 321 "data/maps/Route103/scripts.pory"

# 322 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 323 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 324 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 325 "data/maps/Route103/scripts.pory"
	end
# 326 "data/maps/Route103/scripts.pory"

# 327 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 328 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 329 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 330 "data/maps/Route103/scripts.pory"
	end
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 333 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 334 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 335 "data/maps/Route103/scripts.pory"
	end
# 336 "data/maps/Route103/scripts.pory"

# 337 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 338 "data/maps/Route103/scripts.pory"
	closemessage
# 339 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 340 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 341 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 342 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 343 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 344 "data/maps/Route103/scripts.pory"
	end
# 345 "data/maps/Route103/scripts.pory"

# 346 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 347 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 348 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 349 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 350 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 351 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 352 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 353 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 354 "data/maps/Route103/scripts.pory"
	end
# 355 "data/maps/Route103/scripts.pory"

# 356 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 357 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 358 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 359 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 360 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 361 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 362 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 363 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 364 "data/maps/Route103/scripts.pory"
	end
# 365 "data/maps/Route103/scripts.pory"

# 366 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 367 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 368 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 369 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 370 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 371 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 372 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 373 "data/maps/Route103/scripts.pory"
	end
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 376 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 377 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 378 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 379 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 380 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 381 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 382 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 383 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 384 "data/maps/Route103/scripts.pory"
	releaseall
# 385 "data/maps/Route103/scripts.pory"
	end
# 386 "data/maps/Route103/scripts.pory"

# 387 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 388 "data/maps/Route103/scripts.pory"
	walk_left
# 389 "data/maps/Route103/scripts.pory"
	walk_down
# 390 "data/maps/Route103/scripts.pory"
	step_end
# 391 "data/maps/Route103/scripts.pory"

# 392 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 393 "data/maps/Route103/scripts.pory"
	jump_2_down
# 394 "data/maps/Route103/scripts.pory"
	delay_16
# 395 "data/maps/Route103/scripts.pory"
	walk_down
# 396 "data/maps/Route103/scripts.pory"
	walk_down
# 397 "data/maps/Route103/scripts.pory"
	walk_down
# 398 "data/maps/Route103/scripts.pory"
	walk_down
# 399 "data/maps/Route103/scripts.pory"
	step_end
# 400 "data/maps/Route103/scripts.pory"

# 401 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 402 "data/maps/Route103/scripts.pory"
	delay_16
# 403 "data/maps/Route103/scripts.pory"
	delay_4
# 404 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 405 "data/maps/Route103/scripts.pory"
	delay_16
# 406 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 407 "data/maps/Route103/scripts.pory"
	step_end
# 408 "data/maps/Route103/scripts.pory"

# 409 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 410 "data/maps/Route103/scripts.pory"
	walk_down
# 411 "data/maps/Route103/scripts.pory"
	step_end
# 412 "data/maps/Route103/scripts.pory"

# 413 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 414 "data/maps/Route103/scripts.pory"
	jump_2_down
# 415 "data/maps/Route103/scripts.pory"
	delay_16
# 416 "data/maps/Route103/scripts.pory"
	walk_down
# 417 "data/maps/Route103/scripts.pory"
	walk_down
# 418 "data/maps/Route103/scripts.pory"
	walk_down
# 419 "data/maps/Route103/scripts.pory"
	step_end
# 420 "data/maps/Route103/scripts.pory"

# 421 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 422 "data/maps/Route103/scripts.pory"
	delay_16
# 423 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 424 "data/maps/Route103/scripts.pory"
	step_end
# 425 "data/maps/Route103/scripts.pory"

# 426 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 427 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 428 "data/maps/Route103/scripts.pory"
	end
# 429 "data/maps/Route103/scripts.pory"

# 430 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man_old::
# 431 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 432 "data/maps/Route103/scripts.pory"
	end
# 433 "data/maps/Route103/scripts.pory"

# 434 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 435 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 436 "data/maps/Route103/scripts.pory"
	end
# 437 "data/maps/Route103/scripts.pory"

# 438 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 439 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 440 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 441 "data/maps/Route103/scripts.pory"
	end
# 442 "data/maps/Route103/scripts.pory"

# 443 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 444 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
# 445 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 446 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
# 447 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 448 "data/maps/Route103/scripts.pory"
	end
# 449 "data/maps/Route103/scripts.pory"

# 450 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 451 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 452 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 453 "data/maps/Route103/scripts.pory"
	release
# 454 "data/maps/Route103/scripts.pory"
	end
# 455 "data/maps/Route103/scripts.pory"

# 456 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 457 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 458 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/Route103/scripts.pory"
	end
# 460 "data/maps/Route103/scripts.pory"

# 461 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 462 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
# 463 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 464 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
# 465 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 466 "data/maps/Route103/scripts.pory"
	end
# 467 "data/maps/Route103/scripts.pory"

# 468 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 469 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 470 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 471 "data/maps/Route103/scripts.pory"
	release
# 472 "data/maps/Route103/scripts.pory"
	end
# 473 "data/maps/Route103/scripts.pory"

# 474 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 475 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 476 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 477 "data/maps/Route103/scripts.pory"
	end
# 478 "data/maps/Route103/scripts.pory"

# 479 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 480 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 481 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 482 "data/maps/Route103/scripts.pory"
	end
# 483 "data/maps/Route103/scripts.pory"

# 484 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 485 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
# 486 "data/maps/Route103/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 487 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
# 488 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 489 "data/maps/Route103/scripts.pory"
	release
# 490 "data/maps/Route103/scripts.pory"
	end
# 491 "data/maps/Route103/scripts.pory"

# 492 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 493 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 494 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 495 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 496 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 497 "data/maps/Route103/scripts.pory"
	release
# 498 "data/maps/Route103/scripts.pory"
	end
# 499 "data/maps/Route103/scripts.pory"

# 500 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 501 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 502 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 503 "data/maps/Route103/scripts.pory"
	end
# 504 "data/maps/Route103/scripts.pory"

# 505 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 506 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 507 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 508 "data/maps/Route103/scripts.pory"
	end
# 509 "data/maps/Route103/scripts.pory"

# 510 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 511 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 512 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 513 "data/maps/Route103/scripts.pory"
	end
# 514 "data/maps/Route103/scripts.pory"

# 515 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 516 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 517 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 518 "data/maps/Route103/scripts.pory"
	end
# 519 "data/maps/Route103/scripts.pory"

# 520 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 521 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 522 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 523 "data/maps/Route103/scripts.pory"
	end
# 524 "data/maps/Route103/scripts.pory"

# 525 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 526 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The POKéMON found\n"
# 527 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 528 "data/maps/Route103/scripts.pory"

# 529 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 530 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 531 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 532 "data/maps/Route103/scripts.pory"
	.string "a POKéMON as a gift.\p"
# 533 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 534 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 535 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 536 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 537 "data/maps/Route103/scripts.pory"

# 538 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 539 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 540 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 541 "data/maps/Route103/scripts.pory"

# 542 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 543 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 544 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 545 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that POKéMON,\n"
# 546 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 547 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 548 "data/maps/Route103/scripts.pory"
	.string "kind of POKéMON easily.\p"
# 549 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 550 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 551 "data/maps/Route103/scripts.pory"

# 552 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 553 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 554 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 555 "data/maps/Route103/scripts.pory"

# 556 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 557 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 558 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
# 559 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 560 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 561 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 562 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 563 "data/maps/Route103/scripts.pory"

# 564 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 565 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 566 "data/maps/Route103/scripts.pory"

# 567 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 568 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 569 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 570 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 571 "data/maps/Route103/scripts.pory"
	.string "Look, your POKéMON already likes you,\n"
# 572 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 573 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 574 "data/maps/Route103/scripts.pory"
	.string "could befriend any POKéMON with ease.\p"
# 575 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 576 "data/maps/Route103/scripts.pory"

# 577 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 578 "data/maps/Route103/scripts.pory"
	.string "My POKéMON is staggeringly tired…\n"
# 579 "data/maps/Route103/scripts.pory"
	.string "I should have brought a POTION…$"
# 580 "data/maps/Route103/scripts.pory"

# 581 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 582 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 583 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 584 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 585 "data/maps/Route103/scripts.pory"

# 586 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 587 "data/maps/Route103/scripts.pory"
	.string "ROUTE 103\n"
# 588 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} OLDALE TOWN$"
