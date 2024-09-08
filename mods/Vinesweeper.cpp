#include <iostream>

#include "mods.hpp"
#include "Lunacy/Lunacy.hpp"
#include "ModReader.h"

LunaHookThread* ltt;
Sexy::Image* MineNumbers;

int max_mines;
int adj_ichance;
int low_ichance;
int mid_ichance;
int high_ichance;
int max_dist;
int wallnut_hp;
int auto_clear_zeros;
int guarantee_first_click;
int guarantee_first_click_zero;

void __stdcall Init(Challenge* self)
{
	auto App = LawnApp::GetApp();
	auto aLawn = App->mLawn;

	if (App->mGameMode != GAMEMODE_CHALLENGE_BEGHOULED_TWIST) return;

	// Force randomization
	for (int i = 0; i < App->mRandSeed; i += 10)
		rand();

	ltt->SetSkip(true);
	aLawn->mBackground = BACKGROUND_1_DAY;
	aLawn->LoadBackground();
	aLawn->mSeedBank->mVisible = false;

	self->mChallengeGridX = -1;
	self->mChallengeGridY = -1;

	auto MaxMines = max_mines;
	auto LowRow = MaxMines / 5 - 1;
	auto HighRow = MaxMines / 5 + 1;
	auto TotalMines = 0;
	bool IsHighRow = rand() % 2;
	for (int row = 0; row < 5; row++)
	{
		auto TotalRowMines = 0;
		auto MaxRowMines = IsHighRow ? HighRow : LowRow;
		auto LastMineCol = -1;
		auto LastMineRow = -1;

		for (int col = 0; col < 9; col++)
		{
			auto aWallnut = aLawn->NewPlant(col, row, SEED_WALLNUT, SEED_NONE);
			auto Chance = (int)round(sqrt(pow(LastMineCol - col, 2) + pow(LastMineRow - row, 2)));
			aWallnut->mHealth = wallnut_hp;
			aWallnut->mMaxHealth = wallnut_hp;

			if (TotalRowMines == MaxRowMines) continue;
			if (TotalMines == MaxMines) continue;

			if (Chance > max_dist) goto MakeMine;
			if (Chance == 0)
			{
				// Adjacent Chance
				if (rand() % adj_ichance == 0) goto MakeMine;
				else continue;
			}
			if (Chance == 1)
			{
				// Low Chance
				if (rand() % low_ichance == 0) goto MakeMine;
				else continue;
			}
			if (Chance == 2)
			{
				// Medium Chance
				if (rand() % mid_ichance == 0) goto MakeMine;
				else continue;
			}
			if (Chance == 3)
			{
				// High Chance
				if (rand() % high_ichance == 0) goto MakeMine;
				else continue;
			}

			// If distance from last mine > 3, make a mine
		MakeMine:
			LastMineCol = col;
			LastMineRow = row;

			aWallnut->mActionTimer = 1;

			TotalRowMines++;
			TotalMines++;
		}
		IsHighRow != IsHighRow;
	}
}

void __stdcall Update(Challenge* self)
{
	auto App = LawnApp::GetApp();
	auto aLawn = App->mLawn;

	if (App->mGameMode != GAMEMODE_CHALLENGE_BEGHOULED_TWIST) return;
	if (self->mLawn->mLevelAwardSpawned) return;
	if (self->mLawn->mMainCounter == 1)
		strcpy_s(aLawn->mAdvice->mLabel, "Left-click to dig up wallnuts. Right-click to mark it as a mine.");

	ltt->SetSkip(true);

	auto aPlant = self->mLawn->mPlants.GetNext();
	while (aPlant)
	{
		// Not all plants are mines, return.
		if (aPlant->mActionTimer != 1) return;
		// Not all mines are marked, return.
		if (aPlant->mType != SEED_EXPLODE_O_NUT) return;
		aPlant = self->mLawn->mPlants.GetNext(aPlant);
	}

	// All checks passed
	self->mLawn->KillAllZombies();
	self->mLawn->NewPickup(PICKUP_TROPHY, 400, 250);
	self->mLawn->mLevelAwardSpawned = true;
}

void __stdcall PlantShoveled(Plant* aPlant)
{
	auto App = LawnApp::GetApp();
	if (aPlant->mLawn->mLevelAwardSpawned) return;
	if (App->mGameMode != GAMEMODE_CHALLENGE_BEGHOULED_TWIST) return;

	// If the plant was just switched from mine to normal
	if (aPlant->mActionTimer == -1) return;

	// Guarantee the first wallnut is not a mine and is surrounded by 0 mines.
	if (aPlant->mLawn->mPlantsShoveled <= 1 && guarantee_first_click)
	{
		if (!guarantee_first_click_zero) goto Safe;
		auto aWallnuts = aPlant->GetPlantsAround();
		for (auto aWallnut : aWallnuts)
			aWallnut->mActionTimer = 0;
		goto Safe;
	}

	if (aPlant->mActionTimer == 1)
	{
		aPlant->mApp->AddParticles(PARTICLE_DOOM, aPlant->mX + aPlant->mWidth / 2, aPlant->mY + aPlant->mHeight / 2);
		auto aZombie = aPlant->mLawn->NewZombie(ZOMBIE_GARGANTUAR, 3);
		aZombie->mPosX = -aZombie->mWidth * 1.2;
		aZombie->WalkIntoHouse();
		return;
	}

Safe:
	aPlant->mColumn = aPlant->mLawn->PixelToGridX(aPlant->mX, aPlant->mY);
	aPlant->mRow = aPlant->mLawn->PixelToGridY(aPlant->mX, aPlant->mY);

	auto aCrater = aPlant->mLawn->AddCrater(aPlant->mColumn, aPlant->mRow)->mGridItemCounter = 9e5;
}

LunaHookThread::LunaWrapper Orig_DrawCrater;
void __stdcall DrawCrater(GridItem* aItem, Sexy::Graphics* G)
{
	auto aLawn = aItem->mLawn;
	auto App = LawnApp::GetApp();
	if (App->mGameMode != GAMEMODE_CHALLENGE_BEGHOULED_TWIST) return;

	if (!MineNumbers)
		MineNumbers = aItem->mApp->GetImage("images/MineNumbers", true);

	int MineCount = 0;
	auto aWallnuts = aItem->GetPlantsAround(1, 1);

	for (auto aWallnut : aWallnuts)
		MineCount += (aWallnut->mActionTimer == 1);

	if (MineCount == 0 && auto_clear_zeros)
		for (auto aWallnut : aWallnuts)
		{
			aWallnut->mHealth = -1;
			aLawn->mPlantsShoveled++;
		}

	ltt->SetSkip(true);
	Orig_DrawCrater(aItem, G);

	auto Area = aItem->GetHitbox().GetCenter();
	G->DrawImage(MineNumbers, Area.mX - 32, Area.mY - 32, Sexy::IRect(MineCount * 64, 0, 64, 64));
}

void __stdcall VinesweeperMD(Challenge* self, int x, int y, ClickCode c, HitResult* hr)
{
	if (self->mLawn->mLevelAwardSpawned) return;
	if (LawnApp::GetApp()->mGameMode != GAMEMODE_CHALLENGE_BEGHOULED_TWIST) return;

	ltt->SetSkip(true);
	if (self->mLawn->mMainCounter <= 1) return;
	if (hr->mType != GameObjectType::OBJECT_TYPE_PLANT) return;

	if (c == LEFTCLICK)
	{
		// Dig up
		auto aPlant = (Plant*)hr->aObject;
		aPlant->mHealth = -1;
		self->mLawn->mPlantsShoveled++;
	}
	else if (c == RIGHTCLICK)
	{
		// Mark/unmark as mine
		auto aPlant = (Plant*)hr->aObject;
		auto aState = aPlant->mActionTimer;
		auto aHealth = aPlant->mHealth;
		auto aType = (aPlant->mType == SEED_WALLNUT) ? SEED_EXPLODE_O_NUT : SEED_WALLNUT;
		
		aPlant->mActionTimer = -1;
		aPlant->mHealth = -1;

		auto aNew = aPlant->mLawn->NewPlant(aPlant->mCol, aPlant->mRow, aType, SEED_NONE);
		aNew->mMaxHealth = wallnut_hp;
		aNew->mActionTimer = aState;
		aNew->mHealth = aHealth;
	}
}

void mods::Vinesweeper(LunaHookThread* _lt)
{
	ltt = _lt;

	auto aMod = ModReader("VINESWEEPER");

	if (aMod.enabled)
		std::cout << "=============== Vinesweeper Settings ===============\n";
	else
		std::cout << "Vinesweeper Disabled.\n";
	for (auto aProp : aMod.values)
		std::cout << aProp.first << " : " << aProp.second << "\n";
	std::cout << "\n";

	if (!aMod.enabled) return;

	// Loading Mod Settings
	loadint(max_mines);
	loadint(adj_ichance);
	loadint(low_ichance);
	loadint(mid_ichance);
	loadint(high_ichance);
	loadint(max_dist);
	loadint(wallnut_hp);
	loadint(auto_clear_zeros);
	loadint(guarantee_first_click);
	loadint(guarantee_first_click_zero);

	adj_ichance = max(1, adj_ichance);
	low_ichance = max(1, low_ichance);
	mid_ichance = max(1, mid_ichance);
	high_ichance = max(1, high_ichance);

	auto aFunc = ltt->NewFunction(0x41F380);
	aFunc->AddParameter(ltt->EDI);
	aFunc->Finalize(Init);

	aFunc = ltt->NewFunction(0x4246B0);
	aFunc->AddParameter(ltt->EAX);
	aFunc->Finalize(Update);

	aFunc = ltt->NewFunction(0x4679B0);
	aFunc->AddParameter();
	aFunc->Finalize(PlantShoveled);

	aFunc = ltt->NewFunction(0x44D860);
	aFunc->AddStackParameters(2);
	Orig_DrawCrater = aFunc->FinalizeAndWrap(DrawCrater);

	aFunc = ltt->NewFunction(0x421F10);
	aFunc->AddStackParameters(4);
	aFunc->AddParameter(ltt->EAX);
	aFunc->Finalize(VinesweeperMD);
}