# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 3 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 4 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 5 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 6 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 7 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 8 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 9 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 10 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 11 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 12 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 13 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 14 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 15 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 16 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 17 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 18 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 19 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 20 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 21 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 22 "data/maps/SlateportCity/scripts.pory"

# 23 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 24 "data/maps/SlateportCity/scripts.pory"

# 25 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 26 "data/maps/SlateportCity/scripts.pory"
	//map_script MAP_SCRIPT_ON_LOAD, SlateportCity_OnLoad
# 27 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 28 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SlateportCity_OnWarp
# 29 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 30 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 31 "data/maps/SlateportCity/scripts.pory"

# 32 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 33 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 34 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 35 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_EVER_GRANDE_CITY_STATE, 0
# 36 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_PrepareIntroGame
# 37 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 1
# 38 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_LocateRival
# 39 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 1
# 40 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_RivalIntroduction
# 41 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_MovePeopleForSternInterview
# 42 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1
# 43 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_SetReadyForScottScene
# 44 "data/maps/SlateportCity/scripts.pory"
	end
# 45 "data/maps/SlateportCity/scripts.pory"

# 46 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 47 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 48 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 49 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 50 "data/maps/SlateportCity/scripts.pory"
	return
# 51 "data/maps/SlateportCity/scripts.pory"

# 52 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_LocateRival::
# 53 "data/maps/SlateportCity/scripts.pory"
	//setobjectxy 2, 21, 15
# 54 "data/maps/SlateportCity/scripts.pory"
	//setobjectxy 19, 17, 13
# 55 "data/maps/SlateportCity/scripts.pory"
	addobject 2
# 56 "data/maps/SlateportCity/scripts.pory"
	//addobject 19
# 57 "data/maps/SlateportCity/scripts.pory"
	end
# 58 "data/maps/SlateportCity/scripts.pory"
	
# 59 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnWarp:
# 60 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_MAUVILLE_CITY_STATE, 0, SlateportCity_EventScript_PrepareIntroGame
# 61 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_LocateRival
# 62 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 1
# 63 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_LocateRival
# 64 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_EVER_GRANDE_CITY_STATE, 0
# 65 "data/maps/SlateportCity/scripts.pory"
	//call_if_eq SlateportCity_EventScript_PrepareIntroGame
# 66 "data/maps/SlateportCity/scripts.pory"
	//end
# 67 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 68 "data/maps/SlateportCity/scripts.pory"

# 69 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_OnLoad:
# 70 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_MAUVILLE_CITY_STATE, 0, SlateportCity_EventScript_PrepareIntroGame
# 71 "data/maps/SlateportCity/scripts.pory"
	//.2byte 0
# 72 "data/maps/SlateportCity/scripts.pory"

# 73 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 74 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 75 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_RivalIntroduction
# 76 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_EVER_GRANDE_CITY_STATE, 2, SlateportCity_EventScript_ProfIntroduction
# 77 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_EVER_GRANDE_CITY_STATE, 1, SlateportCity_EventScript_IntroGame3
# 78 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_EVER_GRANDE_CITY_STATE, 0, SlateportCity_EventScript_IntroGame2
# 79 "data/maps/SlateportCity/scripts.pory"
	//map_script_2 VAR_EVER_GRANDE_CITY_STATE, 0, SlateportCity_EventScript_IntroGame
# 80 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 81 "data/maps/SlateportCity/scripts.pory"

# 82 "data/maps/SlateportCity/scripts.pory"
@ new:
# 83 "data/maps/SlateportCity/scripts.pory"

# 84 "data/maps/SlateportCity/scripts.pory"
// =======================================
# 85 "data/maps/SlateportCity/scripts.pory"
// CUTSCENE: NEW GAME INTRODUCTION, AUTO-PLAY
# 86 "data/maps/SlateportCity/scripts.pory"
// =======================================
# 87 "data/maps/SlateportCity/scripts.pory"

# 88 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ProfIntroduction::
# 89 "data/maps/SlateportCity/scripts.pory"
	lock
# 90 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 91 "data/maps/SlateportCity/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 92 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 93 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ProfHarbor, MSGBOX_DEFAULT
# 95 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 96 "data/maps/SlateportCity/scripts.pory"
	applymovement 10, SlateportCity_Movement_WalkInPlaceLeft
# 97 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ProfHarbor2, MSGBOX_DEFAULT
# 99 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 100 "data/maps/SlateportCity/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 101 "data/maps/SlateportCity/scripts.pory"
	applymovement 10, SlateportCity_Movement_ProfHarborExit
# 102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 103 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_HARBOR_PROF
# 104 "data/maps/SlateportCity/scripts.pory"
	removeobject 10
# 105 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 3
# 106 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 107 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 108 "data/maps/SlateportCity/scripts.pory"
	release
# 109 "data/maps/SlateportCity/scripts.pory"
	end
# 110 "data/maps/SlateportCity/scripts.pory"

# 111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ProfHarbor:
# 112 "data/maps/SlateportCity/scripts.pory"
	.string "Prof. Buxus: Welcome to\n"
# 113 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad City, {PLAYER}!\p"
# 114 "data/maps/SlateportCity/scripts.pory"
	.string "There is no better place to rest\n"
# 115 "data/maps/SlateportCity/scripts.pory"
	.string "and recover than Rainbow Island.$"
# 116 "data/maps/SlateportCity/scripts.pory"

# 117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_WalkInPlaceLeft:
# 118 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_left
# 119 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_left
# 120 "data/maps/SlateportCity/scripts.pory"
	step_end
# 121 "data/maps/SlateportCity/scripts.pory"

# 122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ProfHarbor2:
# 123 "data/maps/SlateportCity/scripts.pory"
	.string "Alright now, I am running late for\n"
# 124 "data/maps/SlateportCity/scripts.pory"
	.string "an important meeting.\p"
# 125 "data/maps/SlateportCity/scripts.pory"
	.string "Come meet me in my laboratory later!$"
# 126 "data/maps/SlateportCity/scripts.pory"

# 127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ProfHarborExit:
# 128 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 129 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 130 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 131 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 132 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 133 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 134 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 135 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 136 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 137 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 138 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 139 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 140 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 141 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 142 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 143 "data/maps/SlateportCity/scripts.pory"
	step_end
# 144 "data/maps/SlateportCity/scripts.pory"

# 145 "data/maps/SlateportCity/scripts.pory"
// ============================================================
# 146 "data/maps/SlateportCity/scripts.pory"
// DEBUGGING AND TESTING SCRIPTS.
# 147 "data/maps/SlateportCity/scripts.pory"
// ============================================================
# 148 "data/maps/SlateportCity/scripts.pory"

# 149 "data/maps/SlateportCity/scripts.pory"
Script_GivePokemonDemo::
# 150 "data/maps/SlateportCity/scripts.pory"
	lock
# 151 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 152 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 153 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 154 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_TakeCharizard, MSGBOX_DEFAULT
# 155 "data/maps/SlateportCity/scripts.pory"
	getpartysize
# 156 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, 6
# 157 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq Script_PlayerHasFullParty
# 158 "data/maps/SlateportCity/scripts.pory"
	givemon SPECIES_CHARIZARD, 50, ITEM_DRAGON_FANG
# 159 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_ReceivedCharizard, MSGBOX_DEFAULT
# 161 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 162 "data/maps/SlateportCity/scripts.pory"
	release
# 163 "data/maps/SlateportCity/scripts.pory"
	end
# 164 "data/maps/SlateportCity/scripts.pory"

# 165 "data/maps/SlateportCity/scripts.pory"
Script_PlayerHasFullParty::
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_PlayerHasFullParty, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	release
# 168 "data/maps/SlateportCity/scripts.pory"
	end
# 169 "data/maps/SlateportCity/scripts.pory"

# 170 "data/maps/SlateportCity/scripts.pory"
Text_TakeCharizard:
# 171 "data/maps/SlateportCity/scripts.pory"
	.string "Please, take this Charizard.$"
# 172 "data/maps/SlateportCity/scripts.pory"

# 173 "data/maps/SlateportCity/scripts.pory"
Text_ReceivedCharizard:
# 174 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received a Charizard!$"
# 175 "data/maps/SlateportCity/scripts.pory"

# 176 "data/maps/SlateportCity/scripts.pory"
Text_PlayerHasFullParty:
# 177 "data/maps/SlateportCity/scripts.pory"
	.string "Ah, your party is full.$"
# 178 "data/maps/SlateportCity/scripts.pory"

# 179 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew::
# 180 "data/maps/SlateportCity/scripts.pory"
	lock
# 181 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 182 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugHello, MSGBOX_DEFAULT
# 183 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugSubmarine, MSGBOX_YESNO
# 184 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
# 185 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq Script_DebugKecleonSubmarine
# 186 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugOcean, MSGBOX_YESNO
# 187 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, YES
# 188 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq Script_DebugKecleonOcean
# 189 "data/maps/SlateportCity/scripts.pory"
	message Text_DebugHello2
# 190 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 191 "data/maps/SlateportCity/scripts.pory"
	//multichoice 1, 1, MULTI_DEBUG_KECLEON, 0
# 192 "data/maps/SlateportCity/scripts.pory"
	//scrollingmultichoice 0, 2, 2, 5, TRUE @ from here on commented out as it uses a deprecated macro...
# 193 "data/maps/SlateportCity/scripts.pory"
	//switch VAR_RESULT
# 194 "data/maps/SlateportCity/scripts.pory"
	//case 0, Script_DebugKecleonNew_1
# 195 "data/maps/SlateportCity/scripts.pory"
	//case 1, Script_DebugKecleonNew_2
# 196 "data/maps/SlateportCity/scripts.pory"
	//case 2, Script_DebugKecleonNew_3
# 197 "data/maps/SlateportCity/scripts.pory"
	//case 3, Script_DebugKecleonNew_4
# 198 "data/maps/SlateportCity/scripts.pory"
	//case 4, Script_DebugKecleonNew_5
# 199 "data/maps/SlateportCity/scripts.pory"
	//case 5, Script_DebugKecleonNew_6a
# 200 "data/maps/SlateportCity/scripts.pory"
	//case 6, Script_DebugKecleonNew_6b
# 201 "data/maps/SlateportCity/scripts.pory"
	//case 7, Script_DebugKecleonNew_7
# 202 "data/maps/SlateportCity/scripts.pory"
	//case MULTI_B_PRESSED, Script_DebugKecleonNew_Cancel
# 203 "data/maps/SlateportCity/scripts.pory"

# 204 "data/maps/SlateportCity/scripts.pory"
Text_DebugHello:
# 205 "data/maps/SlateportCity/scripts.pory"
	.string "Hello, I'm {COLOR}{RED}Debug Kecleon{COLOR}{DARK_GRAY}.$"
# 206 "data/maps/SlateportCity/scripts.pory"

# 207 "data/maps/SlateportCity/scripts.pory"
Text_DebugSubmarine:
# 208 "data/maps/SlateportCity/scripts.pory"
	.string "Do you wish to go to the\n"
# 209 "data/maps/SlateportCity/scripts.pory"
	.string "submarine?$"
# 210 "data/maps/SlateportCity/scripts.pory"

# 211 "data/maps/SlateportCity/scripts.pory"
Text_DebugOcean:
# 212 "data/maps/SlateportCity/scripts.pory"
	.string "Do you wish to play the\n"
# 213 "data/maps/SlateportCity/scripts.pory"
	.string "ocean animation sequence?$"
# 214 "data/maps/SlateportCity/scripts.pory"

# 215 "data/maps/SlateportCity/scripts.pory"
Text_DebugHello2:
# 216 "data/maps/SlateportCity/scripts.pory"
	.string "To which game state do you\n"
# 217 "data/maps/SlateportCity/scripts.pory"
	.string "wish to go?$"
# 218 "data/maps/SlateportCity/scripts.pory"

# 219 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonSubmarine::
# 220 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 2
# 221 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_HARBOR_PROF
# 222 "data/maps/SlateportCity/scripts.pory"
	warp MAP_ABANDONED_SHIP_CAPTAINS_OFFICE, 255, 5, 4
# 223 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 224 "data/maps/SlateportCity/scripts.pory"
	release
# 225 "data/maps/SlateportCity/scripts.pory"
	end
# 226 "data/maps/SlateportCity/scripts.pory"

# 227 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonOcean::
# 228 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 1
# 229 "data/maps/SlateportCity/scripts.pory"
	warp MAP_ROUTE108, 255, 12, 17
# 230 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 231 "data/maps/SlateportCity/scripts.pory"
	release
# 232 "data/maps/SlateportCity/scripts.pory"
	end
# 233 "data/maps/SlateportCity/scripts.pory"

# 234 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_1::
# 235 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 236 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 237 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 238 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 239 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 240 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 241 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 0
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option1, MSGBOX_DEFAULT
# 243 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 244 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 245 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 37, 41
# 246 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 247 "data/maps/SlateportCity/scripts.pory"
	release
# 248 "data/maps/SlateportCity/scripts.pory"
	end
# 249 "data/maps/SlateportCity/scripts.pory"

# 250 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option1:
# 251 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 1:\n"
# 252 "data/maps/SlateportCity/scripts.pory"
	.string "“Start of new game”$"
# 253 "data/maps/SlateportCity/scripts.pory"

# 254 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_2::
# 255 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 256 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 257 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 258 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 259 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 260 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 261 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 1
# 262 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option2, MSGBOX_DEFAULT
# 263 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 264 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 265 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_1F, 255, 8, 13
# 266 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option2:
# 271 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 2:\n"
# 272 "data/maps/SlateportCity/scripts.pory"
	.string "“Fossil stolen!”$"
# 273 "data/maps/SlateportCity/scripts.pory"
	
# 274 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_3::
# 275 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 276 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 277 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 278 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 279 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 280 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 281 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 2
# 282 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option3, MSGBOX_DEFAULT
# 283 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 284 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 285 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY, 255, 18, 17
# 286 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 287 "data/maps/SlateportCity/scripts.pory"
	release
# 288 "data/maps/SlateportCity/scripts.pory"
	end
# 289 "data/maps/SlateportCity/scripts.pory"

# 290 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option3:
# 291 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 3:\n"
# 292 "data/maps/SlateportCity/scripts.pory"
	.string "“Met your Rival”$"
# 293 "data/maps/SlateportCity/scripts.pory"
	
# 294 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_4::
# 295 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 296 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 297 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 298 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 299 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 300 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 301 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 3
# 302 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option4, MSGBOX_DEFAULT
# 303 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 304 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 305 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_1F, 255, 9, 13
# 306 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 307 "data/maps/SlateportCity/scripts.pory"
	release
# 308 "data/maps/SlateportCity/scripts.pory"
	end
# 309 "data/maps/SlateportCity/scripts.pory"

# 310 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option4:
# 311 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 4:\n"
# 312 "data/maps/SlateportCity/scripts.pory"
	.string "“Defeated the Thief”$"
# 313 "data/maps/SlateportCity/scripts.pory"

# 314 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_5::
# 315 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 316 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 317 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 318 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 319 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 320 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 321 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 4
# 322 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option5, MSGBOX_DEFAULT
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 325 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_1F, 255, 8, 11
# 326 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 327 "data/maps/SlateportCity/scripts.pory"
	release
# 328 "data/maps/SlateportCity/scripts.pory"
	end
# 329 "data/maps/SlateportCity/scripts.pory"

# 330 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option5:
# 331 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 5:\n"
# 332 "data/maps/SlateportCity/scripts.pory"
	.string "“Fossil returned!”$"
# 333 "data/maps/SlateportCity/scripts.pory"

# 334 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_6a::
# 335 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 336 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 337 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 338 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 339 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 340 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 341 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 4
# 342 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option6a, MSGBOX_DEFAULT
# 343 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 344 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 345 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_POKEMON_SCHOOL, 255, 6, 8
# 346 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 347 "data/maps/SlateportCity/scripts.pory"
	release
# 348 "data/maps/SlateportCity/scripts.pory"
	end
# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option6a:
# 351 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 6a:\n"
# 352 "data/maps/SlateportCity/scripts.pory"
	.string "“Met the Prof”$"
# 353 "data/maps/SlateportCity/scripts.pory"
	
# 354 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_6b::
# 355 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 356 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 357 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 358 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 359 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 360 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 361 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 5
# 362 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option6b, MSGBOX_DEFAULT
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 364 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 365 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_2F, 255, 8, 9
# 366 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 367 "data/maps/SlateportCity/scripts.pory"
	release
# 368 "data/maps/SlateportCity/scripts.pory"
	end
# 369 "data/maps/SlateportCity/scripts.pory"

# 370 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option6b:
# 371 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 6b:\n"
# 372 "data/maps/SlateportCity/scripts.pory"
	.string "“Met the Mayor”$"
# 373 "data/maps/SlateportCity/scripts.pory"
	
# 374 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_7::
# 375 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 376 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_AND_THIEF
# 377 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 378 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CITYHALL_MAYOR_PROF
# 379 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_CROWD_FOSSIL
# 380 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_MAYOR_OFFICE_LOCKED
# 381 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 6
# 382 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_Debug_Option7, MSGBOX_DEFAULT
# 383 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugDone, MSGBOX_DEFAULT
# 384 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 385 "data/maps/SlateportCity/scripts.pory"
	warp MAP_RUSTBORO_CITY_DEVON_CORP_1F, 255, 8, 5
# 386 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 387 "data/maps/SlateportCity/scripts.pory"
	release
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
Text_Debug_Option7:
# 391 "data/maps/SlateportCity/scripts.pory"
	.string "You chose Option 7:\n"
# 392 "data/maps/SlateportCity/scripts.pory"
	.string "“Met Prof and Mayor”$"
# 393 "data/maps/SlateportCity/scripts.pory"

# 394 "data/maps/SlateportCity/scripts.pory"
Script_DebugKecleonNew_Cancel::
# 395 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_DebugBye, MSGBOX_DEFAULT
# 396 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 397 "data/maps/SlateportCity/scripts.pory"
	release
# 398 "data/maps/SlateportCity/scripts.pory"
	end
# 399 "data/maps/SlateportCity/scripts.pory"

# 400 "data/maps/SlateportCity/scripts.pory"
Text_DebugDone:
# 401 "data/maps/SlateportCity/scripts.pory"
	.string "All done. See ya!$"
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
Text_DebugBye:
# 404 "data/maps/SlateportCity/scripts.pory"
	.string "OK then. Bye!$"
# 405 "data/maps/SlateportCity/scripts.pory"

# 406 "data/maps/SlateportCity/scripts.pory"
// ==== ANIMATION TEST RUN: ===
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
Script_AnimationTest::
# 409 "data/maps/SlateportCity/scripts.pory"
	lock
# 410 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity/scripts.pory"
	msgbox Text_AnimationTest1, MSGBOX_DEFAULT
# 412 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 413 "data/maps/SlateportCity/scripts.pory"
	addobject 17
# 414 "data/maps/SlateportCity/scripts.pory"
	applymovement 17, Movement_Test1
# 415 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 416 "data/maps/SlateportCity/scripts.pory"
	removeobject 17
# 417 "data/maps/SlateportCity/scripts.pory"
	addobject 20
# 418 "data/maps/SlateportCity/scripts.pory"
	applymovement 20, Movement_Test1
# 419 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 420 "data/maps/SlateportCity/scripts.pory"
	removeobject 20
# 421 "data/maps/SlateportCity/scripts.pory"
	addobject 5
# 422 "data/maps/SlateportCity/scripts.pory"
	applymovement 5, Movement_Test1
# 423 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 424 "data/maps/SlateportCity/scripts.pory"
	release
# 425 "data/maps/SlateportCity/scripts.pory"
	end
# 426 "data/maps/SlateportCity/scripts.pory"

# 427 "data/maps/SlateportCity/scripts.pory"
Text_AnimationTest1:
# 428 "data/maps/SlateportCity/scripts.pory"
	.string "Starting test animation.$"
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
Movement_Test1:
# 431 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 432 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 433 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 434 "data/maps/SlateportCity/scripts.pory"
	step_end
# 435 "data/maps/SlateportCity/scripts.pory"

# 436 "data/maps/SlateportCity/scripts.pory"
// ============================================================
# 437 "data/maps/SlateportCity/scripts.pory"
// NPC INTERACTIONS. WILLYSTAD CITIZENS.
# 438 "data/maps/SlateportCity/scripts.pory"
// ============================================================
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign:: @ 81DCF79
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 442 "data/maps/SlateportCity/scripts.pory"
	end
# 443 "data/maps/SlateportCity/scripts.pory"

# 444 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_EventScript_BattleTentSign:: @ 81DCF36
# 445 "data/maps/SlateportCity/scripts.pory"
	//msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 446 "data/maps/SlateportCity/scripts.pory"
	//end
# 447 "data/maps/SlateportCity/scripts.pory"

# 448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign:: @ 81DCF82
# 449 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 450 "data/maps/SlateportCity/scripts.pory"
	end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign:: @ 81DCF8B
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign:: @ 81DCF94
# 457 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CityHallSign, MSGBOX_SIGN
# 458 "data/maps/SlateportCity/scripts.pory"
	end
# 459 "data/maps/SlateportCity/scripts.pory"

# 460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman:: @ 81DCE63
# 461 "data/maps/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PeerHorizon, MSGBOX_NPC
# 463 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 464 "data/maps/SlateportCity/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 465 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 466 "data/maps/SlateportCity/scripts.pory"
	release
# 467 "data/maps/SlateportCity/scripts.pory"
	end
# 468 "data/maps/SlateportCity/scripts.pory"

# 469 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl:: @ 81DCE84
# 470 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketAndMart, MSGBOX_NPC
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan:: @ 81DCED9
# 474 "data/maps/SlateportCity/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 1
# 475 "data/maps/SlateportCity/scripts.pory"
	//goto_if_eq SlateportCity_EventScript_FatManSternInterview
# 476 "data/maps/SlateportCity/scripts.pory"
	lock
# 477 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 478 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketBlockedTourist, MSGBOX_NPC
# 479 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 480 "data/maps/SlateportCity/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 481 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 482 "data/maps/SlateportCity/scripts.pory"
	release
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1:: @ 81DCEF6
# 486 "data/maps/SlateportCity/scripts.pory"
	lock
# 487 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 488 "data/maps/SlateportCity/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 1
# 489 "data/maps/SlateportCity/scripts.pory"
	call_if_eq SlateportCity_EventScript_Man1SternInterview
# 490 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 491 "data/maps/SlateportCity/scripts.pory"
	release
# 492 "data/maps/SlateportCity/scripts.pory"
	end
# 493 "data/maps/SlateportCity/scripts.pory"

# 494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1:: @ 81DCF17
# 495 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotOutside, MSGBOX_NPC
# 496 "data/maps/SlateportCity/scripts.pory"
	end
# 497 "data/maps/SlateportCity/scripts.pory"

# 498 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac:: @ 81DCFBB
# 499 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigCityLife, MSGBOX_NPC
# 500 "data/maps/SlateportCity/scripts.pory"
	end
# 501 "data/maps/SlateportCity/scripts.pory"

# 502 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_LittleGirl:: @ 81DCFBB
# 503 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LittleGirl, MSGBOX_NPC
# 504 "data/maps/SlateportCity/scripts.pory"
	end
# 505 "data/maps/SlateportCity/scripts.pory"

# 506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldMan:: @ 81DCFDC
# 507 "data/maps/SlateportCity/scripts.pory"
	lock
# 508 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 509 "data/maps/SlateportCity/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 2
# 510 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq SlateportCity_EventScript_OldMan2
# 511 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OldMan, MSGBOX_DEFAULT
# 512 "data/maps/SlateportCity/scripts.pory"
	release
# 513 "data/maps/SlateportCity/scripts.pory"
	end
# 514 "data/maps/SlateportCity/scripts.pory"

# 515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldMan2::
# 516 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OldMan2, MSGBOX_DEFAULT
# 517 "data/maps/SlateportCity/scripts.pory"
	release
# 518 "data/maps/SlateportCity/scripts.pory"
	end
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1:: @ 81DCFE5
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 522 "data/maps/SlateportCity/scripts.pory"
	end
# 523 "data/maps/SlateportCity/scripts.pory"

# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2:: @ 81DCFEE
# 525 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketBlockedSailor, MSGBOX_NPC //edited
# 526 "data/maps/SlateportCity/scripts.pory"
	end
# 527 "data/maps/SlateportCity/scripts.pory"

# 528 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2:: @ 81DD000
# 529 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RecentArrival, MSGBOX_NPC
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BlackBelt:: @ 81DD009
# 533 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Jungle, MSGBOX_NPC
# 534 "data/maps/SlateportCity/scripts.pory"
	end
# 535 "data/maps/SlateportCity/scripts.pory"

# 536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Pikachu:: @ 8215F80
# 537 "data/maps/SlateportCity/scripts.pory"
	lock
# 538 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 539 "data/maps/SlateportCity/scripts.pory"
	waitse
# 540 "data/maps/SlateportCity/scripts.pory"
	playmoncry SPECIES_PIKACHU, 0
# 541 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_Text_Pikachu, MSGBOX_DEFAULT
# 542 "data/maps/SlateportCity/scripts.pory"
	waitmoncry
# 543 "data/maps/SlateportCity/scripts.pory"
	release
# 544 "data/maps/SlateportCity/scripts.pory"
	end
# 545 "data/maps/SlateportCity/scripts.pory"

# 546 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Text_Pikachu:
# 547 "data/maps/SlateportCity/scripts.pory"
	.string "Pikachu: Piikaa!$"
# 548 "data/maps/SlateportCity/scripts.pory"

# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty:: @ 81DD353
# 550 "data/maps/SlateportCity/scripts.pory"
	lock
# 551 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CameraMan1, MSGBOX_SIGN
# 552 "data/maps/SlateportCity/scripts.pory"
	release
# 553 "data/maps/SlateportCity/scripts.pory"
	end
# 554 "data/maps/SlateportCity/scripts.pory"

# 555 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby:: @ 81DD35C
# 556 "data/maps/SlateportCity/scripts.pory"
	lock
# 557 "data/maps/SlateportCity/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 2
# 558 "data/maps/SlateportCity/scripts.pory"
	goto_if_ge SlateportCity_EventScript_Gabby2
# 559 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Reporter1, MSGBOX_SIGN
# 560 "data/maps/SlateportCity/scripts.pory"
	release
# 561 "data/maps/SlateportCity/scripts.pory"
	end
# 562 "data/maps/SlateportCity/scripts.pory"

# 563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby2::
# 564 "data/maps/SlateportCity/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 4
# 565 "data/maps/SlateportCity/scripts.pory"
	goto_if_ge SlateportCity_EventScript_Gabby3
# 566 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Reporter2, MSGBOX_SIGN
# 567 "data/maps/SlateportCity/scripts.pory"
	release
# 568 "data/maps/SlateportCity/scripts.pory"
	end
# 569 "data/maps/SlateportCity/scripts.pory"

# 570 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby3::
# 571 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Reporter3, MSGBOX_SIGN
# 572 "data/maps/SlateportCity/scripts.pory"
	release
# 573 "data/maps/SlateportCity/scripts.pory"
	end
# 574 "data/maps/SlateportCity/scripts.pory"

# 575 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_InMyShotScene:: @ 81DD5DC
# 576 "data/maps/SlateportCity/scripts.pory"
	lockall
# 577 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 578 "data/maps/SlateportCity/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 579 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 581 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 582 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CameraMan2, MSGBOX_DEFAULT
# 583 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 584 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 585 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 586 "data/maps/SlateportCity/scripts.pory"
//	opendoor 10, 12
# 587 "data/maps/SlateportCity/scripts.pory"
//	waitdooranim
# 588 "data/maps/SlateportCity/scripts.pory"
//	addobject 35
# 589 "data/maps/SlateportCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 590 "data/maps/SlateportCity/scripts.pory"
//	applymovement 35, SlateportCity_Movement_ScottExitBattleTent
# 591 "data/maps/SlateportCity/scripts.pory"
//	waitmovement 0
# 592 "data/maps/SlateportCity/scripts.pory"
//	closedoor 10, 12
# 593 "data/maps/SlateportCity/scripts.pory"
//	waitdooranim
# 594 "data/maps/SlateportCity/scripts.pory"
//	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
//	closemessage
# 596 "data/maps/SlateportCity/scripts.pory"
//	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 597 "data/maps/SlateportCity/scripts.pory"
//	applymovement 35, SlateportCity_Movement_ScottExitAfterBattleTent
# 598 "data/maps/SlateportCity/scripts.pory"
//	waitmovement 0
# 599 "data/maps/SlateportCity/scripts.pory"
//	removeobject 35
# 600 "data/maps/SlateportCity/scripts.pory"
//	addvar VAR_SCOTT_STATE, 1
# 601 "data/maps/SlateportCity/scripts.pory"
//	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 602 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 603 "data/maps/SlateportCity/scripts.pory"
	end
# 604 "data/maps/SlateportCity/scripts.pory"

# 605 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown: @ 81DD630
# 606 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 607 "data/maps/SlateportCity/scripts.pory"
	step_end
# 608 "data/maps/SlateportCity/scripts.pory"

# 609 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PeerHorizon: @ 81DD8A6
# 610 "data/maps/SlateportCity/scripts.pory"
	.string "I love to stand on the docks and peer\n"
# 611 "data/maps/SlateportCity/scripts.pory"
	.string "over the horizon.\p"
# 612 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what is beyond it.$"
# 613 "data/maps/SlateportCity/scripts.pory"

# 614 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketAndMart: @ 81DD93D
# 615 "data/maps/SlateportCity/scripts.pory"
	.string "The Willystad Market sells products\n"
# 616 "data/maps/SlateportCity/scripts.pory"
	.string "from all across the Island.\p"
# 617 "data/maps/SlateportCity/scripts.pory"
	.string "But the Pokémon Mart sells products\n"
# 618 "data/maps/SlateportCity/scripts.pory"
	.string "from all across the world!$"
# 619 "data/maps/SlateportCity/scripts.pory"

# 620 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotOutside: @ 81DDBAC
# 621 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever it's too hot outside, I like\n"
# 622 "data/maps/SlateportCity/scripts.pory"
	.string "to go to a Pokémon Center.\p"
# 623 "data/maps/SlateportCity/scripts.pory"
	.string "They're airconditioned!$"
# 624 "data/maps/SlateportCity/scripts.pory"

# 625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Jungle: @ 81DDC4F
# 626 "data/maps/SlateportCity/scripts.pory"
	.string "I just spent one month in the jungle\n"
# 627 "data/maps/SlateportCity/scripts.pory"
	.string "with my Pokémon.\p"	
# 628 "data/maps/SlateportCity/scripts.pory"
	.string "It was tough, but I can't wait to go\n"	
# 629 "data/maps/SlateportCity/scripts.pory"
	.string "back again!$"
# 630 "data/maps/SlateportCity/scripts.pory"

# 631 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketBlockedSailor: @ 81DE04B //edited
# 632 "data/maps/SlateportCity/scripts.pory"
	.string "Sorry kid! I'm unloading fresh goods\n"
# 633 "data/maps/SlateportCity/scripts.pory"
	.string "to be sold at the Willystad Market.\p"
# 634 "data/maps/SlateportCity/scripts.pory"
	.string "But first, let me take a break.$"
# 635 "data/maps/SlateportCity/scripts.pory"

# 636 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketBlockedTourist: @ 81DDA9A
# 637 "data/maps/SlateportCity/scripts.pory"
	.string "Whoop-de-doo! I can't wait for the\n"
# 638 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad Market to open up.\p"
# 639 "data/maps/SlateportCity/scripts.pory"
	.string "It is a must-visit for tourists like\n"
# 640 "data/maps/SlateportCity/scripts.pory"
	.string "myself, or so I've heard.$"
# 641 "data/maps/SlateportCity/scripts.pory"

# 642 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigCityLife: @ 81DE10E
# 643 "data/maps/SlateportCity/scripts.pory"
	.string "Whew! This city is big!\p"
# 644 "data/maps/SlateportCity/scripts.pory"
	.string "I think I'm lost…$"
# 645 "data/maps/SlateportCity/scripts.pory"

# 646 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LittleGirl: @ 81DE16C
# 647 "data/maps/SlateportCity/scripts.pory"
	.string "My father is a sailor!\l"
# 648 "data/maps/SlateportCity/scripts.pory"
	.string "And my grandpa too!\p"
# 649 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I want to be a\n"
# 650 "data/maps/SlateportCity/scripts.pory"
	.string "sailor myself!$"
# 651 "data/maps/SlateportCity/scripts.pory"

# 652 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OldMan: @ 81DE16C
# 653 "data/maps/SlateportCity/scripts.pory"
	.string "They say the towns on this Island were\n"
# 654 "data/maps/SlateportCity/scripts.pory"
	.string "founded by six families, long ago.\p"
# 655 "data/maps/SlateportCity/scripts.pory"
	.string "They arrived by boat from faraway\n"
# 656 "data/maps/SlateportCity/scripts.pory"
	.string "lands.$"
# 657 "data/maps/SlateportCity/scripts.pory"

# 658 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OldMan2:
# 659 "data/maps/SlateportCity/scripts.pory"
	.string "A strange chap just ran out of\n"
# 660 "data/maps/SlateportCity/scripts.pory"
	.string "the City Hall.\p"
# 661 "data/maps/SlateportCity/scripts.pory"
	.string "It looked like he was carrying\n"
# 662 "data/maps/SlateportCity/scripts.pory"
	.string "something heavy.$"
# 663 "data/maps/SlateportCity/scripts.pory"

# 664 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RecentArrival: @ 81DE1EC
# 665 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, are you new in town as well?\p"
# 666 "data/maps/SlateportCity/scripts.pory"
	.string "I came from overseas to study the\n"
# 667 "data/maps/SlateportCity/scripts.pory"
	.string "unique Pokémon that live here!$"
# 668 "data/maps/SlateportCity/scripts.pory"

# 669 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CameraMan1: @ 81DE491
# 670 "data/maps/SlateportCity/scripts.pory"
	.string "Shush, kid. Can't you see I'm working?$"
# 671 "data/maps/SlateportCity/scripts.pory"

# 672 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CameraMan2: @ 81DE491
# 673 "data/maps/SlateportCity/scripts.pory"
	.string "Hey kid! You're in my shot!$"
# 674 "data/maps/SlateportCity/scripts.pory"

# 675 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Reporter1: @ 81DE4C4
# 676 "data/maps/SlateportCity/scripts.pory"
	.string "We are standing here in front of the\n"
# 677 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad City Hall.\p"
# 678 "data/maps/SlateportCity/scripts.pory"
	.string "In a few moments, the Mayor will reveal\n"
# 679 "data/maps/SlateportCity/scripts.pory"
	.string "a new scientific discovery…\p"
# 680 "data/maps/SlateportCity/scripts.pory"
	.string "Rumour has it that Prof. Buxus found\n"
# 681 "data/maps/SlateportCity/scripts.pory"
	.string "something on one of his expeditions!$"
# 682 "data/maps/SlateportCity/scripts.pory"

# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Reporter2: @ 81DE4C4
# 684 "data/maps/SlateportCity/scripts.pory"
	.string "Breaking news from Willystad City!\p"
# 685 "data/maps/SlateportCity/scripts.pory"
	.string "There has been a heist in the City\n"
# 686 "data/maps/SlateportCity/scripts.pory"
	.string "Hall. A precious item was stolen.\p"
# 687 "data/maps/SlateportCity/scripts.pory"
	.string "The thief was spotted fleeing the\n"
# 688 "data/maps/SlateportCity/scripts.pory"
	.string "city in a haste.\l"
# 689 "data/maps/SlateportCity/scripts.pory"
	.string "Will he be found?\l"
# 690 "data/maps/SlateportCity/scripts.pory"
	.string "Stay tuned for more!$"
# 691 "data/maps/SlateportCity/scripts.pory"

# 692 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Reporter3:
# 693 "data/maps/SlateportCity/scripts.pory"
	.string "Our latest information!\p"
# 694 "data/maps/SlateportCity/scripts.pory"
	.string "The Fossil may have been returned,\n"
# 695 "data/maps/SlateportCity/scripts.pory"
	.string "but questions remain…\l"
# 696 "data/maps/SlateportCity/scripts.pory"
	.string "Who was the strange robber?\l"
# 697 "data/maps/SlateportCity/scripts.pory"
	.string "How could this have happened?\l"
# 698 "data/maps/SlateportCity/scripts.pory"
	.string "Is anyone still safe now?\l"
# 699 "data/maps/SlateportCity/scripts.pory"
	.string "Should we all be afraid?\p"
# 700 "data/maps/SlateportCity/scripts.pory"
	.string "This, and more, after the break.\n"
# 701 "data/maps/SlateportCity/scripts.pory"
	.string "Back to the studio.$"
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign: @ 81DE8BC
# 704 "data/maps/SlateportCity/scripts.pory"
	.string "Prof. Buxus Laboratory\p"
# 705 "data/maps/SlateportCity/scripts.pory"
	.string "“Studying the plants and Pokémon\n"
# 706 "data/maps/SlateportCity/scripts.pory"
	.string "of Sigma Island.”$"
# 707 "data/maps/SlateportCity/scripts.pory"

# 708 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign: @ 81DEA3B
# 709 "data/maps/SlateportCity/scripts.pory"
	.string "Island Warehouse\n"
# 710 "data/maps/SlateportCity/scripts.pory"
	.string "“Buy and sell your goods in bulk!”$"
# 711 "data/maps/SlateportCity/scripts.pory"

# 712 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign: @ 81DEA6F
# 713 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad City\p"
# 714 "data/maps/SlateportCity/scripts.pory"
	.string "“The Island's bustling trading\n"
# 715 "data/maps/SlateportCity/scripts.pory"
	.string "port for over 300 years.”$"
# 716 "data/maps/SlateportCity/scripts.pory"

# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign: @ 81DEAAF
# 718 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad Market\n"
# 719 "data/maps/SlateportCity/scripts.pory"
	.string "“For local and exotic goods!”$"
# 720 "data/maps/SlateportCity/scripts.pory"

# 721 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CityHallSign: @ 81DEB5A
# 722 "data/maps/SlateportCity/scripts.pory"
	.string "Willystad City Hall\p"
# 723 "data/maps/SlateportCity/scripts.pory"
	.string "“Home to the Island Library\n"
# 724 "data/maps/SlateportCity/scripts.pory"
	.string "and the Mayor's Office.”$"
# 725 "data/maps/SlateportCity/scripts.pory"

# 726 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Wingull::
# 727 "data/maps/SlateportCity/scripts.pory"
	//lock
# 728 "data/maps/SlateportCity/scripts.pory"
	applymovement 12, SlateportCity_Movement_WingullFlyEast
# 729 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 730 "data/maps/SlateportCity/scripts.pory"
	release
# 731 "data/maps/SlateportCity/scripts.pory"
	end
# 732 "data/maps/SlateportCity/scripts.pory"

# 733 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_WingullFlyEast:
# 734 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 735 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 736 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 737 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 738 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 739 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 740 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 741 "data/maps/SlateportCity/scripts.pory"
	walk_fast_right
# 742 "data/maps/SlateportCity/scripts.pory"
	step_end
# 743 "data/maps/SlateportCity/scripts.pory"

# 744 "data/maps/SlateportCity/scripts.pory"
// =======================================
# 745 "data/maps/SlateportCity/scripts.pory"
// CUTSCENE: RIVAL INTRODUCTION, AUTO-PLAY
# 746 "data/maps/SlateportCity/scripts.pory"
// =======================================
# 747 "data/maps/SlateportCity/scripts.pory"

# 748 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RivalIntroduction::
# 749 "data/maps/SlateportCity/scripts.pory"
	//setobjectxy 2, 21, 15
# 750 "data/maps/SlateportCity/scripts.pory"
	//addobject 2
# 751 "data/maps/SlateportCity/scripts.pory"
	//setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 752 "data/maps/SlateportCity/scripts.pory"
	lockall
# 753 "data/maps/SlateportCity/scripts.pory"
	//delay 30
# 754 "data/maps/SlateportCity/scripts.pory"
	//applymovement 2, Common_Movement_FaceLeft
# 755 "data/maps/SlateportCity/scripts.pory"
	//waitmovement 0
# 756 "data/maps/SlateportCity/scripts.pory"
	//delay 30
# 757 "data/maps/SlateportCity/scripts.pory"
	//applymovement 2, Common_Movement_FaceRight
# 758 "data/maps/SlateportCity/scripts.pory"
	//waitmovement 0
# 759 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 760 "data/maps/SlateportCity/scripts.pory"
	applymovement 2, Common_Movement_FaceUp
# 761 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 762 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 763 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 764 "data/maps/SlateportCity/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 765 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 766 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
# 767 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 768 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Rival1, MSGBOX_DEFAULT
# 769 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 770 "data/maps/SlateportCity/scripts.pory"
	//delay 16 @ commented out from here...
# 771 "data/maps/SlateportCity/scripts.pory"
	//fadescreen FADE_TO_BLACK
# 772 "data/maps/SlateportCity/scripts.pory"
	//special NameRival //special RivalNameChange
# 773 "data/maps/SlateportCity/scripts.pory"
	//waitstate @ ...to here, because the special is not defined and needs to be recreated
# 774 "data/maps/SlateportCity/scripts.pory"
	//fadescreen FADE_FROM_BLACK
# 775 "data/maps/SlateportCity/scripts.pory"
	//waitstate
# 776 "data/maps/SlateportCity/scripts.pory"
	delay 16
# 777 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Rival2, MSGBOX_DEFAULT
# 778 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 779 "data/maps/SlateportCity/scripts.pory"
	applymovement 2, SlateportCity_Movement_RivalExit
# 780 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/SlateportCity/scripts.pory"
	//playse SE_PIN
# 782 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_RIVAL_SPRITES
# 783 "data/maps/SlateportCity/scripts.pory"
	removeobject 2
# 784 "data/maps/SlateportCity/scripts.pory"
	//playse SE_PIN
# 785 "data/maps/SlateportCity/scripts.pory"
	//setobjectxy 2, 40, 18
# 786 "data/maps/SlateportCity/scripts.pory"
	//addobject 2
# 787 "data/maps/SlateportCity/scripts.pory"
	//setobjectmovementtype 2, MOVEMENT_TYPE_LOOK_AROUND
# 788 "data/maps/SlateportCity/scripts.pory"
	//delay 30
# 789 "data/maps/SlateportCity/scripts.pory"
	//playse SE_PIN
# 790 "data/maps/SlateportCity/scripts.pory"
	//showobjectat 2, MAP_SLATEPORT_CITY
# 791 "data/maps/SlateportCity/scripts.pory"
	//delay 30
# 792 "data/maps/SlateportCity/scripts.pory"
	//playse SE_PIN
# 793 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 2
# 794 "data/maps/SlateportCity/scripts.pory"
	fadedefaultbgm
# 795 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 796 "data/maps/SlateportCity/scripts.pory"
	end
# 797 "data/maps/SlateportCity/scripts.pory"

# 798 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_EventScript_RivalNameChange::
# 799 "data/maps/SlateportCity/scripts.pory"
	//lock
# 800 "data/maps/SlateportCity/scripts.pory"
	//faceplayer
# 801 "data/maps/SlateportCity/scripts.pory"
	//special RivalNameChange
# 802 "data/maps/SlateportCity/scripts.pory"
	//release
# 803 "data/maps/SlateportCity/scripts.pory"
	//end
# 804 "data/maps/SlateportCity/scripts.pory"

# 805 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Rival1:
# 806 "data/maps/SlateportCity/scripts.pory"
	.string "???: Oh, hey there!\p"
# 807 "data/maps/SlateportCity/scripts.pory"
	.string "Let's find this thief, shall\n"
# 808 "data/maps/SlateportCity/scripts.pory"
	.string "we?\p"
# 809 "data/maps/SlateportCity/scripts.pory"
	.string "By the way, what's your name?\n"
# 810 "data/maps/SlateportCity/scripts.pory"
	.string "Wait, let me guess…\p"
# 811 "data/maps/SlateportCity/scripts.pory"
	.string "It's {PLAYER}, am I right?\p"
# 812 "data/maps/SlateportCity/scripts.pory"
	.string "Now you guess mine.$"
# 813 "data/maps/SlateportCity/scripts.pory"

# 814 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Rival2:
# 815 "data/maps/SlateportCity/scripts.pory"
	.string "Wow, you guessed it right, too!\n"
# 816 "data/maps/SlateportCity/scripts.pory"
	.string "My name is {RIVAL}!\p"
# 817 "data/maps/SlateportCity/scripts.pory"
	.string "Now, let's not waste any more\n"
# 818 "data/maps/SlateportCity/scripts.pory"
	.string "time on niceties, {PLAYER}.\p"
# 819 "data/maps/SlateportCity/scripts.pory"
	.string "I will look for the thief\n"
# 820 "data/maps/SlateportCity/scripts.pory"
	.string "in the Market.\l"
# 821 "data/maps/SlateportCity/scripts.pory"
	.string "You go the other way!$"
# 822 "data/maps/SlateportCity/scripts.pory"

# 823 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_RivalExit:
# 824 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 825 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 826 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 827 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 828 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 829 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 830 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 831 "data/maps/SlateportCity/scripts.pory"
	walk_right	
# 832 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 833 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 834 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 835 "data/maps/SlateportCity/scripts.pory"
	step_end
# 836 "data/maps/SlateportCity/scripts.pory"

# 837 "data/maps/SlateportCity/scripts.pory"
// ===============================
# 838 "data/maps/SlateportCity/scripts.pory"
// POST-CUTSCENE RIVAL INTERACTION
# 839 "data/maps/SlateportCity/scripts.pory"
// ===============================
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RivalSearching::
# 842 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_Rival3, MSGBOX_NPC
# 843 "data/maps/SlateportCity/scripts.pory"
	end
# 844 "data/maps/SlateportCity/scripts.pory"

# 845 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_Rival3:
# 846 "data/maps/SlateportCity/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\n"
# 847 "data/maps/SlateportCity/scripts.pory"
	.string "Found anything yet?\p"
# 848 "data/maps/SlateportCity/scripts.pory"
	.string "I got this area covered.\n"
# 849 "data/maps/SlateportCity/scripts.pory"
	.string "Check out the rest of town.$"
# 850 "data/maps/SlateportCity/scripts.pory"

# 851 "data/maps/SlateportCity/scripts.pory"
@ old:
# 852 "data/maps/SlateportCity/scripts.pory"

# 853 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 854 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 855 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 856 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 857 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 858 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 859 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 860 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 861 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 862 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 863 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 864 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 865 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 866 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 867 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 868 "data/maps/SlateportCity/scripts.pory"
	return
# 869 "data/maps/SlateportCity/scripts.pory"

# 870 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 871 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 872 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 873 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 874 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 875 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 876 "data/maps/SlateportCity/scripts.pory"
	return
# 877 "data/maps/SlateportCity/scripts.pory"

# 878 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 879 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 880 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 881 "data/maps/SlateportCity/scripts.pory"
	return
# 882 "data/maps/SlateportCity/scripts.pory"

# 883 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 884 "data/maps/SlateportCity/scripts.pory"
	lockall
# 885 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 886 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 887 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 888 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 889 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 890 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 891 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 892 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 893 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 894 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 895 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 896 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 897 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 898 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 899 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 900 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 901 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 902 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 903 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 904 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 905 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 906 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 907 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 908 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 909 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 910 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 911 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 912 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 913 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 914 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 915 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 916 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 917 "data/maps/SlateportCity/scripts.pory"
	end
# 918 "data/maps/SlateportCity/scripts.pory"

# 919 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 920 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 921 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 922 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 923 "data/maps/SlateportCity/scripts.pory"
	step_end
# 924 "data/maps/SlateportCity/scripts.pory"

# 925 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 926 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 927 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 928 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 929 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 930 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 931 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 933 "data/maps/SlateportCity/scripts.pory"
	step_end
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 939 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 940 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 941 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 942 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 943 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 944 "data/maps/SlateportCity/scripts.pory"
	step_end
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 947 "data/maps/SlateportCity/scripts.pory"
	lock
# 948 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 949 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 950 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 951 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 952 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 953 "data/maps/SlateportCity/scripts.pory"
	release
# 954 "data/maps/SlateportCity/scripts.pory"
	end
# 955 "data/maps/SlateportCity/scripts.pory"

# 956 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 958 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 959 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 960 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 961 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 962 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 963 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 964 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 965 "data/maps/SlateportCity/scripts.pory"

# 966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 967 "data/maps/SlateportCity/scripts.pory"
	lock
# 968 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 969 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 970 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 971 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 972 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 973 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 974 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 975 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 976 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 977 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 978 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 979 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 980 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 981 "data/maps/SlateportCity/scripts.pory"
	release
# 982 "data/maps/SlateportCity/scripts.pory"
	end
# 983 "data/maps/SlateportCity/scripts.pory"

# 984 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 985 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 986 "data/maps/SlateportCity/scripts.pory"
	release
# 987 "data/maps/SlateportCity/scripts.pory"
	end
# 988 "data/maps/SlateportCity/scripts.pory"

# 989 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 990 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 991 "data/maps/SlateportCity/scripts.pory"
	release
# 992 "data/maps/SlateportCity/scripts.pory"
	end
# 993 "data/maps/SlateportCity/scripts.pory"

# 994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 995 "data/maps/SlateportCity/scripts.pory"
	lock
# 996 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 997 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 998 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 999 "data/maps/SlateportCity/scripts.pory"
	release
# 1000 "data/maps/SlateportCity/scripts.pory"
	end
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 1003 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 1004 "data/maps/SlateportCity/scripts.pory"
	release
# 1005 "data/maps/SlateportCity/scripts.pory"
	end
# 1006 "data/maps/SlateportCity/scripts.pory"

# 1007 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman_old::
# 1008 "data/maps/SlateportCity/scripts.pory"
	lock
# 1009 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1010 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 1011 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 1012 "data/maps/SlateportCity/scripts.pory"
	release
# 1013 "data/maps/SlateportCity/scripts.pory"
	end
# 1014 "data/maps/SlateportCity/scripts.pory"

# 1015 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 1016 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 1017 "data/maps/SlateportCity/scripts.pory"
	release
# 1018 "data/maps/SlateportCity/scripts.pory"
	end
# 1019 "data/maps/SlateportCity/scripts.pory"

# 1020 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl_old::
# 1021 "data/maps/SlateportCity/scripts.pory"
	lock
# 1022 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1023 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 1024 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 1025 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 1026 "data/maps/SlateportCity/scripts.pory"
	release
# 1027 "data/maps/SlateportCity/scripts.pory"
	end
# 1028 "data/maps/SlateportCity/scripts.pory"

# 1029 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 1030 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 1031 "data/maps/SlateportCity/scripts.pory"
	release
# 1032 "data/maps/SlateportCity/scripts.pory"
	end
# 1033 "data/maps/SlateportCity/scripts.pory"

# 1034 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 1035 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 1036 "data/maps/SlateportCity/scripts.pory"
	release
# 1037 "data/maps/SlateportCity/scripts.pory"
	end
# 1038 "data/maps/SlateportCity/scripts.pory"

# 1039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 1040 "data/maps/SlateportCity/scripts.pory"
	lock
# 1041 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1042 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 1043 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 1044 "data/maps/SlateportCity/scripts.pory"
	release
# 1045 "data/maps/SlateportCity/scripts.pory"
	end
# 1046 "data/maps/SlateportCity/scripts.pory"

# 1047 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 1048 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 1049 "data/maps/SlateportCity/scripts.pory"
	release
# 1050 "data/maps/SlateportCity/scripts.pory"
	end
# 1051 "data/maps/SlateportCity/scripts.pory"

# 1052 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan_old::
# 1053 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 1054 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 1055 "data/maps/SlateportCity/scripts.pory"
	end
# 1056 "data/maps/SlateportCity/scripts.pory"

# 1057 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 1058 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 1059 "data/maps/SlateportCity/scripts.pory"
	end
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1_old::
# 1062 "data/maps/SlateportCity/scripts.pory"
	lock
# 1063 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1064 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 1065 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 1066 "data/maps/SlateportCity/scripts.pory"
	release
# 1067 "data/maps/SlateportCity/scripts.pory"
	end
# 1068 "data/maps/SlateportCity/scripts.pory"

# 1069 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 1070 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 1071 "data/maps/SlateportCity/scripts.pory"
	release
# 1072 "data/maps/SlateportCity/scripts.pory"
	end
# 1073 "data/maps/SlateportCity/scripts.pory"

# 1074 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1_old::
# 1075 "data/maps/SlateportCity/scripts.pory"
	lock
# 1076 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1077 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 1078 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 1079 "data/maps/SlateportCity/scripts.pory"
	release
# 1080 "data/maps/SlateportCity/scripts.pory"
	end
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 1083 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 1084 "data/maps/SlateportCity/scripts.pory"
	release
# 1085 "data/maps/SlateportCity/scripts.pory"
	end
# 1086 "data/maps/SlateportCity/scripts.pory"

# 1087 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 1088 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 1089 "data/maps/SlateportCity/scripts.pory"
	end
# 1090 "data/maps/SlateportCity/scripts.pory"

# 1091 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 1092 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1093 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 1094 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 1095 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 1096 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1097 "data/maps/SlateportCity/scripts.pory"
	end
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 1100 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 1101 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1102 "data/maps/SlateportCity/scripts.pory"
	end
# 1103 "data/maps/SlateportCity/scripts.pory"

# 1104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 1105 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 1106 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1107 "data/maps/SlateportCity/scripts.pory"
	end
# 1108 "data/maps/SlateportCity/scripts.pory"

# 1109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 1110 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 1111 "data/maps/SlateportCity/scripts.pory"
	end
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_EventScript_OceanicMuseumSign::
# 1114 "data/maps/SlateportCity/scripts.pory"
	//msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 1115 "data/maps/SlateportCity/scripts.pory"
	//end
# 1116 "data/maps/SlateportCity/scripts.pory"

# 1117 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_EventScript_CitySign::
# 1118 "data/maps/SlateportCity/scripts.pory"
	//msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 1119 "data/maps/SlateportCity/scripts.pory"
	//end
# 1120 "data/maps/SlateportCity/scripts.pory"

# 1121 "data/maps/SlateportCity/scripts.pory"
//SlateportCity_EventScript_MarketSign::
# 1122 "data/maps/SlateportCity/scripts.pory"
	//msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 1123 "data/maps/SlateportCity/scripts.pory"
	//end
# 1124 "data/maps/SlateportCity/scripts.pory"

# 1125 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign_old:: @ added _old
# 1126 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1127 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 1128 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 1129 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1130 "data/maps/SlateportCity/scripts.pory"
	end
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 1133 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 1134 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1135 "data/maps/SlateportCity/scripts.pory"
	end
# 1136 "data/maps/SlateportCity/scripts.pory"

# 1137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 1138 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 1139 "data/maps/SlateportCity/scripts.pory"
	end
# 1140 "data/maps/SlateportCity/scripts.pory"

# 1141 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac_old::
# 1142 "data/maps/SlateportCity/scripts.pory"
	lock
# 1143 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1144 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_WILLYSTAD_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 1145 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 1146 "data/maps/SlateportCity/scripts.pory"
	release
# 1147 "data/maps/SlateportCity/scripts.pory"
	end
# 1148 "data/maps/SlateportCity/scripts.pory"

# 1149 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 1150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 1151 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 1152 "data/maps/SlateportCity/scripts.pory"
	release
# 1153 "data/maps/SlateportCity/scripts.pory"
	end
# 1154 "data/maps/SlateportCity/scripts.pory"

# 1155 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 1156 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 1157 "data/maps/SlateportCity/scripts.pory"
	end
# 1158 "data/maps/SlateportCity/scripts.pory"

# 1159 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1_old::
# 1160 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 1161 "data/maps/SlateportCity/scripts.pory"
	end
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2_old::
# 1164 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 1165 "data/maps/SlateportCity/scripts.pory"
	end
# 1166 "data/maps/SlateportCity/scripts.pory"

# 1167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 1168 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 1169 "data/maps/SlateportCity/scripts.pory"
	end
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2_old::
# 1172 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 1173 "data/maps/SlateportCity/scripts.pory"
	end
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 1176 "data/maps/SlateportCity/scripts.pory"
	lock
# 1177 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1178 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 1179 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1180 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 1181 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1182 "data/maps/SlateportCity/scripts.pory"
	release
# 1183 "data/maps/SlateportCity/scripts.pory"
	end
# 1184 "data/maps/SlateportCity/scripts.pory"

# 1185 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 1186 "data/maps/SlateportCity/scripts.pory"
	lock
# 1187 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1188 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 1189 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1190 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 1191 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1192 "data/maps/SlateportCity/scripts.pory"
	release
# 1193 "data/maps/SlateportCity/scripts.pory"
	end
# 1194 "data/maps/SlateportCity/scripts.pory"

# 1195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 1196 "data/maps/SlateportCity/scripts.pory"
	lock
# 1197 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1198 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 1199 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1200 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 1201 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1202 "data/maps/SlateportCity/scripts.pory"
	release
# 1203 "data/maps/SlateportCity/scripts.pory"
	end
# 1204 "data/maps/SlateportCity/scripts.pory"

# 1205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 1206 "data/maps/SlateportCity/scripts.pory"
	lock
# 1207 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1208 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 1209 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1210 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 1211 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1212 "data/maps/SlateportCity/scripts.pory"
	release
# 1213 "data/maps/SlateportCity/scripts.pory"
	end
# 1214 "data/maps/SlateportCity/scripts.pory"

# 1215 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 1216 "data/maps/SlateportCity/scripts.pory"
	lock
# 1217 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1218 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 1219 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1220 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 1221 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1222 "data/maps/SlateportCity/scripts.pory"
	release
# 1223 "data/maps/SlateportCity/scripts.pory"
	end
# 1224 "data/maps/SlateportCity/scripts.pory"

# 1225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 1226 "data/maps/SlateportCity/scripts.pory"
	lock
# 1227 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1228 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 1229 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1230 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 1231 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1232 "data/maps/SlateportCity/scripts.pory"
	release
# 1233 "data/maps/SlateportCity/scripts.pory"
	end
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 1236 "data/maps/SlateportCity/scripts.pory"
	lock
# 1237 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1238 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 1239 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1240 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 1241 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1242 "data/maps/SlateportCity/scripts.pory"
	release
# 1243 "data/maps/SlateportCity/scripts.pory"
	end
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 1246 "data/maps/SlateportCity/scripts.pory"
	lock
# 1247 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1248 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 1249 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1250 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 1251 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1252 "data/maps/SlateportCity/scripts.pory"
	release
# 1253 "data/maps/SlateportCity/scripts.pory"
	end
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 1256 "data/maps/SlateportCity/scripts.pory"
	lock
# 1257 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1258 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 1259 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 1260 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1261 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 1262 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1263 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 1264 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1265 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 1266 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1267 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 1268 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1269 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 1270 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 1272 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1273 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 1274 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1275 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 1276 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1277 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 1278 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1279 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 1280 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1281 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 1282 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1283 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 1284 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1285 "data/maps/SlateportCity/scripts.pory"
	release
# 1286 "data/maps/SlateportCity/scripts.pory"
	end
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 1289 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1290 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1291 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 1294 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 1295 "data/maps/SlateportCity/scripts.pory"
	end
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 1298 "data/maps/SlateportCity/scripts.pory"
	lock
# 1299 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1300 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 1301 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1302 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 1303 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1304 "data/maps/SlateportCity/scripts.pory"
	release
# 1305 "data/maps/SlateportCity/scripts.pory"
	end
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 1308 "data/maps/SlateportCity/scripts.pory"
	lock
# 1309 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1310 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1311 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1312 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 1313 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1314 "data/maps/SlateportCity/scripts.pory"
	release
# 1315 "data/maps/SlateportCity/scripts.pory"
	end
# 1316 "data/maps/SlateportCity/scripts.pory"

# 1317 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 1320 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 1321 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 1322 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 1325 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 1326 "data/maps/SlateportCity/scripts.pory"
	release
# 1327 "data/maps/SlateportCity/scripts.pory"
	end
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 1330 "data/maps/SlateportCity/scripts.pory"
	lock
# 1331 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1332 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 1333 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1334 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1335 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 1336 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1337 "data/maps/SlateportCity/scripts.pory"
	release
# 1338 "data/maps/SlateportCity/scripts.pory"
	end
# 1339 "data/maps/SlateportCity/scripts.pory"

# 1340 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 1341 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 1342 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 1343 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 1344 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 1345 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 1346 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 1347 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 1348 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 1349 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 1350 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 1351 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 1352 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 1353 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 1354 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 1355 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 1356 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 1357 "data/maps/SlateportCity/scripts.pory"

# 1358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 1359 "data/maps/SlateportCity/scripts.pory"
	lock
# 1360 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1361 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 1362 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1363 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 1364 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 1365 "data/maps/SlateportCity/scripts.pory"
	release
# 1366 "data/maps/SlateportCity/scripts.pory"
	end
# 1367 "data/maps/SlateportCity/scripts.pory"

# 1368 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 1369 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 1370 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 1371 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 1372 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 1373 "data/maps/SlateportCity/scripts.pory"

# 1374 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 1375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 1376 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 1378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 1379 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1380 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 1381 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1382 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 1383 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 1384 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1385 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 1386 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 1387 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 1388 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 1389 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 1390 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1391 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 1392 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 1393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 1394 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 1395 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1396 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 1397 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1398 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 1399 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 1400 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 1401 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 1402 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 1403 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 1404 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1405 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 1406 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 1408 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 1409 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 1410 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1411 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 1412 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1413 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 1414 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1415 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 1416 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 1417 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1418 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 1419 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 1420 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1421 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 1422 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 1423 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 1424 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 1425 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 1426 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 2
# 1427 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 1428 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1429 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1430 "data/maps/SlateportCity/scripts.pory"
	end
# 1431 "data/maps/SlateportCity/scripts.pory"

# 1432 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 1433 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1434 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1435 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 1436 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1437 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1438 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1439 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 1440 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1441 "data/maps/SlateportCity/scripts.pory"

# 1442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 1443 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 1444 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 1445 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1446 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 1447 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1448 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1449 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 1450 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1451 "data/maps/SlateportCity/scripts.pory"

# 1452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 1453 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1454 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1455 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1456 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1457 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1458 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1459 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1460 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1461 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1462 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1463 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1464 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1465 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1466 "data/maps/SlateportCity/scripts.pory"

# 1467 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 1468 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1469 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1470 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1471 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1472 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1473 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1474 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1475 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1476 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1477 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1478 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1479 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1480 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1481 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1482 "data/maps/SlateportCity/scripts.pory"

# 1483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 1484 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1485 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 1486 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1487 "data/maps/SlateportCity/scripts.pory"

# 1488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 1489 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1490 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1491 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1492 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 1493 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1494 "data/maps/SlateportCity/scripts.pory"

# 1495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 1496 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1497 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1498 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1499 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1500 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1501 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1502 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 1503 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1504 "data/maps/SlateportCity/scripts.pory"

# 1505 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 1506 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1507 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1508 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1509 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1510 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 1511 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1512 "data/maps/SlateportCity/scripts.pory"

# 1513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 1514 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1515 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1516 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1517 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1518 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1519 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1520 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1521 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 1522 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1523 "data/maps/SlateportCity/scripts.pory"

# 1524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty_old::
# 1525 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 1526 "data/maps/SlateportCity/scripts.pory"
	end
# 1527 "data/maps/SlateportCity/scripts.pory"

# 1528 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby_old::
# 1529 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 1530 "data/maps/SlateportCity/scripts.pory"
	end
# 1531 "data/maps/SlateportCity/scripts.pory"

# 1532 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 1533 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 1534 "data/maps/SlateportCity/scripts.pory"
	end
# 1535 "data/maps/SlateportCity/scripts.pory"

# 1536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 1537 "data/maps/SlateportCity/scripts.pory"
	lock
# 1538 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1539 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 1540 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 1541 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 1542 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 1543 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1544 "data/maps/SlateportCity/scripts.pory"
	release
# 1545 "data/maps/SlateportCity/scripts.pory"
	end
# 1546 "data/maps/SlateportCity/scripts.pory"

# 1547 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 1548 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 1549 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1550 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 1551 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 1552 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 1553 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1554 "data/maps/SlateportCity/scripts.pory"
	end
# 1555 "data/maps/SlateportCity/scripts.pory"

# 1556 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 1557 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1558 "data/maps/SlateportCity/scripts.pory"
	release
# 1559 "data/maps/SlateportCity/scripts.pory"
	end
# 1560 "data/maps/SlateportCity/scripts.pory"

# 1561 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 1562 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 1563 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1564 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 1565 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 1566 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1567 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 1568 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 1569 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 1570 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 1571 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 1572 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 1573 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 1574 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 1575 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 1576 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 1577 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 1578 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 1579 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 1580 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 1581 "data/maps/SlateportCity/scripts.pory"
	end
# 1582 "data/maps/SlateportCity/scripts.pory"

# 1583 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 1584 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1585 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1586 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1587 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1588 "data/maps/SlateportCity/scripts.pory"
	end
# 1589 "data/maps/SlateportCity/scripts.pory"

# 1590 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1591 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1592 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1593 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1594 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1595 "data/maps/SlateportCity/scripts.pory"
	end
# 1596 "data/maps/SlateportCity/scripts.pory"

# 1597 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1598 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1599 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1600 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1601 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1602 "data/maps/SlateportCity/scripts.pory"
	end
# 1603 "data/maps/SlateportCity/scripts.pory"

# 1604 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1605 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1606 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1607 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1608 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1609 "data/maps/SlateportCity/scripts.pory"
	end
# 1610 "data/maps/SlateportCity/scripts.pory"

# 1611 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1612 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1613 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1614 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1615 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1616 "data/maps/SlateportCity/scripts.pory"
	end
# 1617 "data/maps/SlateportCity/scripts.pory"

# 1618 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1619 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1620 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1621 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1622 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1623 "data/maps/SlateportCity/scripts.pory"
	end
# 1624 "data/maps/SlateportCity/scripts.pory"

# 1625 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1626 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1627 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1628 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1629 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1630 "data/maps/SlateportCity/scripts.pory"
	end
# 1631 "data/maps/SlateportCity/scripts.pory"

# 1632 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1633 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1634 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1635 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1636 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1637 "data/maps/SlateportCity/scripts.pory"
	end
# 1638 "data/maps/SlateportCity/scripts.pory"

# 1639 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1640 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1641 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1642 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1643 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1644 "data/maps/SlateportCity/scripts.pory"
	end
# 1645 "data/maps/SlateportCity/scripts.pory"

# 1646 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1647 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1648 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1649 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1650 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1651 "data/maps/SlateportCity/scripts.pory"
	end
# 1652 "data/maps/SlateportCity/scripts.pory"

# 1653 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1654 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1655 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1656 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1657 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1658 "data/maps/SlateportCity/scripts.pory"
	end
# 1659 "data/maps/SlateportCity/scripts.pory"

# 1660 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1661 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1662 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1663 "data/maps/SlateportCity/scripts.pory"
	release
# 1664 "data/maps/SlateportCity/scripts.pory"
	end
# 1665 "data/maps/SlateportCity/scripts.pory"

# 1666 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1667 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1668 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1669 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1670 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1671 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1672 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1673 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1674 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1675 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1676 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1677 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1678 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1679 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1680 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1681 "data/maps/SlateportCity/scripts.pory"
	release
# 1682 "data/maps/SlateportCity/scripts.pory"
	end
# 1683 "data/maps/SlateportCity/scripts.pory"

# 1684 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1685 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1686 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1687 "data/maps/SlateportCity/scripts.pory"
	release
# 1688 "data/maps/SlateportCity/scripts.pory"
	end
# 1689 "data/maps/SlateportCity/scripts.pory"

# 1690 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1691 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1692 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1693 "data/maps/SlateportCity/scripts.pory"
	end
# 1694 "data/maps/SlateportCity/scripts.pory"

# 1695 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1696 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1697 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1698 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1699 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1700 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1701 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 1702 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1703 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1704 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1705 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1706 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1707 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1708 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1709 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1710 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1711 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1712 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 1713 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1714 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1715 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1716 "data/maps/SlateportCity/scripts.pory"
	end
# 1717 "data/maps/SlateportCity/scripts.pory"

# 1718 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown_old:
# 1719 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1720 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1721 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1722 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1723 "data/maps/SlateportCity/scripts.pory"

# 1724 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1725 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1726 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1727 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1728 "data/maps/SlateportCity/scripts.pory"

# 1729 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1730 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1731 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1732 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1733 "data/maps/SlateportCity/scripts.pory"

# 1734 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1735 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1736 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1737 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1738 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1739 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1740 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1741 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1742 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1743 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1744 "data/maps/SlateportCity/scripts.pory"

# 1745 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1746 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1747 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1748 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1749 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1750 "data/maps/SlateportCity/scripts.pory"
	end
# 1751 "data/maps/SlateportCity/scripts.pory"

# 1752 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1753 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1754 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1755 "data/maps/SlateportCity/scripts.pory"

# 1756 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1757 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1758 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1759 "data/maps/SlateportCity/scripts.pory"

# 1760 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1761 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1762 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1763 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1764 "data/maps/SlateportCity/scripts.pory"

# 1765 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1766 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1767 "data/maps/SlateportCity/scripts.pory"

# 1768 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1769 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1770 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1771 "data/maps/SlateportCity/scripts.pory"

# 1772 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1773 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1774 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1775 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1776 "data/maps/SlateportCity/scripts.pory"

# 1777 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1778 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1779 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1780 "data/maps/SlateportCity/scripts.pory"

# 1781 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1782 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1783 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1784 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1785 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1786 "data/maps/SlateportCity/scripts.pory"

# 1787 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1788 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1789 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1790 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1791 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1792 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1793 "data/maps/SlateportCity/scripts.pory"

# 1794 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1795 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1796 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1797 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1798 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1799 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1800 "data/maps/SlateportCity/scripts.pory"

# 1801 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1802 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1803 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1804 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1805 "data/maps/SlateportCity/scripts.pory"

# 1806 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1807 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1808 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1809 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1810 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1811 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1812 "data/maps/SlateportCity/scripts.pory"

# 1813 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1814 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1815 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1816 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1817 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1818 "data/maps/SlateportCity/scripts.pory"

# 1819 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1820 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1821 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1822 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1823 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1824 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1825 "data/maps/SlateportCity/scripts.pory"

# 1826 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1827 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1828 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1829 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1830 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1831 "data/maps/SlateportCity/scripts.pory"

# 1832 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1833 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1834 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1835 "data/maps/SlateportCity/scripts.pory"

# 1836 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1837 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1838 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1839 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1840 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1841 "data/maps/SlateportCity/scripts.pory"

# 1842 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1843 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1844 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1845 "data/maps/SlateportCity/scripts.pory"

# 1846 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1847 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1848 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1849 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1850 "data/maps/SlateportCity/scripts.pory"

# 1851 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1852 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1853 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1854 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1855 "data/maps/SlateportCity/scripts.pory"

# 1856 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1857 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1858 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1859 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1860 "data/maps/SlateportCity/scripts.pory"

# 1861 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1862 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1863 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1864 "data/maps/SlateportCity/scripts.pory"

# 1865 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1866 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1867 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1868 "data/maps/SlateportCity/scripts.pory"

# 1869 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1870 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1871 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1872 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1873 "data/maps/SlateportCity/scripts.pory"

# 1874 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1875 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1876 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1877 "data/maps/SlateportCity/scripts.pory"

# 1878 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1879 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1880 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1881 "data/maps/SlateportCity/scripts.pory"

# 1882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1883 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1884 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1885 "data/maps/SlateportCity/scripts.pory"

# 1886 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1887 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1888 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1889 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1890 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1891 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1892 "data/maps/SlateportCity/scripts.pory"

# 1893 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1894 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1895 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1896 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1897 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1898 "data/maps/SlateportCity/scripts.pory"

# 1899 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1900 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1901 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1902 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1903 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1904 "data/maps/SlateportCity/scripts.pory"

# 1905 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1906 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1907 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1908 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1909 "data/maps/SlateportCity/scripts.pory"

# 1910 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1911 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1912 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1913 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1914 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1915 "data/maps/SlateportCity/scripts.pory"

# 1916 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1917 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1918 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1919 "data/maps/SlateportCity/scripts.pory"

# 1920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1921 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1922 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1923 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1924 "data/maps/SlateportCity/scripts.pory"

# 1925 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1926 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1927 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1928 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1929 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1930 "data/maps/SlateportCity/scripts.pory"

# 1931 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1932 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1933 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1934 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1935 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1936 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1937 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1938 "data/maps/SlateportCity/scripts.pory"

# 1939 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1940 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1941 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1942 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1943 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1944 "data/maps/SlateportCity/scripts.pory"

# 1945 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1946 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1947 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1948 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1949 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1950 "data/maps/SlateportCity/scripts.pory"

# 1951 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1952 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1953 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1954 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1955 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1956 "data/maps/SlateportCity/scripts.pory"

# 1957 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1958 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1959 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1960 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1961 "data/maps/SlateportCity/scripts.pory"

# 1962 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1963 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1964 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1965 "data/maps/SlateportCity/scripts.pory"

# 1966 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1967 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1968 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1969 "data/maps/SlateportCity/scripts.pory"

# 1970 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1971 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1972 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1973 "data/maps/SlateportCity/scripts.pory"

# 1974 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1975 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1976 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1977 "data/maps/SlateportCity/scripts.pory"

# 1978 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1979 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1980 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1981 "data/maps/SlateportCity/scripts.pory"

# 1982 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1983 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1984 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1985 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1986 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1987 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1988 "data/maps/SlateportCity/scripts.pory"

# 1989 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1990 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1991 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1992 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1993 "data/maps/SlateportCity/scripts.pory"

# 1994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1995 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1996 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1997 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1998 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1999 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 2000 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 2001 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 2002 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 2003 "data/maps/SlateportCity/scripts.pory"

# 2004 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 2005 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 2006 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 2007 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 2008 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 2009 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 2010 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 2011 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 2012 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 2013 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 2014 "data/maps/SlateportCity/scripts.pory"

# 2015 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 2016 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 2017 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 2018 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 2019 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 2020 "data/maps/SlateportCity/scripts.pory"

# 2021 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 2022 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 2023 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 2024 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 2025 "data/maps/SlateportCity/scripts.pory"

# 2026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 2027 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 2028 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 2029 "data/maps/SlateportCity/scripts.pory"

# 2030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign_old:
# 2031 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 2032 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 2033 "data/maps/SlateportCity/scripts.pory"

# 2034 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 2035 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2036 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 2037 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 2038 "data/maps/SlateportCity/scripts.pory"

# 2039 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 2040 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2041 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 2042 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 2043 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 2044 "data/maps/SlateportCity/scripts.pory"

# 2045 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 2046 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 2047 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 2048 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 2049 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 2050 "data/maps/SlateportCity/scripts.pory"

# 2051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 2052 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 2053 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 2054 "data/maps/SlateportCity/scripts.pory"

# 2055 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign_old:
# 2056 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 2057 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 2058 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 2059 "data/maps/SlateportCity/scripts.pory"

# 2060 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign_old:
# 2061 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 2062 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 2063 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 2064 "data/maps/SlateportCity/scripts.pory"

# 2065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign_old:
# 2066 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 2067 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 2068 "data/maps/SlateportCity/scripts.pory"

# 2069 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 2070 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 2071 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 2072 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 2073 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 2074 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 2075 "data/maps/SlateportCity/scripts.pory"

# 2076 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 2077 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 2078 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 2079 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 2080 "data/maps/SlateportCity/scripts.pory"

# 2081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 2082 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 2083 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 2084 "data/maps/SlateportCity/scripts.pory"

# 2085 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 2086 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 2087 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 2088 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2089 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 2090 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 2091 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2092 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 2093 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 2094 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 2095 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 2096 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 2097 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 2098 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 2099 "data/maps/SlateportCity/scripts.pory"

# 2100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 2101 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 2102 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 2103 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 2104 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 2105 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 2106 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 2107 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 2108 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 2109 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 2110 "data/maps/SlateportCity/scripts.pory"

# 2111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 2112 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 2113 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 2114 "data/maps/SlateportCity/scripts.pory"

# 2115 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 2116 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 2117 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 2118 "data/maps/SlateportCity/scripts.pory"

# 2119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 2120 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 2121 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 2122 "data/maps/SlateportCity/scripts.pory"

# 2123 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 2124 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 2125 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 2126 "data/maps/SlateportCity/scripts.pory"

# 2127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 2128 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 2129 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 2130 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 2131 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 2132 "data/maps/SlateportCity/scripts.pory"

# 2133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 2134 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 2135 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 2136 "data/maps/SlateportCity/scripts.pory"

# 2137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 2138 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 2139 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 2140 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 2141 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 2142 "data/maps/SlateportCity/scripts.pory"

# 2143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 2144 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 2145 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 2146 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 2147 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 2148 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 2149 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 2150 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 2151 "data/maps/SlateportCity/scripts.pory"

# 2152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 2153 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 2154 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 2155 "data/maps/SlateportCity/scripts.pory"

# 2156 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 2157 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 2158 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 2159 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 2160 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 2161 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 2162 "data/maps/SlateportCity/scripts.pory"

# 2163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 2164 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 2165 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 2166 "data/maps/SlateportCity/scripts.pory"

# 2167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 2168 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 2169 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 2170 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 2171 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 2172 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 2173 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 2174 "data/maps/SlateportCity/scripts.pory"

# 2175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 2176 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 2177 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 2178 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 2179 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 2180 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 2181 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 2182 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 2183 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 2184 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"
