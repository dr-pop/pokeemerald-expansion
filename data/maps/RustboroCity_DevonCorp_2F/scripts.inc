# 1 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
.set LOCALID_FOSSIL_SCIENTIST, 5
# 3 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_ProfessorBirchsLab_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RustboroCity_DevonCorp_2F_OnLoad
# 8 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_2F_OnFrame
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.byte 0
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnTransition:
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//compare VAR_FOSSIL_RESURRECTION_STATE, 1
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_OnLoad:
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_unset FLAG_MAYOR_OFFICE_LOCKED, RustboroCity_DevonCorp_2F_EventScript_UnlockDoor
# 18 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_set FLAG_MAYOR_OFFICE_LOCKED, RustboroCity_DevonCorp_2F_EventScript_LockDoor
# 19 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ new:
# 22 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_UnlockDoor::
# 24 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//setmetatile 8, 21, METATILE_Building_AnimatedDoor, 1 @ commented this out for now until anims are ported.
# 25 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LockDoor::
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//setmetatile 8, 21, METATILE_Building_LockedDoor, 1 @ commented this out for now until anims are ported.
# 29 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 30 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// ============================================================
# 32 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// NPC INTERACTIONS. MAYORS OFFICE.
# 33 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// ============================================================
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_OfficeDoor::
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lockall
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MAYOR_OFFICE_LOCKED, RustboroCity_DevonCorp_2F_EventScript_DoorIsLocked
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DoorIsUnlocked, MSGBOX_DEFAULT
# 39 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
# 40 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DoorIsLocked::
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	releaseall
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end	
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 47 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DoorIsUnlocked:
# 48 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The door is unlocked.$"
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 50 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DoorIsLocked:
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The door is locked.$"
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Secretary::
# 54 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 55 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MAYOR_OFFICE_LOCKED, RustboroCity_DevonCorp_2F_EventScript_MayorAway
# 57 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_SecretaryGoInside, MSGBOX_DEFAULT
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 59 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 60 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MayorAway::
# 63 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_SecretaryMayorAway, MSGBOX_DEFAULT
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_SecretaryGoInside:
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Are you here to meet the Mayor?\p"
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "She is expecting you.\n"
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please, enter her office.$"
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 73 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_SecretaryMayorAway:
# 74 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Are you here to meet the Mayor?\p"
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm afraid she is currently away.\n"
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please come back later.$"
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Display1::
# 79 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_Display1, MSGBOX_SIGN
# 80 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 81 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_Display1:
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "There's a flag from an old sailboat.\n"
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It's coloured red, blue and yellow…$"
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Display2::
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_Display2, MSGBOX_SIGN
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_Display2:
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "There's an old looking glass. It's\n"
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "embedded with diamonds and pearls…$"
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// ==================================
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// CUTSCENE. MAYORS MISSION
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
// ==================================
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger1:: @ 821127F
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger1
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 103 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger2:: @ 821127F
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger2
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger3:: @ 821127F
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger3
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger4:: @ 821127F
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger4
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger5:: @ 821127F
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger5
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger6:: @ 821127F
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger6
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TriggerMiddle:: @ 821127F
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger8:: @ 821127F
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger8
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 156 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger9:: @ 821127F
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 162 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger9
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger10:: @ 821127F
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger10
# 171 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 174 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger11:: @ 821127F
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 177 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger11
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_Trigger12:: @ 821127F
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Trigger12
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_MayorOffice
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger1:
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 194 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 195 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger2:
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 203 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 205 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger3:
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 210 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 214 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 215 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger4:
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger5:
# 222 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 226 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger6:
# 227 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 229 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 230 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger8:
# 231 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 232 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 233 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 234 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger9:
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 237 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 238 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 239 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger10:
# 240 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 244 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger11:
# 246 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 247 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 248 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 249 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Trigger12:
# 253 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 254 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 255 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 257 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 258 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MayorOffice:: @ 821127F
# 261 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 263 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special SpawnCameraObject
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_DevonCorp_2F_Movement_Camera1
# 266 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 267 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_MayorOffice2
# 268 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice1, MSGBOX_DEFAULT
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 271 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Player1
# 272 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//waitmovement 0
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 1, RustboroCity_DevonCorp_2F_Movement_Mayor1
# 274 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 1, RustboroCity_DevonCorp_2F_Movement_Mayor2
# 276 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_DevonCorp_2F_Movement_Camera2
# 277 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Player2
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 279 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 30
# 280 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice2, MSGBOX_DEFAULT
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 285 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice3, MSGBOX_DEFAULT
# 286 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RustboroCity_DevonCorp_2F_Movement_Camera3
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 1, RustboroCity_DevonCorp_2F_Movement_Mayor3
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice4, MSGBOX_DEFAULT
# 291 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 292 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//playfanfare MUS_FANFA3
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//msgbox RustboroCity_DevonCorp_2F_Text_MapReceived, MSGBOX_DEFAULT
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//waitfanfare
# 297 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//closemessage
# 298 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay 16
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice5, MSGBOX_DEFAULT
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_2F_Movement_Player3
# 303 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement 1, RustboroCity_DevonCorp_2F_Movement_Mayor4
# 304 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	special RemoveCameraObject
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_CheckWillystadState
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 309 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CheckWillystadState::
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_HIDE_LITTLEROOT_TOWN_BIRCH, RustboroCity_DevonCorp_2F_EventScript_SetVar6
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 5
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//setflag FLAG_MET_DEVON_EMPLOYEE
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 315 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetVar6::
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 6
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 321 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Camera1:
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_slow_up
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_slow_up
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 327 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 328 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice1:
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Mayor: Hello, {PLAYER}.\n"
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm glad you came.\p"
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "The Professor told me how he\n"
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "found you lost at sea.\p"
# 333 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "And that you have no recollection\n"
# 334 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "of how you got there.\l"
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Or where you come from.\p"
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "You were lucky the Professor\n"
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "found you out there.\l"
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "But then again, so were we.\p"
# 339 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 340 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Welcome to my office, from which\n"
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I govern over Willystad.\l"
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Like a sheperd over her flock.\p"
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Are you getting along with your\n"
# 345 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "new Pokémon?\p"
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You and your Pokémon really saved\n"
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the day, with that thief.\p"
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Island could use more trainers\n"
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "like yourself.\p"
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "In fact, I need to ask you for your\n"
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "help on another matter.\p"
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let me explain.$"
# 353 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//	
# 354 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I need to thank you for catching\n"
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "the thief, earlier today.\p"
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "You are a stranger, stranded on\n"
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "this unknown Island.\l"
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "No memory where you come from.\l"
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Yet, you helped us.\p"
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "That shows your character, {PLAYER}.\p"
# 361 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "
# 362 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//	
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "The Professor told me he found\n"
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "you at sea.\p"
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "So you have no memory where\n"
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "you come from?\p"
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I believe 
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//	
# 369 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I invited you to discuss an\n"
# 370 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "important matter.\p"
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "We are lucky you and {RIVAL}\n"
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "were there.\p"
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Without a family, one does not\n"
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "truly know who they are.\p"
# 377 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "My family, for instance, has\n"
# 378 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "governed this city, this Island,\l"
# 379 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "for centuries.\p"	
# 380 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "But not to worry.\p"
# 381 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Our Island is a beautiful place,\n"
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "but sadly, it has its problems.\p"
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Speaking of which...\p"
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I could use your help on another\n"
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "important matter.\p"
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Let me explain.$"
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Your ability to catch the\n"
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "thief impressed me.\p"
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "I could use your help on another\n"
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "important matter.\p"
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Let me explain.$"
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Player1:
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	face_right
# 398 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 399 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 400 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Mayor1:
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_slow_down
# 402 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 403 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 404 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 405 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Mayor2:
# 406 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 407 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 409 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_up
# 410 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 411 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 412 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Camera2:
# 413 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Player2:
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//walk_right
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 422 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_right
# 425 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//face_up
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_up
# 427 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 428 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 429 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Mayor3:
# 430 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_down
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_down
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Camera3:
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_slow_down
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end	
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Mayor4:
# 439 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_up
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 442 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_left
# 444 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	walk_up
# 445 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	face_down
# 446 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 447 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Movement_Player3:
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	delay_16
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	face_left
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	step_end
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice2:
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "This Island we inhabit is more\n"
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "than just this city.\p"
# 456 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "In fact, there are more than six\n"
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "settlements on this Island.\p"
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You see, {PLAYER}.\n"
# 459 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "There are many towns on this Island.\p"
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Each town is different.\n"
# 461 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we trade and cooperate.\p"
# 462 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Like in nature, every town fulfills\n"
# 463 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "its own specific role.\p"
# 464 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "This way, the Island is in balance.$"
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "So long every community keeps to their\n"
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "natural role, the Island is in harmony.$"
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice3:
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, some people wish to\n"
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "disturb this balance.\p"
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "A band of crooks is terrorizing\n"
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the people of Konuko Town.\p"
# 473 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "They are stealing the Pokémon of\n"
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "its farmers.\p"
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//	
# 476 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "The neighbouring Konuko Town\n"
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "seems to be in trouble.\p"
# 478 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Some crooks have been stealing\n"
# 479 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	//.string "Pokémon from the farmers.\p"
# 480 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I don't know who they are,\n"
# 481 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "but they must be stopped.\p"
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "When the farmers are in trouble,\n"
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Island is in trouble.$"
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	/*
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "but a band of crooks have started to\l"
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "terrorize the Island recently.\p"
# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Word has reached me that the\n"
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "farmers of Konoku Town have\l"
# 490 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "had trouble with 
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
		
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I do not know who they are, but they\n"
# 493 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "have terrorized the farmers of the\l"
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "neighbouring Konuko Town.\p"
# 495 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And when the farmers are in trouble,\n"
# 496 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the Factory on Mt. Snow is in trouble.\p"
# 497 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And when the Factory is in trouble,\n"
# 498 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Willystad cannot trade.\p"
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	*/
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice4:
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER}!\p"
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I need you to go to Konuko Town\n"
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and investigate the situation.\p"
# 505 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please find out who is disturbing\n"
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the farmers.\p"
# 507 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Here. Take this to find your way.$"
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MapReceived:
# 510 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received the Island Map!$"
# 511 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 512 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice5:
# 513 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We will restore order and harmony\n"
# 514 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "to our Island.\l"
# 515 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm sure of that.\p"
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I know I can count on you, {PLAYER}.$"
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MayorOffice2::
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_MayorOffice6, MSGBOX_DEFAULT
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_MayorOffice6:
# 524 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Go to Konuko Town, {PLAYER}.\p"
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Find out who is disturbing\n"
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the farmers.$"
# 527 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ old:
# 529 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 530 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 531 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
# 532 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 533 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 538 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
# 539 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 540 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 541 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_BallScientist::
# 543 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 544 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 545 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 546 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
# 547 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
# 548 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 549 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 550 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 551 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
# 552 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
# 553 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 554 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 556 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
# 557 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 558 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
# 561 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 563 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 564 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 565 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
# 566 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
# 567 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 568 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 569 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 570 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 571 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 572 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 573 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 574 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
# 575 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 577 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 578 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 579 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 580 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 581 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
# 582 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
# 583 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 584 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 585 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil
# 586 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 587 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil
# 588 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 589 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 590 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 591 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ This whole section has needless duplication and could be condensed considerably
# 592 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeRootFossil::
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 594 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 595 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 597 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 598 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 599 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 600 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 601 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 602 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 603 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 604 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 605 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 606 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil::
# 607 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 608 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 609 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 610 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 611 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 612 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 613 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 614 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 615 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_NoticeClawFossil::
# 616 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	closemessage
# 617 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playse SE_PIN
# 618 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
# 619 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 620 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
# 621 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmovement 0
# 622 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 623 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 625 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
# 626 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 628 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 629 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil::
# 630 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 631 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
# 632 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 633 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 634 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 635 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 636 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 637 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 638 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
# 639 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
# 640 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 641 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 642 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 643 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
# 644 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
# 645 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 646 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 647 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 648 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
# 649 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 1, RustboroCity_DevonCorp_2F_EventScript_LileepReady
# 650 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_WHICH_FOSSIL_REVIVED, 2, RustboroCity_DevonCorp_2F_EventScript_AnorithReady
# 651 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 652 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 653 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_LileepReady::
# 654 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 656 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep
# 657 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 659 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_AnorithReady::
# 660 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 661 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
# 662 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith
# 663 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 664 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 665 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileep::
# 666 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 667 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 668 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty
# 669 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC
# 670 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 671 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 672 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 673 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepParty::
# 674 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 675 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 676 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 677 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 678 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 679 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 680 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 681 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 682 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveLileepPC::
# 683 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare
# 684 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 685 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 686 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 687 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC
# 688 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 690 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferLileepToPC::
# 691 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 692 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep
# 693 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 694 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 695 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedLileepFanfare::
# 696 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 697 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 698 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 699 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 700 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 701 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 702 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 703 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 704 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingLileep::
# 705 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 706 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 707 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 708 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 709 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 710 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorith::
# 711 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 712 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 713 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PARTY, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty
# 714 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, MON_GIVEN_TO_PC, RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC
# 715 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
# 716 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 717 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 718 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithParty::
# 719 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 721 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 722 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 723 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 724 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 725 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 726 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 727 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceiveAnorithPC::
# 728 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare
# 729 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 730 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 731 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 732 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC
# 733 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 734 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 735 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_TransferAnorithToPC::
# 736 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 737 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith
# 738 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 739 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 740 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ReceivedAnorithFanfare::
# 741 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 742 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 743 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
# 744 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 745 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 746 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 747 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	return
# 748 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 749 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAnorith::
# 750 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 751 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 752 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 753 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 754 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 755 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
# 756 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
# 757 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 758 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	multichoice 17, 6, MULTI_FOSSIL, FALSE
# 759 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_RESULT
# 760 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil
# 761 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil
# 762 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 763 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
# 764 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 765 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 766 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseClawFossil::
# 767 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveClawFossil
# 768 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 769 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 770 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_ChooseRootFossil::
# 771 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto RustboroCity_DevonCorp_2F_EventScript_GiveRootFossil
# 772 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 773 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 774 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
# 775 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 776 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 777 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 778 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
# 779 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 780 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 781 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 782 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_ge VAR_RUSTBORO_CITY_STATE, 6, RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
# 783 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
# 784 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 785 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 786 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 787 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
# 788 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
# 789 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 790 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	end
# 791 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 792 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
# 793 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
# 794 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "with POKéMON.\p"
# 795 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But we haven't had much success…$"
# 796 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 797 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
# 798 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm developing new kinds of\n"
# 799 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS…\p"
# 800 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But I haven't made much headway…$"
# 801 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 802 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
# 803 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We finally made new kinds of\n"
# 804 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKé BALLS!\p"
# 805 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The REPEAT BALL makes it easier to\n"
# 806 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "catch POKéMON you've caught before.\p"
# 807 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The TIMER BALL gets better at catching\n"
# 808 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON the longer a battle runs.\p"
# 809 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Both are proudly developed by\n"
# 810 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON CORPORATION.\p"
# 811 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Please give them a try!$"
# 812 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 813 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_IMadePokenav:
# 814 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I made the POKéNAV!\p"
# 815 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "As an engineer, I feel blessed to have\n"
# 816 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "made something so great!$"
# 817 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 818 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
# 819 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, wow!\n"
# 820 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That's a POKéNAV!\p"
# 821 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It came about as a result of our\n"
# 822 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "PRESIDENT's desire to learn about\l"
# 823 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the feelings of POKéMON.\p"
# 824 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like me to describe its\n"
# 825 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "features in detail?\p"
# 826 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "No, no. I think you'll find out just by\n"
# 827 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "trying the POKéNAV out.$"
# 828 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 829 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
# 830 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
# 831 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "visually reproduces the dreams of\l"
# 832 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "POKéMON…\p"
# 833 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 834 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 835 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
# 836 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
# 837 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "that resurrects POKéMON from fossils…\p"
# 838 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "And, it's working!$"
# 839 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 840 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
# 841 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
# 842 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Is that a POKéMON fossil?\p"
# 843 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to bring that POKéMON\n"
# 844 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "back to life?\p"
# 845 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can with my newly developed\n"
# 846 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "FOSSIL REGENERATOR.$"
# 847 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 848 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
# 849 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
# 850 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "DEVON's technological expertise\n"
# 851 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is outstanding, I tell you.$"
# 852 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 853 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
# 854 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, now that's a surprise!\n"
# 855 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have not one, but two, fossils?\p"
# 856 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Unfortunately, my machine can only\n"
# 857 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "regenerate one POKéMON at a time.\p"
# 858 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Would you like to pick one of your\n"
# 859 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "fossils for regeneration?$"
# 860 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 861 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
# 862 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
# 863 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Let's do this right away.\p"
# 864 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
# 865 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 866 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 867 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
# 868 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The FOSSIL REGENERATOR, which I made,\n"
# 869 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "is incredible.\p"
# 870 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it has one drawback--it takes\n"
# 871 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "a long time to work.\p"
# 872 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "So, uh… How about you go for a stroll\n"
# 873 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "and look around for a while?$"
# 874 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 875 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
# 876 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
# 877 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Your fossilized POKéMON has been\n"
# 878 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "brought back to life!\p"
# 879 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The fossil was an ancient POKéMON.\n"
# 880 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{STR_VAR_2}, it was!$"
# 881 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 882 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
# 883 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
# 884 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "the DEVON RESEARCHER.$"
# 885 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 886 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
@ Unused
# 887 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
# 888 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Uh-oh, you've got too many POKéMON.\n"
# 889 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You have no room for this one.$"
# 890 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 891 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
# 892 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new feature\n"
# 893 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "for the POKéNAV…\p"
# 894 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "But it's not going well.$"
# 895 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"

# 896 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
# 897 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Well, now what shall I work on\n"
# 898 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "developing next?\p"
# 899 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Our company allows us to make our\n"
# 900 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "inspirations into reality.\p"
# 901 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "One couldn't ask for a better\n"
# 902 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "environment as an engineer.$"
