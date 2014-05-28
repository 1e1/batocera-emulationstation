#pragma once

#include <map>

namespace PlatformIds
{
	enum PlatformId : unsigned int
	{
		PLATFORM_UNKNOWN = 0,

		THREEDO = 1, //name can't start with a constant
		AMIGA = 2,
		ARCADE = 3,
		ATARI_2600 = 4,
		ATARI_5200 = 5,
		ATARI_7800 = 6,
		ATARI_JAGUAR = 7,
		ATARI_JAGUAR_CD = 8,
		ATARI_XE = 9,
		COLECOVISION = 10,
		COMMODORE_64 = 11,
		INTELLIVISION = 12,
		MAC_OS = 13,
		XBOX = 14,
		XBOX_360 = 15,
		NEOGEO = 16,
		NEOGEO_POCKET = 17,
		NEOGEO_POCKET_COLOR = 18,
		NINTENDO_3DS = 19,
		NINTENDO_64 = 20,
		NINTENDO_DS = 21,
		NINTENDO_ENTERTAINMENT_SYSTEM = 22,
		GAME_BOY = 23,
		GAME_BOY_ADVANCE = 24,
		GAME_BOY_COLOR = 25,
		NINTENDO_GAMECUBE = 26,
		NINTENDO_WII = 27,
		NINTENDO_WII_U = 28,
		PC = 29,
		SEGA_32X = 30,
		SEGA_CD = 31,
		SEGA_DREAMCAST = 32,
		SEGA_GAME_GEAR = 33,
		SEGA_GENESIS = 34,
		SEGA_MASTER_SYSTEM = 35,
		SEGA_MEGA_DRIVE = 36,
		SEGA_SATURN = 37,
		PLAYSTATION = 38,
		PLAYSTATION_2 = 39,
		PLAYSTATION_3 = 40,
		PLAYSTATION_4 = 41,
		PLAYSTATION_VITA = 42,
		PLAYSTATION_PORTABLE = 43,
		SUPER_NINTENDO = 44,
		TURBOGRAFX_16 = 45,
		ZX_SPECTRUM = 46,

		PLATFORM_IGNORE = 47, // do not allow scraping for this system
		PLATFORM_COUNT = 48
	};

	PlatformId getPlatformId(const char* str);
	const char* getPlatformName(PlatformId id);

	const char* getCleanMameName(const char* from);
}
