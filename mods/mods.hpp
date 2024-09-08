#pragma once
#include "Luna/Hook/LunaHook.hpp"
#include <filesystem>
#include <string.h>

namespace mods
{
	bool __inline checkMod(std::string modName)
	{
		return std::filesystem::exists("mods/" + modName);
	}

	void Vinesweeper(LunaHookThread*);
}