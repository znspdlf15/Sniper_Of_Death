// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Sniper_Of_DeathGameMode.h"
#include "Sniper_Of_DeathHUD.h"
#include "Sniper_Of_DeathCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASniper_Of_DeathGameMode::ASniper_Of_DeathGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ASniper_Of_DeathHUD::StaticClass();
}
