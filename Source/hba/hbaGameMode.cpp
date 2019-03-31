// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "hbaGameMode.h"
#include "hbaHUD.h"
#include "hbaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AhbaGameMode::AhbaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AhbaHUD::StaticClass();
}
