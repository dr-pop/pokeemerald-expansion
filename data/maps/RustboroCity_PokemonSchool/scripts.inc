# 1 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 2 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_MapScripts::
# 3 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_PokemonSchool_OnTransition
# 4 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.byte 0
# 5 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 6 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_OnTransition:
# 7 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//compare VAR_WILLYSTAD_CITY_STATE, 4
# 8 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_unset FLAG_HIDE_WILLYSTAD_LAB_PROF, RustboroCity_PokemonSchool_EventScript_PositionScientist
# 9 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 10 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 11 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_PositionScientist::
# 12 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_RIGHT
# 13 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 14 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 15 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
@ new:
# 16 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 17 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// ======
# 18 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// NPCS
# 19 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// ======
# 20 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 21 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Blackboard:: @ 8213EA9
# 22 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Blackboard, MSGBOX_SIGN
# 23 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 24 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 25 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Computer:: @ 8213EA9
# 26 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Computer, MSGBOX_SIGN
# 27 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 28 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 29 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Machine:: @ 8213EA9
# 30 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Machine, MSGBOX_SIGN
# 31 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 32 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 33 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Artefact:: @ 8213EA9
# 34 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Artefact, MSGBOX_SIGN
# 35 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 36 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 37 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scientist1:: @ 8213EA9
# 38 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 39 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Scientist1, MSGBOX_SIGN
# 40 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 41 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 42 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 43 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scientist2:: @ 8213EA9
# 44 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Scientist2, MSGBOX_NPC
# 45 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 46 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 47 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scientist3:: @ 8213EA9
# 48 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 49 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 50 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 4
# 51 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq RustboroCity_PokemonSchool_EventScript_Scientist4
# 52 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Scientist3, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 54 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 55 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 56 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scientist4::
# 57 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_HIDE_WILLYSTAD_LAB_PROF, RustboroCity_PokemonSchool_EventScript_Scientist5
# 58 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Scientist4, MSGBOX_DEFAULT
# 59 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 60 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 61 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 62 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scientist5::
# 63 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Scientist5, MSGBOX_DEFAULT
# 64 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 65 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 66 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 67 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolBoyM:: @ 8213EA9
# 68 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_SchoolBoyM, MSGBOX_NPC
# 69 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 70 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 71 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Blackboard: @ 8214A5F
# 72 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's full of diagrams and scientific\n"
# 73 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "formulas.$"
# 74 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 75 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Computer: @ 8214A5F
# 76 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There's a long list of files…\p"
# 77 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "“Photosynthesis”…\p"
# 78 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "“Technical Machine protocol”…\p"
# 79 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "“Archaeological sites”…\p"
# 80 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Better not mess around with it!$"
# 81 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 82 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Machine: @ 8214A5F
# 83 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There's a handwritten note…\p"
# 84 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "“Pokémon Extraction Machine\n"
# 85 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Poké-X Machine in short”$"
# 86 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 87 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Artefact: @ 8214A5F
# 88 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It contains what looks like a dried\n"
# 89 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "flower. It's very colorful.$"
# 90 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 91 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Scientist1: @ 8214A5F
# 92 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hmm… If Y equals the sum of R and B\n"
# 93 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "plus 25…\p"
# 94 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "And the delta between C and sigma G, S\n"
# 95 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "is equal to 245…\p"
# 96 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Then E minus R and S must equal 384!$"
# 97 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 98 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScientistX: @ 8214A5F
# 99 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The professor recently returned from\n"
# 100 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "an underwater expedition.\p"
# 101 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "People tend to forget that there\n"
# 102 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are plants underwater as well!$"
# 103 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 104 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Scientist2: @ 8214A5F
# 105 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "We have developed a machine that can\n"
# 106 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "use plants and berries to produce\l"
# 107 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "useful items for trainers.\p"
# 108 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Now they are installing them in\n"
# 109 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Pokémon Centers across the Island!$"
# 110 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 111 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Scientist3: @ 8214A5F
# 112 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "This is the laboratory of Prof. Buxus.\p"
# 113 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "He just left to the City Hall to present\n"
# 114 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "his latest findings.$"
# 115 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 116 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Scientist4: @ 8214A5F
# 117 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Prof. Buxus is about to leave again\n"
# 118 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "on expedition.\p"
# 119 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Our team is looking for a peculiar\n"
# 120 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "flower in Lessis Moor.$"
# 121 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 122 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Scientist5: @ 8214A5F
# 123 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Prof. Buxus left on expedition.\p"
# 124 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "He is looking for a peculiar flower.$"
# 125 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 126 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_SchoolBoyM: @ 8214A5F
# 127 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The scientists in this laboratory\n"
# 128 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "know a lot about plants and Pokémon.\p"
# 129 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always thought flowers were for\n"
# 130 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "girls, but that's not true at all!$"
# 131 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 132 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// =====
# 133 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// PROF SEQUENCE
# 134 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
// =====
# 135 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 136 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxus:: @ 8213EA9
# 137 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 138 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 139 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Prof1, MSGBOX_DEFAULT
# 140 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 141 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 142 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 143 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ReceivedPokedex, MSGBOX_DEFAULT
# 144 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitfanfare
# 145 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 146 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 147 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 148 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 149 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Prof2, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 151 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 152 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 153 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 154 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Prof3, MSGBOX_DEFAULT
# 155 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 156 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 157 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_FACING
# 158 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_SOUTH, RustboroCity_PokemonSchool_EventScript_ProfBuxusSouth
# 159 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_NORTH, RustboroCity_PokemonSchool_EventScript_ProfBuxusNorth
# 160 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_WEST, RustboroCity_PokemonSchool_EventScript_ProfBuxusWest
# 161 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 162 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 163 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 164 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Prof1:
# 165 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Prof. Buxus: Oh, hi, {PLAYER}!\p"
# 166 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "How is your Pokémon doing?\p"
# 167 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Listen, if you're planning to go\n"
# 168 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "on an adventure with your Pokémon,\l"
# 169 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I want you to have this.$"
# 170 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 171 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReceivedPokedex: @ 81FAC32
# 172 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"
# 173 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 174 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Prof2:
# 175 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Prof. Buxus: This is a Pokédex.\p"
# 176 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It is a device that records\n"
# 177 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "information about all the Pokémon\l"
# 178 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you find and catch.\p"
# 179 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, speaking of which,\n"
# 180 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "take this too!$"
# 181 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 182 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Prof3:
# 183 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Prof. Buxus: You can catch Pokémon\n"
# 184 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you encounter in the wild.\p"
# 185 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just throw a Poké Ball at them\n"
# 186 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "when they're weak.$"
# 187 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	
# 188 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxusSouth::
# 189 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 5, RustboroCity_PokemonSchool_Movement_ProfSouth
# 190 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 191 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ProfBuxusExit
# 192 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 193 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 194 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_ProfSouth:
# 195 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_up
# 196 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_up
# 197 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 198 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 199 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxusNorth::
# 200 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 5, RustboroCity_PokemonSchool_Movement_ProfNorth
# 201 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 202 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ProfBuxusExit
# 203 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 204 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 205 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_ProfNorth:
# 206 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_down
# 207 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_down
# 208 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 209 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 210 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxusWest::
# 211 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 5, RustboroCity_PokemonSchool_Movement_ProfWest
# 212 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 213 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ProfBuxusExit
# 214 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 215 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 216 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_ProfWest:
# 217 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_right
# 218 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_right
# 219 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 220 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 221 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxusExit::	
# 222 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_Prof4, MSGBOX_DEFAULT
# 223 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 224 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 16
# 225 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_FACING
# 226 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_SOUTH, RustboroCity_PokemonSchool_EventScript_ProfBuxusExit2
# 227 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_NORTH, RustboroCity_PokemonSchool_EventScript_PlayerMove
# 228 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case DIR_WEST, RustboroCity_PokemonSchool_EventScript_ProfBuxusExit2
# 229 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 230 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 231 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 232 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_PlayerMove::
# 233 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_PokemonSchool_Movement_PlayerMove
# 234 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 235 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ProfBuxusExit2
# 236 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 237 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 238 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_PlayerMove:
# 239 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 240 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	face_left
# 241 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 242 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 243 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ProfBuxusExit2::
# 244 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement 5, RustboroCity_PokemonSchool_Movement_Prof2
# 245 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 246 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 8
# 247 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	playse SE_RG_DOOR
# 248 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay 8
# 249 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	removeobject 5
# 250 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_HIDE_WILLYSTAD_LAB_PROF
# 251 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_CheckWillystadState
# 252 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 253 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 254 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 255 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_CheckWillystadState::
# 256 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	compare VAR_WILLYSTAD_CITY_STATE, 5
# 257 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq RustboroCity_PokemonSchool_EventScript_SetVar6
# 258 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 259 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 260 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 261 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SetVar6::
# 262 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setvar VAR_WILLYSTAD_CITY_STATE, 6
# 263 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 264 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 265 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 266 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_Prof4:
# 267 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Okay, {PLAYER}.\p"
# 268 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I am heading to Lessis Moor\n"
# 269 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "to do more field research.\p"
# 270 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It is an exciting time to\n"
# 271 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "be a scientist.\p"
# 272 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Take care, {PLAYER}!$"
# 273 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 274 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_Prof2:
# 275 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_down
# 276 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_down
# 277 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 278 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 279 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 280 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 281 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 282 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
@ old:
# 283 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 284 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
//RustboroCity_PokemonSchool_EventScript_Blackboard::
# 285 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//lockall
# 286 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//msgbox RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges, MSGBOX_DEFAULT
# 287 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 288 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	//end
# 289 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 290 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic::
# 291 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	message RustboroCity_PokemonSchool_Text_ReadWhichTopic
# 292 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmessage
# 293 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	multichoicegrid 8, 1, MULTI_STATUS_INFO, 3, FALSE
# 294 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	switch VAR_RESULT
# 295 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 0, RustboroCity_PokemonSchool_EventScript_Poison
# 296 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 1, RustboroCity_PokemonSchool_EventScript_Paralysis
# 297 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 2, RustboroCity_PokemonSchool_EventScript_Sleep
# 298 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 3, RustboroCity_PokemonSchool_EventScript_Burn
# 299 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 4, RustboroCity_PokemonSchool_EventScript_Freeze
# 300 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case 5, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 301 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	case MULTI_B_PRESSED, RustboroCity_PokemonSchool_EventScript_ExitTopicSelect
# 302 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 303 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 304 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Poison::
# 305 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainPoison, MSGBOX_DEFAULT
# 306 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 307 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 308 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 309 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Paralysis::
# 310 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainParalysis, MSGBOX_DEFAULT
# 311 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 312 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 313 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 314 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Sleep::
# 315 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainSleep, MSGBOX_DEFAULT
# 316 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 317 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 318 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 319 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Burn::
# 320 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainBurn, MSGBOX_DEFAULT
# 321 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 322 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 323 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 324 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Freeze::
# 325 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainFreeze, MSGBOX_DEFAULT
# 326 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_ChooseBlackboardTopic
# 327 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 328 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 329 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ExitTopicSelect::
# 330 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	releaseall
# 331 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 332 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 333 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid1::
# 334 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_TradingRightNow, MSGBOX_NPC
# 335 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 336 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 337 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GameboyKid2::
# 338 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot, MSGBOX_NPC
# 339 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 340 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 341 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_RichBoy::
# 342 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems, MSGBOX_NPC
# 343 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 344 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 345 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Lass::
# 346 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself, MSGBOX_NPC
# 347 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 348 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 349 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_SchoolKidM::
# 350 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry, MSGBOX_NPC
# 351 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 352 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 353 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_StudentNotebook::
# 354 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsNotes, MSGBOX_SIGN
# 355 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 356 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 357 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Teacher::
# 358 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 359 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 360 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_RECEIVED_QUICK_CLAW, RustboroCity_PokemonSchool_EventScript_GaveQuickClaw
# 361 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast
# 362 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest
# 363 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw, MSGBOX_DEFAULT
# 364 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 365 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 366 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 367 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 368 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 369 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_RECEIVED_QUICK_CLAW
# 370 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 371 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 372 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 373 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsEast::
# 374 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast
# 375 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 376 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 377 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 378 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_TeacherCheckOnStudentsWest::
# 379 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest
# 380 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 381 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	return
# 382 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 383 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_GaveQuickClaw::
# 384 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ExplainQuickClaw, MSGBOX_DEFAULT
# 385 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	closemessage
# 386 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 387 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	waitmovement 0
# 388 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 389 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 390 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 391 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsWest:
# 392 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 393 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 394 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 395 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 396 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 397 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 398 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 399 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 400 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 401 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 402 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 403 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 404 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 405 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 406 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 407 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 408 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 409 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 410 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 411 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 412 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 413 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 414 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 415 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 416 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Movement_TeacherCheckOnStudentsEast:
# 417 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 418 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 419 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 420 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 421 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 422 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 423 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_down
# 424 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 425 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 426 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 427 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_down
# 428 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_in_place_faster_left
# 429 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 430 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 431 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 432 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 433 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_16
# 434 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	delay_8
# 435 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 436 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_right
# 437 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 438 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_up
# 439 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 440 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	walk_left
# 441 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	step_end
# 442 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 443 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_Scott::
# 444 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	lock
# 445 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	faceplayer
# 446 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE, RustboroCity_PokemonSchool_EventScript_ScottWatchStudents
# 447 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_MET_SCOTT_RUSTBORO, RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready
# 448 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge
# 449 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut, MSGBOX_DEFAULT
# 450 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 451 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_RUSTBORO
# 452 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 453 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 454 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 455 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottSpokeAlready::
# 456 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge
# 457 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 458 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 459 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 460 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 461 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottGreetHasBadge::
# 462 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge, MSGBOX_DEFAULT
# 463 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 464 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 465 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 466 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottNoticeBadge::
# 467 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_ScottStoneBadge, MSGBOX_DEFAULT
# 468 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	goto RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge
# 469 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 470 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 471 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_MetScottAfterBadge::
# 472 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 473 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	setflag FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE
# 474 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 475 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 476 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 477 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_EventScript_ScottWatchStudents::
# 478 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	msgbox RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown, MSGBOX_DEFAULT
# 479 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	release
# 480 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	end
# 481 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 482 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges:
# 483 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The blackboard lists status changes\n"
# 484 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "that may affect POKéMON in battle.$"
# 485 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 486 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ReadWhichTopic:
# 487 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Which topic do you want to read?$"
# 488 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 489 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainPoison:
# 490 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is poisoned, it will\n"
# 491 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily lose HP.\p"
# 492 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The effects of poison remain after\n"
# 493 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a battle.\p"
# 494 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A poisoned POKéMON's HP will drop\n"
# 495 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "while it is traveling.\p"
# 496 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Heal a poisoning using an ANTIDOTE.$"
# 497 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 498 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainParalysis:
# 499 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON becomes paralyzed,\n"
# 500 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "its SPEED drops.\p"
# 501 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It may also not be able to move while\n"
# 502 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "it is in battle.\p"
# 503 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Paralysis remains after battle.\n"
# 504 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure it using a PARLYZ HEAL.$"
# 505 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 506 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainSleep:
# 507 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON falls asleep, it will be\n"
# 508 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "unable to attack.\p"
# 509 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON may wake up on its own,\n"
# 510 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "but if a battle ends while it is\l"
# 511 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "sleeping, it will stay asleep.\p"
# 512 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Wake it up using an AWAKENING.$"
# 513 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 514 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainBurn:
# 515 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn reduces ATTACK power, and it\n"
# 516 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "steadily reduces the victim's HP.\p"
# 517 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A burn lingers after battle.\n"
# 518 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Cure a burn using a BURN HEAL.$"
# 519 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 520 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainFreeze:
# 521 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If a POKéMON is frozen, it becomes\n"
# 522 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "completely helpless.\p"
# 523 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It will remain frozen after battle.\n"
# 524 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Thaw it out using an ICE HEAL.$"
# 525 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 526 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw:
# 527 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Students who don't study get a little\n"
# 528 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "taste of my QUICK CLAW.\p"
# 529 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Whether or not you are a good student \n"
# 530 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "will be evident from the way you use\l"
# 531 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this item.$"
# 532 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 533 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ExplainQuickClaw:
# 534 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding the QUICK CLAW will\n"
# 535 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "occasionally speed up and get to move\l"
# 536 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "before its opponent.\p"
# 537 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many other items that are\n"
# 538 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "meant to be held by POKéMON.\p"
# 539 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Just those alone will give you many\n"
# 540 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "topics to study!$"
# 541 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 542 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_TradingRightNow:
# 543 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm trading POKéMON with my friend\n"
# 544 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "right now.$"
# 545 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 546 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot:
# 547 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I always wanted a SEEDOT, and\n"
# 548 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I'm finally getting one!$"
# 549 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 550 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems:
# 551 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold items, but they\n"
# 552 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "don't know what to do with man-made\l"
# 553 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "items like POTION and ANTIDOTE.$"
# 554 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 555 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself:
# 556 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "You know how some POKéMON moves can\n"
# 557 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "confuse a POKéMON?\p"
# 558 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A confused POKéMON will sometimes\n"
# 559 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "attack itself without meaning to.\p"
# 560 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But once it leaves battle, it will\n"
# 561 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "return to normal.$"
# 562 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 563 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry:
# 564 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A POKéMON holding a BERRY will heal\n"
# 565 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "itself…\p"
# 566 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "There are many kinds of items that\n"
# 567 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON can hold…\p"
# 568 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Boy, it sure is hard taking notes\n"
# 569 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "down…$"
# 570 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 571 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentsNotes:
# 572 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's this student's notebook…\p"
# 573 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON are to be caught using\n"
# 574 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKé BALLS.\p"
# 575 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Up to six POKéMON can accompany\n"
# 576 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER.\p"
# 577 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER is someone who catches\n"
# 578 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON, raises them, and battles\l"
# 579 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "with them.\p"
# 580 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "A TRAINER's mission is to defeat\n"
# 581 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "the strong TRAINERS who await\l"
# 582 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "challengers in POKéMON GYMS.$"
# 583 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 584 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut:
# 585 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 586 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 587 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 588 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 589 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 590 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 591 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 592 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 593 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "So, what brings you to this SCHOOL?\n"
# 594 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Are you a TRAINER, too?\p"
# 595 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The first thing you should do is to\n"
# 596 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "have a POKéMON learn the move CUT.\p"
# 597 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "If I remember correctly, someone in\n"
# 598 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "this town has CUT.$"
# 599 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 600 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown:
# 601 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Hmm…\p"
# 602 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "The talent levels of the students here\n"
# 603 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "are unknown. The potential's there.$"
# 604 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 605 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottStoneBadge:
# 606 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "SCOTT: Oh, what's that?\p"
# 607 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\n"
# 608 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say.\p"
# 609 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 610 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 611 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 612 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
# 613 "data/maps/RustboroCity_PokemonSchool/scripts.pory"

# 614 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge:
# 615 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Hello? Didn't we meet before?\n"
# 616 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I think back in PETALBURG CITY.\p"
# 617 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Let me introduce myself.\n"
# 618 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "My name's SCOTT.\p"
# 619 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "I've been traveling everywhere in\n"
# 620 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "search of outstanding TRAINERS.\p"
# 621 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "More specifically, I'm looking for\n"
# 622 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "POKéMON battle experts.\p"
# 623 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "Oh, what's that?\n"
# 624 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's a STONE BADGE, isn't it?\p"
# 625 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "That's pretty impressive, I'd say, for\n"
# 626 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a starting TRAINER like yourself.\p"
# 627 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "But, you know, I would've loved to see\n"
# 628 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "you in battle.\p"
# 629 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "It's hard to tell what you're like as\n"
# 630 "data/maps/RustboroCity_PokemonSchool/scripts.pory"
	.string "a TRAINER from a LEAGUE BADGE.$"
