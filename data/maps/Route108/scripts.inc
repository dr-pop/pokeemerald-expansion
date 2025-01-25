# 1 "data/maps/Route108/scripts.pory"

# 2 "data/maps/Route108/scripts.pory"
Route108_MapScripts::
# 3 "data/maps/Route108/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Test_OnFrame
# 4 "data/maps/Route108/scripts.pory"
	.byte 0
# 5 "data/maps/Route108/scripts.pory"

# 6 "data/maps/Route108/scripts.pory"
Test_OnFrame: @ 81DCD12
# 7 "data/maps/Route108/scripts.pory"
	map_script_2 VAR_EVER_GRANDE_CITY_STATE, 1, Test_EventScript_IntroTest_Simple
# 8 "data/maps/Route108/scripts.pory"
	map_script_2 VAR_EVER_GRANDE_CITY_STATE, 0, Test_EventScript_IntroTest_Simple
# 9 "data/maps/Route108/scripts.pory"
	.2byte 0
# 10 "data/maps/Route108/scripts.pory"

# 11 "data/maps/Route108/scripts.pory"
@ new:
# 12 "data/maps/Route108/scripts.pory"

# 13 "data/maps/Route108/scripts.pory"
// === Simple version ===
# 14 "data/maps/Route108/scripts.pory"

# 15 "data/maps/Route108/scripts.pory"
Test_EventScript_IntroTest_Simple::
# 16 "data/maps/Route108/scripts.pory"
	lock
# 17 "data/maps/Route108/scripts.pory"
	delay 60
# 18 "data/maps/Route108/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Simple_EnterPlayer // move camera up
# 19 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 20 "data/maps/Route108/scripts.pory"
	applymovement 1, Simple_EnterSub // move camera up
# 21 "data/maps/Route108/scripts.pory"
	//playse SE_MIZU           // Puddle
# 22 "data/maps/Route108/scripts.pory"
	//waitse
# 23 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route108/scripts.pory"
	applymovement 5, Simple_WingullGlide1
# 25 "data/maps/Route108/scripts.pory"
	applymovement 4, Simple_WingullGlide2
# 26 "data/maps/Route108/scripts.pory"
	applymovement 2, Simple_WingullGlide3
# 27 "data/maps/Route108/scripts.pory"
	applymovement 1, Simple_PlayerSub1
# 28 "data/maps/Route108/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Simple_PlayerSub1
# 29 "data/maps/Route108/scripts.pory"
	delay 60
# 30 "data/maps/Route108/scripts.pory"
	delay 60
# 31 "data/maps/Route108/scripts.pory"
	delay 60
# 32 "data/maps/Route108/scripts.pory"
	delay 60
# 33 "data/maps/Route108/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 34 "data/maps/Route108/scripts.pory"
	delay 60
# 35 "data/maps/Route108/scripts.pory"
	delay 60
# 36 "data/maps/Route108/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 37 "data/maps/Route108/scripts.pory"
	delay 60
# 38 "data/maps/Route108/scripts.pory"
	delay 60
# 39 "data/maps/Route108/scripts.pory"
	delay 30
# 40 "data/maps/Route108/scripts.pory"
	playmoncry SPECIES_WINGULL, 0
# 41 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 42 "data/maps/Route108/scripts.pory"
	setvar VAR_EVER_GRANDE_CITY_STATE, 2
# 43 "data/maps/Route108/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 44 "data/maps/Route108/scripts.pory"
	warp MAP_ABANDONED_SHIP_CAPTAINS_OFFICE, 255, 5, 4
# 45 "data/maps/Route108/scripts.pory"
	waitstate
# 46 "data/maps/Route108/scripts.pory"
	release
# 47 "data/maps/Route108/scripts.pory"
	end
# 48 "data/maps/Route108/scripts.pory"

# 49 "data/maps/Route108/scripts.pory"
Simple_EnterPlayer:
# 50 "data/maps/Route108/scripts.pory"
	set_invisible
# 51 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 52 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 53 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 54 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 55 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 56 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 57 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 58 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 59 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 60 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 61 "data/maps/Route108/scripts.pory"
	walk_slow_up
# 62 "data/maps/Route108/scripts.pory"
	step_end
# 63 "data/maps/Route108/scripts.pory"

# 64 "data/maps/Route108/scripts.pory"
Simple_EnterSub:
# 65 "data/maps/Route108/scripts.pory"
	walk_fast_left
# 66 "data/maps/Route108/scripts.pory"
	walk_fast_left
# 67 "data/maps/Route108/scripts.pory"
	walk_fast_left
# 68 "data/maps/Route108/scripts.pory"
	walk_fast_left
# 69 "data/maps/Route108/scripts.pory"
	walk_fast_left
# 70 "data/maps/Route108/scripts.pory"
	walk_fast_up
# 71 "data/maps/Route108/scripts.pory"
	walk_fast_up
# 72 "data/maps/Route108/scripts.pory"
	walk_fast_up
# 73 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 74 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 75 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 76 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 77 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 78 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 79 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 80 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 81 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 82 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 83 "data/maps/Route108/scripts.pory"
	step_end
# 84 "data/maps/Route108/scripts.pory"
	
# 85 "data/maps/Route108/scripts.pory"
Simple_PlayerSub1: // 38 steps
# 86 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 87 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 88 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 89 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 90 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 91 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 92 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 93 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 94 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 95 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 96 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 97 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 98 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 99 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 100 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 101 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 102 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 103 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 104 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 105 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 106 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 107 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 108 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 109 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 110 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 111 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 112 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 113 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 114 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 115 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 116 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 117 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 118 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 119 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 120 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 121 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 122 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 123 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 124 "data/maps/Route108/scripts.pory"
	walk_in_place_slow_right
# 125 "data/maps/Route108/scripts.pory"
	walk_in_place_slow_right
# 126 "data/maps/Route108/scripts.pory"
	walk_in_place_slow_right
# 127 "data/maps/Route108/scripts.pory"
	walk_in_place_slow_right
# 128 "data/maps/Route108/scripts.pory"
	walk_in_place_slow_right
# 129 "data/maps/Route108/scripts.pory"
	step_end
# 130 "data/maps/Route108/scripts.pory"

# 131 "data/maps/Route108/scripts.pory"
Simple_WingullGlide1:
# 132 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 133 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 134 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 135 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 136 "data/maps/Route108/scripts.pory"
	walk_right
# 137 "data/maps/Route108/scripts.pory"
	walk_right
# 138 "data/maps/Route108/scripts.pory"
	walk_right
# 139 "data/maps/Route108/scripts.pory"
	walk_right
# 140 "data/maps/Route108/scripts.pory"
	walk_right
# 141 "data/maps/Route108/scripts.pory"
	walk_right
# 142 "data/maps/Route108/scripts.pory"
	walk_right
# 143 "data/maps/Route108/scripts.pory"
	walk_right
# 144 "data/maps/Route108/scripts.pory"
	walk_right
# 145 "data/maps/Route108/scripts.pory"
	walk_right
# 146 "data/maps/Route108/scripts.pory"
	walk_right
# 147 "data/maps/Route108/scripts.pory"
	walk_right
# 148 "data/maps/Route108/scripts.pory"
	walk_right
# 149 "data/maps/Route108/scripts.pory"
	walk_right
# 150 "data/maps/Route108/scripts.pory"
	walk_right
# 151 "data/maps/Route108/scripts.pory"
	walk_right
# 152 "data/maps/Route108/scripts.pory"
	walk_right
# 153 "data/maps/Route108/scripts.pory"
	walk_right
# 154 "data/maps/Route108/scripts.pory"
	walk_right
# 155 "data/maps/Route108/scripts.pory"
	walk_right
# 156 "data/maps/Route108/scripts.pory"
	walk_right
# 157 "data/maps/Route108/scripts.pory"
	walk_right
# 158 "data/maps/Route108/scripts.pory"
	walk_right
# 159 "data/maps/Route108/scripts.pory"
	walk_right
# 160 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 161 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 162 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 163 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 164 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 165 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 166 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 167 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 168 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 169 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 170 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 171 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 172 "data/maps/Route108/scripts.pory"
	set_invisible
# 173 "data/maps/Route108/scripts.pory"
	step_end
# 174 "data/maps/Route108/scripts.pory"

# 175 "data/maps/Route108/scripts.pory"
Simple_WingullGlide2:
# 176 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 177 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 178 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 179 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 180 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 181 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 182 "data/maps/Route108/scripts.pory"
	walk_right
# 183 "data/maps/Route108/scripts.pory"
	walk_right
# 184 "data/maps/Route108/scripts.pory"
	walk_right
# 185 "data/maps/Route108/scripts.pory"
	walk_right
# 186 "data/maps/Route108/scripts.pory"
	walk_right
# 187 "data/maps/Route108/scripts.pory"
	walk_right
# 188 "data/maps/Route108/scripts.pory"
	walk_right
# 189 "data/maps/Route108/scripts.pory"
	walk_right
# 190 "data/maps/Route108/scripts.pory"
	walk_right
# 191 "data/maps/Route108/scripts.pory"
	walk_right
# 192 "data/maps/Route108/scripts.pory"
	walk_right
# 193 "data/maps/Route108/scripts.pory"
	walk_right
# 194 "data/maps/Route108/scripts.pory"
	walk_right
# 195 "data/maps/Route108/scripts.pory"
	walk_right
# 196 "data/maps/Route108/scripts.pory"
	walk_right
# 197 "data/maps/Route108/scripts.pory"
	walk_right
# 198 "data/maps/Route108/scripts.pory"
	walk_right
# 199 "data/maps/Route108/scripts.pory"
	walk_right
# 200 "data/maps/Route108/scripts.pory"
	walk_right
# 201 "data/maps/Route108/scripts.pory"
	walk_right
# 202 "data/maps/Route108/scripts.pory"
	walk_right
# 203 "data/maps/Route108/scripts.pory"
	walk_right
# 204 "data/maps/Route108/scripts.pory"
	walk_right
# 205 "data/maps/Route108/scripts.pory"
	walk_right
# 206 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 207 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 208 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 209 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 210 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 211 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 212 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 213 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 214 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 215 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 216 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 217 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 218 "data/maps/Route108/scripts.pory"
	set_invisible
# 219 "data/maps/Route108/scripts.pory"
	step_end
# 220 "data/maps/Route108/scripts.pory"

# 221 "data/maps/Route108/scripts.pory"
Simple_WingullGlide3:
# 222 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 223 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 224 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 225 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 226 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 227 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 228 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 229 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 230 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 231 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 232 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 233 "data/maps/Route108/scripts.pory"
	walk_slow_right
# 234 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 235 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 236 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 237 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 238 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 239 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 240 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 241 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 242 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 243 "data/maps/Route108/scripts.pory"
	walk_right
# 244 "data/maps/Route108/scripts.pory"
	walk_right
# 245 "data/maps/Route108/scripts.pory"
	walk_right
# 246 "data/maps/Route108/scripts.pory"
	walk_right
# 247 "data/maps/Route108/scripts.pory"
	walk_right
# 248 "data/maps/Route108/scripts.pory"
	walk_right
# 249 "data/maps/Route108/scripts.pory"
	walk_right
# 250 "data/maps/Route108/scripts.pory"
	walk_right
# 251 "data/maps/Route108/scripts.pory"
	walk_right
# 252 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 253 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 254 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 255 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 256 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 257 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 258 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 259 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 260 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 261 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 262 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 263 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 264 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 265 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 266 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 267 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 268 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 269 "data/maps/Route108/scripts.pory"
	walk_fast_right
# 270 "data/maps/Route108/scripts.pory"
	set_invisible
# 271 "data/maps/Route108/scripts.pory"
	step_end
# 272 "data/maps/Route108/scripts.pory"

# 273 "data/maps/Route108/scripts.pory"

# 274 "data/maps/Route108/scripts.pory"
@ old:
# 275 "data/maps/Route108/scripts.pory"

# 276 "data/maps/Route108/scripts.pory"
Route108_EventScript_Jerome::
# 277 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_JEROME, Route108_Text_JeromeIntro, Route108_Text_JeromeDefeated
# 278 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_JeromePostBattle, MSGBOX_AUTOCLOSE
# 279 "data/maps/Route108/scripts.pory"
	end
# 280 "data/maps/Route108/scripts.pory"

# 281 "data/maps/Route108/scripts.pory"
Route108_EventScript_Matthew::
# 282 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 283 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
# 284 "data/maps/Route108/scripts.pory"
	end
# 285 "data/maps/Route108/scripts.pory"

# 286 "data/maps/Route108/scripts.pory"
Route108_EventScript_Tara::
# 287 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_TARA, Route108_Text_TaraIntro, Route108_Text_TaraDefeated
# 288 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_TaraPostBattle, MSGBOX_AUTOCLOSE
# 289 "data/maps/Route108/scripts.pory"
	end
# 290 "data/maps/Route108/scripts.pory"

# 291 "data/maps/Route108/scripts.pory"
Route108_EventScript_Missy::
# 292 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_MISSY, Route108_Text_MissyIntro, Route108_Text_MissyDefeated
# 293 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_MissyPostBattle, MSGBOX_AUTOCLOSE
# 294 "data/maps/Route108/scripts.pory"
	end
# 295 "data/maps/Route108/scripts.pory"

# 296 "data/maps/Route108/scripts.pory"
Route108_EventScript_Carolina::
# 297 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CAROLINA, Route108_Text_CarolinaIntro, Route108_Text_CarolinaDefeated
# 298 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CarolinaPostBattle, MSGBOX_AUTOCLOSE
# 299 "data/maps/Route108/scripts.pory"
	end
# 300 "data/maps/Route108/scripts.pory"

# 301 "data/maps/Route108/scripts.pory"
Route108_EventScript_Cory::
# 302 "data/maps/Route108/scripts.pory"
	trainerbattle_single TRAINER_CORY_1, Route108_Text_CoryIntro, Route108_Text_CoryDefeated, Route108_EventScript_CoryRegisterMatchCallAfterBattle
# 303 "data/maps/Route108/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 304 "data/maps/Route108/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route108_EventScript_CoryRematch
# 305 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryPostBattle, MSGBOX_DEFAULT
# 306 "data/maps/Route108/scripts.pory"
	release
# 307 "data/maps/Route108/scripts.pory"
	end
# 308 "data/maps/Route108/scripts.pory"

# 309 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRegisterMatchCallAfterBattle::
# 310 "data/maps/Route108/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 311 "data/maps/Route108/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRegister, MSGBOX_DEFAULT
# 313 "data/maps/Route108/scripts.pory"
	register_matchcall TRAINER_CORY_1
# 314 "data/maps/Route108/scripts.pory"
	release
# 315 "data/maps/Route108/scripts.pory"
	end
# 316 "data/maps/Route108/scripts.pory"

# 317 "data/maps/Route108/scripts.pory"
Route108_EventScript_CoryRematch::
# 318 "data/maps/Route108/scripts.pory"
	trainerbattle_rematch TRAINER_CORY_1, Route108_Text_CoryRematchIntro, Route108_Text_CoryRematchDefeated
# 319 "data/maps/Route108/scripts.pory"
	msgbox Route108_Text_CoryRematchPostBattle, MSGBOX_AUTOCLOSE
# 320 "data/maps/Route108/scripts.pory"
	end
