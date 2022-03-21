// Copyright Epic Games, Inc. All Rights Reserved.

#include "First_GunGameMode.h"
#include "First_GunHUD.h"
#include "First_GunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFirst_GunGameMode::AFirst_GunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFirst_GunHUD::StaticClass();
}
