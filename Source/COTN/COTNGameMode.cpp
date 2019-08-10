// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "COTNGameMode.h"
#include "COTNPlayerController.h"
#include "COTNCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACOTNGameMode::ACOTNGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACOTNPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}