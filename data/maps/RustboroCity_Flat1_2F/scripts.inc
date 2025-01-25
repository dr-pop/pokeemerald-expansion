# 1 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 2 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
.set LOCALID_WALDAS_DAD, 6
# 3 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 4 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_MapScripts::
# 5 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.byte 0
# 6 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 7 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
@ new: 
# 8 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 9 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_Girl:: @ 82151D7
# 10 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_Dolls, MSGBOX_NPC
# 11 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 12 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 13 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_Dolls: @ 821524F
# 14 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "My sister and I collect Pokémon\n"
# 15 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Dolls.\p"
# 16 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Five down, 891 to go!$"
# 17 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 18 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
@ old:
# 19 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 20 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDad::
# 21 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	lock
# 22 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	faceplayer
# 23 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryBufferWaldaPhrase
# 24 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase
# 25 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase
# 26 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 27 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_GivePhrase::
# 28 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	special DoWaldaNamingScreen
# 29 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitstate
# 30 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 1, RustboroCity_Flat1_2F_EventScript_CancelGivePhrase
# 31 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_0x8004, 2, RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase
# 32 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	specialvar VAR_RESULT, TryGetWallpaperWithWaldaPhrase
# 33 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase
# 34 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase
# 35 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 36 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 37 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFirstPhrase::
# 38 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase, MSGBOX_YESNO
# 39 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 40 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 42 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 43 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadNewPhrase::
# 44 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase, MSGBOX_YESNO
# 45 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase
# 46 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	goto RustboroCity_Flat1_2F_EventScript_GivePhrase
# 48 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 49 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_DeclineGivePhrase::
# 50 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhIsThatRight, MSGBOX_DEFAULT
# 51 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 52 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 53 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 54 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGivePhrase::
# 55 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhYouDontKnowAny, MSGBOX_DEFAULT
# 56 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 57 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 58 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 59 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_CancelGiveFirstPhrase::
# 60 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase, MSGBOX_DEFAULT
# 61 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 62 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2, MSGBOX_DEFAULT
# 63 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 64 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 65 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 66 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaLikesPhrase::
# 67 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry2, MSGBOX_DEFAULT
# 68 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 69 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_OhShesLaughing, MSGBOX_DEFAULT
# 70 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	applymovement LOCALID_WALDAS_DAD, Common_Movement_FacePlayer
# 71 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	waitmovement 0
# 72 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper, MSGBOX_DEFAULT
# 73 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 74 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 75 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 76 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldaDoesntLikePhrase::
# 77 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_LetsGiveItATry, MSGBOX_DEFAULT
# 78 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	call RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda
# 79 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll, MSGBOX_DEFAULT
# 80 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	release
# 81 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 82 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 83 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasDadFaceWalda::
# 84 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	turnobject LOCALID_WALDAS_DAD, DIR_EAST
# 85 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	return
# 86 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 87 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_WaldasMom::
# 88 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard, MSGBOX_NPC
# 89 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 90 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 91 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_EventScript_PokeDoll::
# 92 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	msgbox RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll, MSGBOX_SIGN
# 93 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	end
# 94 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 95 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard:
# 96 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, it's so hard every day…\p"
# 97 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "What's hard?\n"
# 98 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "You need to ask?\p"
# 99 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's trying to figure out what to\n"
# 100 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "make for meals every day.\p"
# 101 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It really isn't easy coming up with\n"
# 102 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "meals every day.$"
# 103 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 104 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase:
# 105 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, hello!\n"
# 106 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Welcome to the PEPPER household.\p"
# 107 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I have a question for you.\n"
# 108 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Have you ever baby-sat?\p"
# 109 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "You see, I'm a new father, so raising\n"
# 110 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a child is all new to me.\p"
# 111 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "And I have a problem. My daughter\n"
# 112 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "WALDA doesn't laugh enough.\p"
# 113 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I think she'd laugh for me if I told\n"
# 114 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "her something funny.\p"
# 115 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Do you know of a funny word or\n"
# 116 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "phrase you can tell me?$"
# 117 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 118 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase:
# 119 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I've been saying “{STR_VAR_1}”\n"
# 120 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "to amuse her lately.\p"
# 121 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Do you know of a better word or\n"
# 122 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "a phrase that might work?$"
# 123 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 124 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion:
# 125 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, that's wonderful.\n"
# 126 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "So, let's hear it, your suggestion.$"
# 127 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 128 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhIsThatRight:
# 129 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, is that right?\p"
# 130 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, if you come up with a good\n"
# 131 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "suggestion, I'm all ears.$"
# 132 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 133 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry2:
# 134 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
# 135 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, let's give it a try, shall we?$"
# 136 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 137 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhShesLaughing:
# 138 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 139 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 140 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, yes! She's laughing!\n"
# 141 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, I am as delighted as she!$"
# 142 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 143 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_LetsGiveItATry:
# 144 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Ah, I see.\n"
# 145 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Well, let's give it a try, shall we?$"
# 146 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 147 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll:
# 148 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 149 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 150 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… She's not smiling at all.\n"
# 151 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Maybe WALDA is one serious child…$"
# 152 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 153 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase:
# 154 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
# 155 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I'd better think for myself, then.\p"
# 156 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmm…\n"
# 157 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "How about “{STR_VAR_1}”?\l"
# 158 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Let's see if that will work.$"
# 159 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 160 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll2:
# 161 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\n"
# 162 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "{STR_VAR_1}.\p"
# 163 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Hmmm… She's not smiling at all.\n"
# 164 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Maybe WALDA is one serious child…$"
# 165 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 166 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_OhYouDontKnowAny:
# 167 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Oh, so you don't know any good words.\n"
# 168 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I guess I'll try to amuse her with\l"
# 169 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "the saying I used before.\p"
# 170 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Anyways, if you have a good suggestion,\n"
# 171 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "don't hesitate in telling me, okay?$"
# 172 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 173 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper:
# 174 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thank you!\p"
# 175 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Thanks to you, my darling WALDA\n"
# 176 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "laughed for me!\p"
# 177 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "Actually, I may not look all that\n"
# 178 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "special, but I'm one of DEVON\l"
# 179 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "CORPORATION's top researchers.\p"
# 180 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "So, how about I do something in return\n"
# 181 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "for you?\p"
# 182 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "I know, I'll add some new wallpaper\n"
# 183 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "patterns for the BOXES in the PC\l"
# 184 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "POKéMON Storage System.\p"
# 185 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "In the wallpaper pattern menu,\n"
# 186 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "select “FRIENDS.”\p"
# 187 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "That will give you access to the new\n"
# 188 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "wallpaper patterns.$"
# 189 "data/maps/RustboroCity_Flat1_2F/scripts.pory"

# 190 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll:
# 191 "data/maps/RustboroCity_Flat1_2F/scripts.pory"
	.string "It's a POKéMON plush DOLL!$"
