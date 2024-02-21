LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FOCUS_PUNCH
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_CALM_MIND
	.2byte ITEM_TM_ROAR
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_HAIL
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_ICE_BEAM
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_FRUSTRATION
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_IRON_TAIL
	.2byte ITEM_TM_THUNDERBOLT
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_EARTHQUAKE
	.2byte ITEM_TM_RETURN
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_DOUBLE_TEAM
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_SHOCK_WAVE
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_TM_AERIAL_ACE
	.2byte ITEM_TM_TORMENT
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_ATTRACT
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_TM_SKILL_SWAP
	.2byte ITEM_TM_SNATCH
	.2byte ITEM_TM_OVERHEAT
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_BRIGHT_POWDER
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_MACHO_BRACE
	.2byte ITEM_EXP_SHARE
	.2byte ITEM_QUICK_CLAW
	.2byte ITEM_SOOTHE_BELL
	.2byte ITEM_MENTAL_HERB
	.2byte ITEM_CHOICE_BAND
	.2byte ITEM_KINGS_ROCK
	.2byte ITEM_SILVER_POWDER
	.2byte ITEM_FOCUS_BAND
	.2byte ITEM_LUCKY_EGG
	.2byte ITEM_SCOPE_LENS
	.2byte ITEM_METAL_COAT
	.2byte ITEM_LEFTOVERS
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_SOFT_SAND
	.2byte ITEM_HARD_STONE
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_BLACK_GLASSES
	.2byte ITEM_BLACK_BELT
	.2byte ITEM_MAGNET
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_SHARP_BEAK
	.2byte ITEM_POISON_BARB
	.2byte ITEM_NEVER_MELT_ICE
	.2byte ITEM_SPELL_TAG
	.2byte ITEM_TWISTED_SPOON
	.2byte ITEM_CHARCOAL
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_LIGHT_BALL
	.2byte ITEM_SOUL_DEW
	.2byte ITEM_LUCKY_PUNCH
	.2byte ITEM_METAL_POWDER
	.2byte ITEM_THICK_CLUB
	.2byte ITEM_STICK
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

