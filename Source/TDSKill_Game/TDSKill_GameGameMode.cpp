// Copyright Epic Games, Inc. All Rights Reserved.

#include "TDSKill_GameGameMode.h"
#include "TDSKill_GamePlayerController.h"
#include "TDSKill_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATDSKill_GameGameMode::ATDSKill_GameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATDSKill_GamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}