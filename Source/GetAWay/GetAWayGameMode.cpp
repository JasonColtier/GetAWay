// Copyright Epic Games, Inc. All Rights Reserved.

#include "GetAWayGameMode.h"
#include "GetAWayPlayerController.h"
#include "GetAWayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGetAWayGameMode::AGetAWayGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGetAWayPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}