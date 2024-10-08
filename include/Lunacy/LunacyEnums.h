#pragma once
// Contains all enums for Lunacy
namespace Sexy
{
	enum ResourceID
	{
		IMAGE_BLANK_ID = 0x0,
		IMAGE_TITLESCREEN_ID = 0x1,
		IMAGE_LOADBAR_DIRT_ID = 0x2,
		IMAGE_LOADBAR_GRASS_ID = 0x3,
		IMAGE_REANIM_SODROLLCAP_ID = 0x4,
		FONT_BRIANNETOD16_ID = 0x5,
		SOUND_BUTTONCLICK_ID = 0x6,
		SOUND_LOADINGBAR_FLOWER_ID = 0x7,
		SOUND_LOADINGBAR_ZOMBIE_ID = 0x8,
		FONT_IMAGE_HOUSEOFTERROR28_ID = 0x9,
		FONT_HOUSEOFTERROR28_ID = 0xA,
		FONT_HOUSEOFTERROR20_ID = 0xB,
		FONT_HOUSEOFTERROR16_ID = 0xC,
		FONT_TINYBOLD_ID = 0xD,
		FONT_CONTINUUMBOLD14_ID = 0xE,
		FONT_CONTINUUMBOLD14OUTLINE_ID = 0xF,
		FONT_DWARVENTODCRAFT12_ID = 0x10,
		FONT_DWARVENTODCRAFT15_ID = 0x11,
		FONT_DWARVENTODCRAFT18_ID = 0x12,
		FONT_DWARVENTODCRAFT18BRIGHTGREENINSET_ID = 0x13,
		FONT_DWARVENTODCRAFT18GREENINSET_ID = 0x14,
		FONT_DWARVENTODCRAFT18YELLOW_ID = 0x15,
		FONT_DWARVENTODCRAFT24_ID = 0x16,
		FONT_DWARVENTODCRAFT36BRIGHTGREENINSET_ID = 0x17,
		FONT_DWARVENTODCRAFT36GREENINSET_ID = 0x18,
		FONT_PICO129_ID = 0x19,
		FONT_BRIANNETOD12_ID = 0x1A,
		IMAGE_EDITBOX_ID = 0x1B,
		IMAGE_DIALOG_TOPLEFT_ID = 0x1C,
		IMAGE_DIALOG_TOPMIDDLE_ID = 0x1D,
		IMAGE_DIALOG_TOPRIGHT_ID = 0x1E,
		IMAGE_DIALOG_CENTERLEFT_ID = 0x1F,
		IMAGE_DIALOG_CENTERMIDDLE_ID = 0x20,
		IMAGE_DIALOG_CENTERRIGHT_ID = 0x21,
		IMAGE_DIALOG_BOTTOMLEFT_ID = 0x22,
		IMAGE_DIALOG_BOTTOMMIDDLE_ID = 0x23,
		IMAGE_DIALOG_BOTTOMRIGHT_ID = 0x24,
		IMAGE_DIALOG_BIGBOTTOMLEFT_ID = 0x25,
		IMAGE_DIALOG_BIGBOTTOMMIDDLE_ID = 0x26,
		IMAGE_DIALOG_BIGBOTTOMRIGHT_ID = 0x27,
		IMAGE_DIALOG_HEADER_ID = 0x28,
		IMAGE_BUTTON_LEFT_ID = 0x29,
		IMAGE_BUTTON_MIDDLE_ID = 0x2A,
		IMAGE_BUTTON_RIGHT_ID = 0x2B,
		IMAGE_BUTTON_DOWN_LEFT_ID = 0x2C,
		IMAGE_BUTTON_DOWN_MIDDLE_ID = 0x2D,
		IMAGE_BUTTON_DOWN_RIGHT_ID = 0x2E,
		IMAGE_SEEDCHOOSER_BACKGROUND_ID = 0x2F,
		IMAGE_SEEDCHOOSER_BUTTON_ID = 0x30,
		IMAGE_SEEDCHOOSER_BUTTON_DISABLED_ID = 0x31,
		IMAGE_SEEDCHOOSER_BUTTON_GLOW_ID = 0x32,
		IMAGE_SEEDCHOOSER_BUTTON2_ID = 0x33,
		IMAGE_SEEDCHOOSER_BUTTON2_GLOW_ID = 0x34,
		IMAGE_SEEDCHOOSER_IMITATERADDON_ID = 0x35,
		IMAGE_SEEDS_ID = 0x36,
		IMAGE_SEEDPACKET_LARGER_ID = 0x37,
		IMAGE_SEEDPACKETSILHOUETTE_ID = 0x38,
		IMAGE_FLAGMETER_ID = 0x39,
		IMAGE_FLAGMETERLEVELPROGRESS_ID = 0x3A,
		IMAGE_FLAGMETERPARTS_ID = 0x3B,
		IMAGE_TROPHY_ID = 0x3C,
		IMAGE_TROPHY_HI_RES_ID = 0x3D,
		IMAGE_ZOMBIE_NOTE_SMALL_ID = 0x3E,
		IMAGE_TACO_ID = 0x3F,
		IMAGE_CARKEYS_ID = 0x40,
		IMAGE_ALMANAC_ID = 0x41,
		IMAGE_ICON_POOLCLEANER_ID = 0x42,
		IMAGE_ICON_ROOFCLEANER_ID = 0x43,
		IMAGE_ICON_RAKE_ID = 0x44,
		IMAGE_BRAIN_ID = 0x45,
		IMAGE_MONEYBAG_ID = 0x46,
		IMAGE_MONEYBAG_HI_RES_ID = 0x47,
		IMAGE_CHOCOLATE_ID = 0x48,
		IMAGE_OPTIONS_BACKTOGAMEBUTTON0_ID = 0x49,
		IMAGE_OPTIONS_BACKTOGAMEBUTTON2_ID = 0x4A,
		IMAGE_OPTIONS_CHECKBOX0_ID = 0x4B,
		IMAGE_OPTIONS_CHECKBOX1_ID = 0x4C,
		IMAGE_OPTIONS_MENUBACK_ID = 0x4D,
		IMAGE_OPTIONS_SLIDERKNOB2_ID = 0x4E,
		IMAGE_OPTIONS_SLIDERSLOT_ID = 0x4F,
		IMAGE_SELECTORSCREEN_HELP1_ID = 0x50,
		IMAGE_SELECTORSCREEN_HELP2_ID = 0x51,
		IMAGE_SELECTORSCREEN_OPTIONS1_ID = 0x52,
		IMAGE_SELECTORSCREEN_OPTIONS2_ID = 0x53,
		IMAGE_SELECTORSCREEN_QUIT1_ID = 0x54,
		IMAGE_SELECTORSCREEN_QUIT2_ID = 0x55,
		IMAGE_SELECTORSCREEN_ALMANAC_ID = 0x56,
		IMAGE_SELECTORSCREEN_ALMANACHIGHLIGHT_ID = 0x57,
		IMAGE_SELECTORSCREEN_STORE_ID = 0x58,
		IMAGE_SELECTORSCREEN_STOREHIGHLIGHT_ID = 0x59,
		IMAGE_SELECTORSCREEN_LEVELNUMBERS_ID = 0x5A,
		IMAGE_SELECTORSCREEN_ZENGARDEN_ID = 0x5B,
		IMAGE_SELECTORSCREEN_ZENGARDENHIGHLIGHT_ID = 0x5C,
		IMAGE_STORE_SPEECHBUBBLE_ID = 0x5D,
		IMAGE_STORE_SPEECHBUBBLE2_ID = 0x5E,
		IMAGE_SHOVEL_ID = 0x5F,
		IMAGE_TOMBSTONES_ID = 0x60,
		IMAGE_TOMBSTONE_MOUNDS_ID = 0x61,
		IMAGE_NIGHT_GRAVE_GRAPHIC_ID = 0x62,
		IMAGE_CRATER_ID = 0x63,
		IMAGE_CRATER_FADING_ID = 0x64,
		IMAGE_CRATER_ROOF_CENTER_ID = 0x65,
		IMAGE_CRATER_ROOF_LEFT_ID = 0x66,
		IMAGE_CRATER_WATER_DAY_ID = 0x67,
		IMAGE_CRATER_WATER_NIGHT_ID = 0x68,
		IMAGE_COBCANNON_TARGET_ID = 0x69,
		IMAGE_COBCANNON_POPCORN_ID = 0x6A,
		IMAGE_FERTILIZER_ID = 0x6B,
		IMAGE_WATERINGCAN_ID = 0x6C,
		IMAGE_WATERINGCANGOLD_ID = 0x6D,
		IMAGE_PHONOGRAPH_ID = 0x6E,
		IMAGE_BEGHOULED_TWIST_OVERLAY_ID = 0x6F,
		IMAGE_ZEN_GOLDTOOLRETICLE_ID = 0x70,
		IMAGE_ZEN_GARDENGLOVE_ID = 0x71,
		IMAGE_ZEN_MONEYSIGN_ID = 0x72,
		IMAGE_ZEN_NEXTGARDEN_ID = 0x73,
		IMAGE_ZEN_WHEELBARROW_ID = 0x74,
		IMAGE_ZENSHOPBUTTON_ID = 0x75,
		IMAGE_ZENSHOPBUTTON_HIGHLIGHT_ID = 0x76,
		IMAGE_PRESENT_ID = 0x77,
		IMAGE_PRESENTOPEN_ID = 0x78,
		IMAGE_SUNFLOWER_TROPHY_ID = 0x79,
		IMAGE_SLOTMACHINE_OVERLAY_ID = 0x7A,
		IMAGE_SCARY_POT_ID = 0x7B,
		IMAGE_BUG_SPRAY_ID = 0x7C,
		IMAGE_PLANTSPEECHBUBBLE_ID = 0x7D,
		IMAGE_WATERDROP_ID = 0x7E,
		IMAGE_TREEFOOD_ID = 0x7F,
		IMAGE_PROJECTILEPEA_ID = 0x80,
		IMAGE_PROJECTILESNOWPEA_ID = 0x81,
		IMAGE_PROJECTILECACTUS_ID = 0x82,
		IMAGE_DIRTSMALL_ID = 0x83,
		IMAGE_DIRTBIG_ID = 0x84,
		IMAGE_ROCKSMALL_ID = 0x85,
		IMAGE_WATERPARTICLE_ID = 0x86,
		IMAGE_WHITEWATER_ID = 0x87,
		IMAGE_WHITEWATER_SHADOW_ID = 0x88,
		IMAGE_MELONPULT_PARTICLES_ID = 0x89,
		IMAGE_WINTERMELON_PARTICLES_ID = 0x8A,
		IMAGE_PROJECTILE_STAR_ID = 0x8B,
		IMAGE_SEEDBANK_ID = 0x8C,
		IMAGE_CONVEYORBELT_BACKDROP_ID = 0x8D,
		IMAGE_CONVEYORBELT_ID = 0x8E,
		IMAGE_SHOVELBANK_ID = 0x8F,
		IMAGE_SUNBANK_ID = 0x90,
		IMAGE_COINBANK_ID = 0x91,
		IMAGE_POOL_ID = 0x92,
		IMAGE_POOL_NIGHT_ID = 0x93,
		IMAGE_POOL_BASE_ID = 0x94,
		IMAGE_POOL_BASE_NIGHT_ID = 0x95,
		IMAGE_POOL_SHADING_ID = 0x96,
		IMAGE_POOL_SHADING_NIGHT_ID = 0x97,
		IMAGE_POOL_CAUSTIC_EFFECT_ID = 0x98,
		IMAGE_PLANTSHADOW_ID = 0x99,
		IMAGE_PLANTSHADOW2_ID = 0x9A,
		IMAGE_PEA_SHADOWS_ID = 0x9B,
		IMAGE_WALLNUT_BOWLINGSTRIPE_ID = 0x9C,
		IMAGE_ICE_ID = 0x9D,
		IMAGE_ICE_CAP_ID = 0x9E,
		IMAGE_ICE_SPARKLES_ID = 0x9F,
		IMAGE_IMITATERSEED_ID = 0xA0,
		IMAGE_ALMANAC_IMITATER_ID = 0xA1,
		IMAGE_IMITATERSEEDDISABLED_ID = 0xA2,
		IMAGE_ICETRAP_ID = 0xA3,
		IMAGE_ICETRAP2_ID = 0xA4,
		IMAGE_ICETRAP_PARTICLES_ID = 0xA5,
		IMAGE_ZOMBIE_BOBSLED1_ID = 0xA6,
		IMAGE_ZOMBIE_BOBSLED2_ID = 0xA7,
		IMAGE_ZOMBIE_BOBSLED3_ID = 0xA8,
		IMAGE_ZOMBIE_BOBSLED4_ID = 0xA9,
		IMAGE_ZOMBIE_BOBSLED_INSIDE_ID = 0xAA,
		IMAGE_BUNGEECORD_ID = 0xAB,
		IMAGE_BUNGEETARGET_ID = 0xAC,
		IMAGE_SPOTLIGHT_ID = 0xAD,
		IMAGE_SPOTLIGHT2_ID = 0xAE,
		IMAGE_WHITEPIXEL_ID = 0xAF,
		IMAGE_ZOMBIEPOLEVAULTERHEAD_ID = 0xB0,
		IMAGE_ZOMBIEFOOTBALLHEAD_ID = 0xB1,
		IMAGE_POOLSPARKLY_ID = 0xB2,
		IMAGE_WALLNUTPARTICLESSMALL_ID = 0xB3,
		IMAGE_WALLNUTPARTICLESLARGE_ID = 0xB4,
		IMAGE_PEA_SPLATS_ID = 0xB5,
		IMAGE_SPIKE_PARTICLES_ID = 0xB6,
		IMAGE_SPIKE_SPLATS_ID = 0xB7,
		IMAGE_STAR_PARTICLES_ID = 0xB8,
		IMAGE_STAR_SPLATS_ID = 0xB9,
		IMAGE_PEA_PARTICLES_ID = 0xBA,
		IMAGE_SNOWPEA_SPLATS_ID = 0xBB,
		IMAGE_SNOWPEA_PARTICLES_ID = 0xBC,
		IMAGE_SNOWPEA_PUFF_ID = 0xBD,
		IMAGE_SNOWFLAKES_ID = 0xBE,
		IMAGE_POTATOMINE_PARTICLES_ID = 0xBF,
		IMAGE_PUFFSHROOM_PUFF1_ID = 0xC0,
		IMAGE_ZAMBONISMOKE_ID = 0xC1,
		IMAGE_ZOMBIEDANCERHEAD_ID = 0xC2,
		IMAGE_ZOMBIEBALLOONHEAD_ID = 0xC3,
		IMAGE_ZOMBIEIMPHEAD_ID = 0xC4,
		IMAGE_ZOMBIEDIGGERHEAD_ID = 0xC5,
		IMAGE_ZOMBIEDIGGERARM_ID = 0xC6,
		IMAGE_ZOMBIEDOLPHINRIDERHEAD_ID = 0xC7,
		IMAGE_ZOMBIEPOGO_ID = 0xC8,
		IMAGE_ZOMBIEBACKUPDANCERHEAD_ID = 0xC9,
		IMAGE_ZOMBIEBOBSLEDHEAD_ID = 0xCA,
		IMAGE_ZOMBIELADDERHEAD_ID = 0xCB,
		IMAGE_ZOMBIEYETIHEAD_ID = 0xCC,
		IMAGE_SEEDPACKETFLASH_ID = 0xCD,
		IMAGE_ZOMBIEJACKBOXARM_ID = 0xCE,
		IMAGE_IMITATERCLOUDS_ID = 0xCF,
		IMAGE_IMITATERPUFFS_ID = 0xD0,
		IMAGE_ZOMBIE_BOSS_FIREBALL_PARTICLES_ID = 0xD1,
		IMAGE_ZOMBIE_BOSS_ICEBALL_PARTICLES_ID = 0xD2,
		IMAGE_ZOMBIE_BOSS_FIREBALL_GROUNDPARTICLES_ID = 0xD3,
		IMAGE_ZOMBIE_BOSS_ICEBALL_GROUNDPARTICLES_ID = 0xD4,
		IMAGE_DOOMSHROOM_EXPLOSION_BASE_ID = 0xD5,
		IMAGE_RAIN_ID = 0xD6,
		IMAGE_VASE_CHUNKS_ID = 0xD7,
		IMAGE_ZOMBOSS_PARTICLES_ID = 0xD8,
		IMAGE_AWARDPICKUPGLOW_ID = 0xD9,
		IMAGE_ZOMBIE_SEAWEED_ID = 0xDA,
		IMAGE_PINATA_ID = 0xDB,
		IMAGE_ZOMBIEFUTUREGLASSES_ID = 0xDC,
		IMAGE_DUST_PUFFS_ID = 0xDD,
		IMAGE_REANIM_WALLNUT_BODY_ID = 0xDE,
		IMAGE_REANIM_WALLNUT_CRACKED1_ID = 0xDF,
		IMAGE_REANIM_WALLNUT_CRACKED2_ID = 0xE0,
		IMAGE_REANIM_TALLNUT_CRACKED1_ID = 0xE1,
		IMAGE_REANIM_TALLNUT_CRACKED2_ID = 0xE2,
		IMAGE_REANIM_PUMPKIN_DAMAGE1_ID = 0xE3,
		IMAGE_REANIM_PUMPKIN_DAMAGE3_ID = 0xE4,
		IMAGE_REANIM_ZOMBIE_CONE1_ID = 0xE5,
		IMAGE_REANIM_ZOMBIE_CONE2_ID = 0xE6,
		IMAGE_REANIM_ZOMBIE_CONE3_ID = 0xE7,
		IMAGE_REANIM_ZOMBIE_BUCKET1_ID = 0xE8,
		IMAGE_REANIM_ZOMBIE_BUCKET2_ID = 0xE9,
		IMAGE_REANIM_ZOMBIE_BUCKET3_ID = 0xEA,
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT_ID = 0xEB,
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT2_ID = 0xEC,
		IMAGE_REANIM_ZOMBIE_DIGGER_HARDHAT3_ID = 0xED,
		IMAGE_REANIM_ZOMBIE_SCREENDOOR1_ID = 0xEE,
		IMAGE_REANIM_ZOMBIE_SCREENDOOR2_ID = 0xEF,
		IMAGE_REANIM_ZOMBIE_SCREENDOOR3_ID = 0xF0,
		IMAGE_REANIM_ZOMBIE_FLAG1_ID = 0xF1,
		IMAGE_REANIM_ZOMBIE_FLAG2_ID = 0xF2,
		IMAGE_REANIM_ZOMBIE_FLAG3_ID = 0xF3,
		IMAGE_REANIM_ZOMBIE_OUTERARM_UPPER2_ID = 0xF4,
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET_ID = 0xF5,
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET2_ID = 0xF6,
		IMAGE_REANIM_ZOMBIE_FOOTBALL_HELMET3_ID = 0xF7,
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_HAND_ID = 0xF8,
		IMAGE_REANIM_ZOMBIE_FOOTBALL_LEFTARM_UPPER2_ID = 0xF9,
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_UPPER2_ID = 0xFA,
		IMAGE_REANIM_ZOMBIE_PAPER_LEFTARM_LOWER_ID = 0xFB,
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER2_ID = 0xFC,
		IMAGE_REANIM_ZOMBIE_PAPER_PAPER3_ID = 0xFD,
		IMAGE_REANIM_ZOMBIE_PAPER_MADHEAD_ID = 0xFE,
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE1_ID = 0xFF,
		IMAGE_REANIM_ZOMBIE_ZAMBONI_1_DAMAGE2_ID = 0x100,
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE1_ID = 0x101,
		IMAGE_REANIM_ZOMBIE_ZAMBONI_2_DAMAGE2_ID = 0x102,
		IMAGE_REANIM_ZOMBIE_ZAMBONI_WHEEL_FLAT_ID = 0x103,
		IMAGE_REANIM_COIN_SILVER_DOLLAR_ID = 0x104,
		IMAGE_REANIM_COIN_GOLD_DOLLAR_ID = 0x105,
		IMAGE_REANIM_DIAMOND_ID = 0x106,
		IMAGE_REANIM_COINGLOW_ID = 0x107,
		IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_HAND_ID = 0x108,
		IMAGE_REANIM_ZOMBIE_JACKSON_OUTERARM_UPPER2_ID = 0x109,
		IMAGE_REANIM_ZOMBIE_DANCER_INNERARM_HAND_ID = 0x10A,
		IMAGE_REANIM_ZOMBIE_POLEVAULTER_OUTERARM_UPPER2_ID = 0x10B,
		IMAGE_REANIM_ZOMBIE_OUTERARM_HAND_ID = 0x10C,
		IMAGE_REANIM_ZOMBIE_BALLOON_OUTERARM_UPPER2_ID = 0x10D,
		IMAGE_REANIM_ZOMBIE_IMP_ARM1_BONE_ID = 0x10E,
		IMAGE_REANIM_ZOMBIE_IMP_ARM2_ID = 0x10F,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_2_ID = 0x110,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_BODY1_3_ID = 0x111,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_DUCKXING_ID = 0x112,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_ZOMBIE_ID = 0x113,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_FOOT2_ID = 0x114,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_ID = 0x115,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_OUTERARM_LOWER2_ID = 0x116,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD2_REDEYE_ID = 0x117,
		IMAGE_REANIM_ZOMBIE_GARGANTUAR_HEAD_REDEYE_ID = 0x118,
		IMAGE_REANIM_ZOMBIE_DIGGER_OUTERARM_UPPER2_ID = 0x119,
		IMAGE_REANIM_ZOMBIE_DOLPHINRIDER_OUTERARM_UPPER2_ID = 0x11A,
		IMAGE_REANIM_ZOMBIE_POGO_OUTERARM_UPPER2_ID = 0x11B,
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE1_ID = 0x11C,
		IMAGE_REANIM_ZOMBIE_POGO_STICKDAMAGE2_ID = 0x11D,
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE1_ID = 0x11E,
		IMAGE_REANIM_ZOMBIE_POGO_STICK2DAMAGE2_ID = 0x11F,
		IMAGE_REANIM_ZOMBIE_POGO_STICKHANDS2_ID = 0x120,
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_UPPER2_ID = 0x121,
		IMAGE_REANIM_ZOMBIE_BOBSLED_OUTERARM_HAND_ID = 0x122,
		IMAGE_REANIM_ZOMBIE_JACKBOX_BOX_ID = 0x123,
		IMAGE_REANIM_ZOMBIE_JACKBOX_OUTERARM_LOWER2_ID = 0x124,
		IMAGE_REANIM_ZOMBIE_SNORKLE_OUTERARM_UPPER2_ID = 0x125,
		IMAGE_REANIM_ZOMBIE_BUNGI_HEAD_SCARED_ID = 0x126,
		IMAGE_REANIM_ZOMBIE_CATAPULT_BASKETBALL_ID = 0x127,
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_ID = 0x128,
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_ID = 0x129,
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_WITHBALL_ID = 0x12A,
		IMAGE_REANIM_ZOMBIE_CATAPULT_POLE_DAMAGE_WITHBALL_ID = 0x12B,
		IMAGE_REANIM_ZOMBIE_CATAPULT_SIDING_DAMAGE_ID = 0x12C,
		IMAGE_REANIM_ZOMBIE_LADDER_1_ID = 0x12D,
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE1_ID = 0x12E,
		IMAGE_REANIM_ZOMBIE_LADDER_1_DAMAGE2_ID = 0x12F,
		IMAGE_REANIM_ZOMBIE_LADDER_5_ID = 0x130,
		IMAGE_REANIM_ZOMBIE_LADDER_OUTERARM_UPPER2_ID = 0x131,
		IMAGE_REANIM_ZOMBIE_BOSS_ICEBALL_ID = 0x132,
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE1_ID = 0x133,
		IMAGE_REANIM_ZOMBIE_BOSS_HEAD_DAMAGE2_ID = 0x134,
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE1_ID = 0x135,
		IMAGE_REANIM_ZOMBIE_BOSS_JAW_DAMAGE2_ID = 0x136,
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE1_ID = 0x137,
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_HAND_DAMAGE2_ID = 0x138,
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE1_ID = 0x139,
		IMAGE_REANIM_ZOMBIE_BOSS_OUTERARM_THUMB_DAMAGE2_ID = 0x13A,
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE1_ID = 0x13B,
		IMAGE_REANIM_ZOMBIE_BOSS_FOOT_DAMAGE2_ID = 0x13C,
		IMAGE_REANIM_ZOMBIE_BOSS_EYEGLOW_BLUE_ID = 0x13D,
		IMAGE_REANIM_ZOMBIE_BOSS_MOUTHGLOW_BLUE_ID = 0x13E,
		IMAGE_REANIM_CABBAGEPULT_CABBAGE_ID = 0x13F,
		IMAGE_REANIM_CORNPULT_KERNAL_ID = 0x140,
		IMAGE_REANIM_CORNPULT_BUTTER_ID = 0x141,
		IMAGE_REANIM_CORNPULT_BUTTER_SPLAT_ID = 0x142,
		IMAGE_REANIM_MELONPULT_MELON_ID = 0x143,
		IMAGE_REANIM_WINTERMELON_PROJECTILE_ID = 0x144,
		IMAGE_REANIM_ZOMBIE_DIGGER_PICKAXE_ID = 0x145,
		IMAGE_REANIM_ZOMBIE_HEAD_GROSSOUT_ID = 0x146,
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES1_ID = 0x147,
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES2_ID = 0x148,
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES3_ID = 0x149,
		IMAGE_REANIM_ZOMBIE_HEAD_SUNGLASSES4_ID = 0x14A,
		IMAGE_REANIM_GARLIC_BODY2_ID = 0x14B,
		IMAGE_REANIM_GARLIC_BODY3_ID = 0x14C,
		IMAGE_REANIM_COBCANNON_COB_ID = 0x14D,
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_UPPER2_ID = 0x14E,
		IMAGE_REANIM_ZOMBIE_YETI_OUTERARM_HAND_ID = 0x14F,
		IMAGE_REANIM_ZOMBIE_SNORKLE_HEAD_ID = 0x150,
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_BUTTON_ID = 0x151,
		IMAGE_REANIM_SELECTORSCREEN_ADVENTURE_HIGHLIGHT_ID = 0x152,
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_BUTTON_ID = 0x153,
		IMAGE_REANIM_SELECTORSCREEN_STARTADVENTURE_HIGHLIGHT_ID = 0x154,
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_BUTTON_ID = 0x155,
		IMAGE_REANIM_SELECTORSCREEN_SURVIVAL_HIGHLIGHT_ID = 0x156,
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_BUTTON_ID = 0x157,
		IMAGE_REANIM_SELECTORSCREEN_CHALLENGES_HIGHLIGHT_ID = 0x158,
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_BUTTON_ID = 0x159,
		IMAGE_REANIM_SELECTORSCREEN_VASEBREAKER_HIGHLIGHT_ID = 0x15A,
		IMAGE_REANIM_SELECTORSCREEN_WOODSIGN2_PRESS_ID = 0x15B,
		IMAGE_REANIM_SELECTORSCREEN_BG_ID = 0x15C,
		IMAGE_REANIM_SELECTORSCREEN_ALMANAC_SHADOW_ID = 0x15D,
		IMAGE_REANIM_SELECTORSCREEN_KEY_SHADOW_ID = 0x15E,
		IMAGE_REANIM_TREE_BG_ID = 0x15F,
		IMAGE_REANIM_POT_TOP_DARK_ID = 0x160,
		IMAGE_REANIM_ZENGARDEN_BUGSPRAY_BOTTLE_ID = 0x161,
		IMAGE_REANIM_STINKY_TURN3_ID = 0x162,
		IMAGE_REANIM_CRAZYDAVE_MOUTH1_ID = 0x163,
		IMAGE_REANIM_CRAZYDAVE_MOUTH4_ID = 0x164,
		IMAGE_REANIM_CRAZYDAVE_MOUTH5_ID = 0x165,
		IMAGE_REANIM_CRAZYDAVE_MOUTH6_ID = 0x166,
		IMAGE_REANIM_ZOMBIE_MUSTACHE2_ID = 0x167,
		IMAGE_REANIM_ZOMBIE_MUSTACHE3_ID = 0x168,
		SOUND_AWOOGA_ID = 0x169,
		SOUND_BLEEP_ID = 0x16A,
		SOUND_BUZZER_ID = 0x16B,
		SOUND_CHOMP_ID = 0x16C,
		SOUND_CHOMP2_ID = 0x16D,
		SOUND_CHOMPSOFT_ID = 0x16E,
		SOUND_EVILLAUGH_ID = 0x16F,
		SOUND_FLOOP_ID = 0x170,
		SOUND_FROZEN_ID = 0x171,
		SOUND_GULP_ID = 0x172,
		SOUND_GROAN_ID = 0x173,
		SOUND_GROAN2_ID = 0x174,
		SOUND_GROAN3_ID = 0x175,
		SOUND_GROAN4_ID = 0x176,
		SOUND_GROAN5_ID = 0x177,
		SOUND_GROAN6_ID = 0x178,
		SOUND_LOSEMUSIC_ID = 0x179,
		SOUND_MINDCONTROLLED_ID = 0x17A,
		SOUND_PAUSE_ID = 0x17B,
		SOUND_PLANT_ID = 0x17C,
		SOUND_PLANT2_ID = 0x17D,
		SOUND_POINTS_ID = 0x17E,
		SOUND_SEEDLIFT_ID = 0x17F,
		SOUND_SIREN_ID = 0x180,
		SOUND_SLURP_ID = 0x181,
		SOUND_SPLAT_ID = 0x182,
		SOUND_SPLAT2_ID = 0x183,
		SOUND_SPLAT3_ID = 0x184,
		SOUND_SUKHBIR_ID = 0x185,
		SOUND_SUKHBIR2_ID = 0x186,
		SOUND_SUKHBIR3_ID = 0x187,
		SOUND_SUKHBIR4_ID = 0x188,
		SOUND_SUKHBIR5_ID = 0x189,
		SOUND_SUKHBIR6_ID = 0x18A,
		SOUND_TAP_ID = 0x18B,
		SOUND_TAP2_ID = 0x18C,
		SOUND_THROW_ID = 0x18D,
		SOUND_THROW2_ID = 0x18E,
		SOUND_BLOVER_ID = 0x18F,
		SOUND_WINMUSIC_ID = 0x190,
		SOUND_LAWNMOWER_ID = 0x191,
		SOUND_BOING_ID = 0x192,
		SOUND_JACKINTHEBOX_ID = 0x193,
		SOUND_DIAMOND_ID = 0x194,
		SOUND_DOLPHIN_APPEARS_ID = 0x195,
		SOUND_DOLPHIN_BEFORE_JUMPING_ID = 0x196,
		SOUND_POTATO_MINE_ID = 0x197,
		SOUND_ZAMBONI_ID = 0x198,
		SOUND_BALLOON_POP_ID = 0x199,
		SOUND_THUNDER_ID = 0x19A,
		SOUND_ZOMBIESPLASH_ID = 0x19B,
		SOUND_BOWLING_ID = 0x19C,
		SOUND_BOWLINGIMPACT_ID = 0x19D,
		SOUND_BOWLINGIMPACT2_ID = 0x19E,
		SOUND_GRAVEBUSTERCHOMP_ID = 0x19F,
		SOUND_GRAVEBUTTON_ID = 0x1A0,
		SOUND_LIMBS_POP_ID = 0x1A1,
		SOUND_PLANTERN_ID = 0x1A2,
		SOUND_POGO_ZOMBIE_ID = 0x1A3,
		SOUND_SNOW_PEA_SPARKLES_ID = 0x1A4,
		SOUND_PLANT_WATER_ID = 0x1A5,
		SOUND_ZOMBIE_ENTERING_WATER_ID = 0x1A6,
		SOUND_ZOMBIE_FALLING_1_ID = 0x1A7,
		SOUND_ZOMBIE_FALLING_2_ID = 0x1A8,
		SOUND_PUFF_ID = 0x1A9,
		SOUND_FUME_ID = 0x1AA,
		SOUND_HUGE_WAVE_ID = 0x1AB,
		SOUND_SLOT_MACHINE_ID = 0x1AC,
		SOUND_COIN_ID = 0x1AD,
		SOUND_ROLL_IN_ID = 0x1AE,
		SOUND_DIGGER_ZOMBIE_ID = 0x1AF,
		SOUND_HATCHBACK_CLOSE_ID = 0x1B0,
		SOUND_HATCHBACK_OPEN_ID = 0x1B1,
		SOUND_KERNELPULT_ID = 0x1B2,
		SOUND_KERNELPULT2_ID = 0x1B3,
		SOUND_ZOMBAQUARIUM_DIE_ID = 0x1B4,
		SOUND_BUNGEE_SCREAM_ID = 0x1B5,
		SOUND_BUNGEE_SCREAM2_ID = 0x1B6,
		SOUND_BUNGEE_SCREAM3_ID = 0x1B7,
		SOUND_BUTTER_ID = 0x1B8,
		SOUND_JACK_SURPRISE_ID = 0x1B9,
		SOUND_JACK_SURPRISE2_ID = 0x1BA,
		SOUND_NEWSPAPER_RARRGH_ID = 0x1BB,
		SOUND_NEWSPAPER_RARRGH2_ID = 0x1BC,
		SOUND_NEWSPAPER_RIP_ID = 0x1BD,
		SOUND_SQUASH_HMM_ID = 0x1BE,
		SOUND_SQUASH_HMM2_ID = 0x1BF,
		SOUND_VASE_BREAKING_ID = 0x1C0,
		SOUND_POOL_CLEANER_ID = 0x1C1,
		SOUND_MAGNETSHROOM_ID = 0x1C2,
		SOUND_LADDER_ZOMBIE_ID = 0x1C3,
		SOUND_GARGANTUAR_THUMP_ID = 0x1C4,
		SOUND_BASKETBALL_ID = 0x1C5,
		SOUND_FIREPEA_ID = 0x1C6,
		SOUND_IGNITE_ID = 0x1C7,
		SOUND_IGNITE2_ID = 0x1C8,
		SOUND_READYSETPLANT_ID = 0x1C9,
		SOUND_DOOMSHROOM_ID = 0x1CA,
		SOUND_EXPLOSION_ID = 0x1CB,
		SOUND_FINALWAVE_ID = 0x1CC,
		SOUND_REVERSE_EXPLOSION_ID = 0x1CD,
		SOUND_RVTHROW_ID = 0x1CE,
		SOUND_SHIELDHIT_ID = 0x1CF,
		SOUND_SHIELDHIT2_ID = 0x1D0,
		SOUND_BOSSEXPLOSION_ID = 0x1D1,
		SOUND_CHERRYBOMB_ID = 0x1D2,
		SOUND_BONK_ID = 0x1D3,
		SOUND_SWING_ID = 0x1D4,
		SOUND_RAIN_ID = 0x1D5,
		SOUND_LIGHTFILL_ID = 0x1D6,
		SOUND_PLASTICHIT_ID = 0x1D7,
		SOUND_PLASTICHIT2_ID = 0x1D8,
		SOUND_JALAPENO_ID = 0x1D9,
		SOUND_BALLOONINFLATE_ID = 0x1DA,
		SOUND_BIGCHOMP_ID = 0x1DB,
		SOUND_MELONIMPACT_ID = 0x1DC,
		SOUND_MELONIMPACT2_ID = 0x1DD,
		SOUND_PLANTGROW_ID = 0x1DE,
		SOUND_SHOOP_ID = 0x1DF,
		SOUND_TAPGLASS_ID = 0x1E0,
		SOUND_JUICY_ID = 0x1E1,
		SOUND_COFFEE_ID = 0x1E2,
		SOUND_WAKEUP_ID = 0x1E3,
		SOUND_LOWGROAN_ID = 0x1E4,
		SOUND_LOWGROAN2_ID = 0x1E5,
		SOUND_PRIZE_ID = 0x1E6,
		SOUND_YUCK_ID = 0x1E7,
		SOUND_YUCK2_ID = 0x1E8,
		SOUND_GRASSSTEP_ID = 0x1E9,
		SOUND_SHOVEL_ID = 0x1EA,
		SOUND_COBLAUNCH_ID = 0x1EB,
		SOUND_WATERING_ID = 0x1EC,
		SOUND_POLEVAULT_ID = 0x1ED,
		SOUND_GRAVESTONE_RUMBLE_ID = 0x1EE,
		SOUND_DIRT_RISE_ID = 0x1EF,
		SOUND_FERTILIZER_ID = 0x1F0,
		SOUND_PORTAL_ID = 0x1F1,
		SOUND_BUGSPRAY_ID = 0x1F2,
		SOUND_SCREAM_ID = 0x1F3,
		SOUND_PAPER_ID = 0x1F4,
		SOUND_MONEYFALLS_ID = 0x1F5,
		SOUND_IMP_ID = 0x1F6,
		SOUND_IMP2_ID = 0x1F7,
		SOUND_HYDRAULIC_SHORT_ID = 0x1F8,
		SOUND_HYDRAULIC_ID = 0x1F9,
		SOUND_GARGANTUDEATH_ID = 0x1FA,
		SOUND_CERAMIC_ID = 0x1FB,
		SOUND_BOSSBOULDERATTACK_ID = 0x1FC,
		SOUND_CHIME_ID = 0x1FD,
		SOUND_CRAZYDAVESHORT1_ID = 0x1FE,
		SOUND_CRAZYDAVESHORT2_ID = 0x1FF,
		SOUND_CRAZYDAVESHORT3_ID = 0x200,
		SOUND_CRAZYDAVELONG1_ID = 0x201,
		SOUND_CRAZYDAVELONG2_ID = 0x202,
		SOUND_CRAZYDAVELONG3_ID = 0x203,
		SOUND_CRAZYDAVEEXTRALONG1_ID = 0x204,
		SOUND_CRAZYDAVEEXTRALONG2_ID = 0x205,
		SOUND_CRAZYDAVEEXTRALONG3_ID = 0x206,
		SOUND_CRAZYDAVECRAZY_ID = 0x207,
		SOUND_PHONOGRAPH_ID = 0x208,
		SOUND_DANCER_ID = 0x209,
		SOUND_FINALFANFARE_ID = 0x20A,
		SOUND_CRAZYDAVESCREAM_ID = 0x20B,
		SOUND_CRAZYDAVESCREAM2_ID = 0x20C,
		IMAGE_BACKGROUND1_ID = 0x20D,
		IMAGE_BACKGROUND1_GAMEOVER_INTERIOR_OVERLAY_ID = 0x20E,
		IMAGE_BACKGROUND1_GAMEOVER_MASK_ID = 0x20F,
		IMAGE_BACKGROUND1UNSODDED_ID = 0x210,
		IMAGE_SOD1ROW_ID = 0x211,
		IMAGE_SOD3ROW_ID = 0x212,
		IMAGE_BACKGROUND2_ID = 0x213,
		IMAGE_BACKGROUND2_GAMEOVER_INTERIOR_OVERLAY_ID = 0x214,
		IMAGE_BACKGROUND2_GAMEOVER_MASK_ID = 0x215,
		IMAGE_BACKGROUND3_ID = 0x216,
		IMAGE_BACKGROUND3_GAMEOVER_INTERIOR_OVERLAY_ID = 0x217,
		IMAGE_BACKGROUND3_GAMEOVER_MASK_ID = 0x218,
		IMAGE_BACKGROUND4_ID = 0x219,
		IMAGE_BACKGROUND4_GAMEOVER_INTERIOR_OVERLAY_ID = 0x21A,
		IMAGE_BACKGROUND4_GAMEOVER_MASK_ID = 0x21B,
		IMAGE_FOG_ID = 0x21C,
		IMAGE_FOG_SOFTWARE_ID = 0x21D,
		IMAGE_BACKGROUND5_ID = 0x21E,
		IMAGE_BACKGROUND5_GAMEOVER_MASK_ID = 0x21F,
		IMAGE_BACKGROUND6BOSS_ID = 0x220,
		IMAGE_BACKGROUND6_GAMEOVER_MASK_ID = 0x221,
		IMAGE_BACKGROUND_MUSHROOMGARDEN_ID = 0x222,
		IMAGE_BACKGROUND_GREENHOUSE_ID = 0x223,
		IMAGE_BACKGROUND_GREENHOUSE_OVERLAY_ID = 0x224,
		IMAGE_AQUARIUM1_ID = 0x225,
		IMAGE_WAVECENTER_ID = 0x226,
		IMAGE_WAVESIDE_ID = 0x227,
		IMAGE_AWARDSCREEN_BACK_ID = 0x228,
		IMAGE_CHALLENGE_BACKGROUND_ID = 0x229,
		IMAGE_CHALLENGE_WINDOW_ID = 0x22A,
		IMAGE_CHALLENGE_WINDOW_HIGHLIGHT_ID = 0x22B,
		IMAGE_CHALLENGE_BLANK_ID = 0x22C,
		IMAGE_CHALLENGE_THUMBNAILS_ID = 0x22D,
		IMAGE_SURVIVAL_THUMBNAILS_ID = 0x22E,
		IMAGE_LOCK_ID = 0x22F,
		IMAGE_LOCK_OPEN_ID = 0x230,
		IMAGE_ALMANAC_INDEXBACK_ID = 0x231,
		IMAGE_ALMANAC_PLANTBACK_ID = 0x232,
		IMAGE_ALMANAC_ZOMBIEBACK_ID = 0x233,
		IMAGE_ALMANAC_PLANTCARD_ID = 0x234,
		IMAGE_ALMANAC_ZOMBIECARD_ID = 0x235,
		IMAGE_ALMANAC_ZOMBIEWINDOW_ID = 0x236,
		IMAGE_ALMANAC_ZOMBIEWINDOW2_ID = 0x237,
		IMAGE_ALMANAC_ZOMBIEBLANK_ID = 0x238,
		IMAGE_ALMANAC_GROUNDDAY_ID = 0x239,
		IMAGE_ALMANAC_GROUNDNIGHT_ID = 0x23A,
		IMAGE_ALMANAC_GROUNDPOOL_ID = 0x23B,
		IMAGE_ALMANAC_GROUNDNIGHTPOOL_ID = 0x23C,
		IMAGE_ALMANAC_GROUNDROOF_ID = 0x23D,
		IMAGE_ALMANAC_GROUNDICE_ID = 0x23E,
		IMAGE_ALMANAC_CLOSEBUTTON_ID = 0x23F,
		IMAGE_ALMANAC_CLOSEBUTTONHIGHLIGHT_ID = 0x240,
		IMAGE_ALMANAC_INDEXBUTTON_ID = 0x241,
		IMAGE_ALMANAC_INDEXBUTTONHIGHLIGHT_ID = 0x242,
		IMAGE_STORE_BACKGROUND_ID = 0x243,
		IMAGE_STORE_BACKGROUNDNIGHT_ID = 0x244,
		IMAGE_STORE_CAR_ID = 0x245,
		IMAGE_STORE_CAR_NIGHT_ID = 0x246,
		IMAGE_STORE_CARCLOSED_ID = 0x247,
		IMAGE_STORE_CARCLOSED_NIGHT_ID = 0x248,
		IMAGE_STORE_HATCHBACKOPEN_ID = 0x249,
		IMAGE_STORE_SIGN_ID = 0x24A,
		IMAGE_STORE_MAINMENUBUTTON_ID = 0x24B,
		IMAGE_STORE_MAINMENUBUTTONDOWN_ID = 0x24C,
		IMAGE_STORE_MAINMENUBUTTONHIGHLIGHT_ID = 0x24D,
		IMAGE_STORE_NEXTBUTTON_ID = 0x24E,
		IMAGE_STORE_NEXTBUTTONHIGHLIGHT_ID = 0x24F,
		IMAGE_STORE_NEXTBUTTONDISABLED_ID = 0x250,
		IMAGE_STORE_PREVBUTTON_ID = 0x251,
		IMAGE_STORE_PREVBUTTONHIGHLIGHT_ID = 0x252,
		IMAGE_STORE_PREVBUTTONDISABLED_ID = 0x253,
		IMAGE_STORE_PRICETAG_ID = 0x254,
		IMAGE_STORE_PACKETUPGRADE_ID = 0x255,
		IMAGE_STORE_LAWNMOWER_ID = 0x256,
		IMAGE_STORE_MUSHROOMGARDENICON_ID = 0x257,
		IMAGE_STORE_AQUARIUMGARDENICON_ID = 0x258,
		IMAGE_STORE_TREEOFWISDOMICON_ID = 0x259,
		IMAGE_STORE_FIRSTAIDWALLNUTICON_ID = 0x25A,
		IMAGE_ZOMBIE_NOTE_ID = 0x25B,
		IMAGE_ZOMBIE_NOTE1_ID = 0x25C,
		IMAGE_ZOMBIE_NOTE2_ID = 0x25D,
		IMAGE_ZOMBIE_NOTE3_ID = 0x25E,
		IMAGE_ZOMBIE_NOTE4_ID = 0x25F,
		IMAGE_ZOMBIE_FINAL_NOTE_ID = 0x260,
		FONT_BRIANNETOD32_ID = 0x261,
		FONT_BRIANNETOD32BLACK_ID = 0x262,
		IMAGE_REANIM_SUNFLOWER_HEAD_SING1_ID = 0x263,
		IMAGE_REANIM_SUNFLOWER_HEAD_SING2_ID = 0x264,
		IMAGE_REANIM_SUNFLOWER_HEAD_SING3_ID = 0x265,
		IMAGE_REANIM_SUNFLOWER_HEAD_SING4_ID = 0x266,
		IMAGE_REANIM_SUNFLOWER_HEAD_SING5_ID = 0x267,
		IMAGE_REANIM_SUNFLOWER_HEAD_WINK_ID = 0x268,
		IMAGE_REANIM_CREDITS_DISCOLIGHTS_ID = 0x269,
		IMAGE_REANIM_CREDITS_FOGMACHINE_ID = 0x26A,
		IMAGE_CREDITS_ZOMBIENOTE_ID = 0x26B,
		IMAGE_CREDITS_PLAYBUTTON_ID = 0x26C,
		RESOURCE_ID_MAX = 0x26D
	};
	enum DrawMode
	{
		DRAWMODE_NORMAL = 0x0,
		DRAWMODE_ADDITIVE = 0x1
	};
	enum LayoutFlags
	{
		LAY_SameWidth = 0x1,
		LAY_SameHeight = 0x2,
		LAY_SetLeft = 0x10,
		LAY_SetTop = 0x20,
		LAY_SetWidth = 0x40,
		LAY_SetHeight = 0x80,
		LAY_Above = 0x100,
		LAY_Below = 0x200,
		LAY_Right = 0x400,
		LAY_Left = 0x800,
		LAY_SameLeft = 0x1000,
		LAY_SameRight = 0x2000,
		LAY_SameTop = 0x4000,
		LAY_SameBottom = 0x8000,
		LAY_GrowToRight = 0x10000,
		LAY_GrowToLeft = 0x20000,
		LAY_GrowToTop = 0x40000,
		LAY_GrowToBottom = 0x80000,
		LAY_HCenter = 0x100000,
		LAY_VCenter = 0x200000,
		LAY_Max = 0x400000,
		LAY_SameSize = 0x3,
		LAY_SameCorner = 0x5000,
		LAY_SetPos = 0x30,
		LAY_SetSize = 0xC0
	};
	enum KeyCode
	{
		KEYCODE_UNKNOWN = 0x0,
		KEYCODE_LBUTTON = 0x1,
		KEYCODE_RBUTTON = 0x2,
		KEYCODE_CANCEL = 0x3,
		KEYCODE_MBUTTON = 0x4,
		KEYCODE_BACK = 0x8,
		KEYCODE_TAB = 0x9,
		KEYCODE_CLEAR = 0xC,
		KEYCODE_RETURN = 0xD,
		KEYCODE_SHIFT = 0x10,
		KEYCODE_CONTROL = 0x11,
		KEYCODE_MENU = 0x12,
		KEYCODE_PAUSE = 0x13,
		KEYCODE_CAPITAL = 0x14,
		KEYCODE_KANA = 0x15,
		KEYCODE_HANGEUL = 0x15,
		KEYCODE_HANGUL = 0x15,
		KEYCODE_JUNJA = 0x17,
		KEYCODE_FINAL = 0x18,
		KEYCODE_HANJA = 0x19,
		KEYCODE_KANJI = 0x19,
		KEYCODE_ESCAPE = 0x1B,
		KEYCODE_CONVERT = 0x1C,
		KEYCODE_NONCONVERT = 0x1D,
		KEYCODE_ACCEPT = 0x1E,
		KEYCODE_MODECHANGE = 0x1F,
		KEYCODE_SPACE = 0x20,
		KEYCODE_PRIOR = 0x21,
		KEYCODE_NEXT = 0x22,
		KEYCODE_END = 0x23,
		KEYCODE_HOME = 0x24,
		KEYCODE_LEFT = 0x25,
		KEYCODE_UP = 0x26,
		KEYCODE_RIGHT = 0x27,
		KEYCODE_DOWN = 0x28,
		KEYCODE_SELECT = 0x29,
		KEYCODE_PRINT = 0x2A,
		KEYCODE_EXECUTE = 0x2B,
		KEYCODE_SNAPSHOT = 0x2C,
		KEYCODE_INSERT = 0x2D,
		KEYCODE_DELETE = 0x2E,
		KEYCODE_HELP = 0x2F,
		KEYCODE_ASCIIBEGIN = 0x30,
		KEYCODE_ASCIIEND = 0x5A,
		KEYCODE_LWIN = 0x5B,
		KEYCODE_RWIN = 0x5C,
		KEYCODE_APPS = 0x5D,
		KEYCODE_NUMPAD0 = 0x60,
		KEYCODE_NUMPAD1 = 0x61,
		KEYCODE_NUMPAD2 = 0x62,
		KEYCODE_NUMPAD3 = 0x63,
		KEYCODE_NUMPAD4 = 0x64,
		KEYCODE_NUMPAD5 = 0x65,
		KEYCODE_NUMPAD6 = 0x66,
		KEYCODE_NUMPAD7 = 0x67,
		KEYCODE_NUMPAD8 = 0x68,
		KEYCODE_NUMPAD9 = 0x69,
		KEYCODE_MULTIPLY = 0x6A,
		KEYCODE_ADD = 0x6B,
		KEYCODE_SEPARATOR = 0x6C,
		KEYCODE_SUBTRACT = 0x6D,
		KEYCODE_DECIMAL = 0x6E,
		KEYCODE_DIVIDE = 0x6F,
		KEYCODE_F1 = 0x70,
		KEYCODE_F2 = 0x71,
		KEYCODE_F3 = 0x72,
		KEYCODE_F4 = 0x73,
		KEYCODE_F5 = 0x74,
		KEYCODE_F6 = 0x75,
		KEYCODE_F7 = 0x76,
		KEYCODE_F8 = 0x77,
		KEYCODE_F9 = 0x78,
		KEYCODE_F10 = 0x79,
		KEYCODE_F11 = 0x7A,
		KEYCODE_F12 = 0x7B,
		KEYCODE_F13 = 0x7C,
		KEYCODE_F14 = 0x7D,
		KEYCODE_F15 = 0x7E,
		KEYCODE_F16 = 0x7F,
		KEYCODE_F17 = 0x80,
		KEYCODE_F18 = 0x81,
		KEYCODE_F19 = 0x82,
		KEYCODE_F20 = 0x83,
		KEYCODE_F21 = 0x84,
		KEYCODE_F22 = 0x85,
		KEYCODE_F23 = 0x86,
		KEYCODE_F24 = 0x87,
		KEYCODE_NUMLOCK = 0x90,
		KEYCODE_SCROLL = 0x91,
		KEYCODE_ASCIIBEGIN2 = 0xB3,
		KEYCODE_ASCIIEND2 = 0xE0
	};
	enum AnimType
	{
		ANIMTYPE_NONE = 0x0,
		ANIMTYPE_ONCE = 0x1,
		ANIMTYPE_PINGPONG = 0x2,
		ANIMTYPE_LOOP = 0x3
	};
	enum ButtonLabelAlignment
	{
		BUTTON_LABEL_LEFT = 0xFFFFFFFF,
		BUTTON_LABEL_CENTER = 0x0,
		BUTTON_LABEL_RIGHT = 0x1
	};
	enum Justification
	{
		JUSTIFY_LEFT = 0x0,
		JUSTIFY_CENTER = 0x1,
		JUSTIFY_RIGHT = 0x2
	};
	enum UpdateMode
	{
		UPDATE_MODE_IDLE = 0x0,
		UPDATE_MODE_PGUP = 0x1,
		UPDATE_MODE_PGDN = 0x2
	};
	enum D3DImageFlags
	{
		D3DImageFlag_MinimizeNumSubdivisions = 0x1,
		D3DImageFlag_Use64By64Subdivisions = 0x2,
		D3DImageFlag_UseA4R4G4B4 = 0x4,
		D3DImageFlag_UseA8R8G8B8 = 0x8
	};
	enum DDResult
	{
		DDRESULT_OK = 0x0,
		DDRESULT_FAIL = 0x1,
		DDRESULT_DD_CREATE_FAIL = 0x2,
		DDRESULT_SURFACE_FAIL = 0x3,
		DDRESULT_EXCLUSIVE_FAIL = 0x4,
		DDRESULT_DISPCHANGE_FAIL = 0x5,
		DDRESULT_INVALID_COLORDEPTH = 0x6,
		DDRESULT_3D_FAIL = 0x7
	};
	enum HTTPResult
	{
		HTTPRESULT_DONE = 0x0,
		HTTPRESULT_NOT_STARTED = 0x1,
		HTTPRESULT_NOT_COMPLETED = 0x2,
		HTTPRESULT_NOT_FOUND = 0x3,
		HTTPRESULT_HTTP_ERROR = 0x4,
		HTTPRESULT_ABORTED = 0x5,
		HTTPRESULT_SOCKET_ERROR = 0x6,
		HTTPRESULT_INVALID_ADDR = 0x7,
		HTTPRESULT_CONNECT_FAIL = 0x8,
		HTTPRESULT_DISCONNECTED = 0x9
	};
	enum ResType
	{
		ResType_Image = 0x0,
		ResType_Sound = 0x1,
		ResType_Font = 0x2
	};
	enum EncodingType
	{
		ENCODING_ASCII = 0x0,
		ENCODING_UTF_8 = 0x1,
		ENCODING_UTF_16 = 0x2,
		ENCODING_UTF_16_LE = 0x3,
		ENCODING_UTF_16_BE = 0x4
	};
	enum CharReturnType
	{
		CHARRET_SUCCESSFUL = 0x0,
		CHARRET_INVALID_CHARACTER = 0x1,
		CHARRET_END_OF_FILE = 0x2,
		CHARRET_FAILURE = 0x3
	};
	enum CmdSeparator
	{
		CMDSEP_SEMICOLON = 0x1,
		CMDSEP_NO_INDENT = 0x2
	};
	enum PixelFormat
	{
		PixelFormat_Unknown = 0x0,
		PixelFormat_A8R8G8B8 = 0x1,
		PixelFormat_A4R4G4B4 = 0x2,
		PixelFormat_R5G6B5 = 0x4,
		PixelFormat_Palette8 = 0x8
	};
	enum XMLElementType
	{
		XMLTYPE_NONE = 0x0,
		XMLTYPE_START = 0x1,
		XMLTYPE_END = 0x2,
		XMLTYPE_ELEMENT = 0x3,
		XMLTYPE_INSTRUCTION = 0x4,
		XMLTYPE_COMMENT = 0x5
	};
}

#pragma region Other Enums
enum BossPart
{
	BOSS_PART_BACK_LEG = 0x0,
	BOSS_PART_FRONT_LEG = 0x1,
	BOSS_PART_MAIN = 0x2,
	BOSS_PART_BACK_ARM = 0x3,
	BOSS_PART_FIREBALL = 0x4
};
enum GameObjectType
{
  OBJECT_TYPE_NONE = 0x0,
  OBJECT_TYPE_PLANT = 0x1,
  OBJECT_TYPE_PROJECTILE = 0x2,
  OBJECT_TYPE_COIN = 0x3,
  OBJECT_TYPE_SEEDPACKET = 0x4,
  OBJECT_TYPE_SHOVEL = 0x5,
  OBJECT_TYPE_WATERING_CAN = 0x6,
  OBJECT_TYPE_FERTILIZER = 0x7,
  OBJECT_TYPE_BUG_SPRAY = 0x8,
  OBJECT_TYPE_PHONOGRAPH = 0x9,
  OBJECT_TYPE_CHOCOLATE = 0xA,
  OBJECT_TYPE_GLOVE = 0xB,
  OBJECT_TYPE_MONEY_SIGN = 0xC,
  OBJECT_TYPE_WHEELBARROW = 0xD,
  OBJECT_TYPE_TREE_FOOD = 0xE,
  OBJECT_TYPE_NEXT_GARDEN = 0xF,
  OBJECT_TYPE_MENU_BUTTON = 0x10,
  OBJECT_TYPE_STORE_BUTTON = 0x11,
  OBJECT_TYPE_SLOT_MACHINE_HANDLE = 0x12,
  OBJECT_TYPE_SCARY_POT = 0x13,
  OBJECT_TYPE_STINKY = 0x14,
  OBJECT_TYPE_TREE_OF_WISDOM = 0x15
};

#pragma endregion
