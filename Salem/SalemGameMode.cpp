// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Salem.h"
#include "SalemGameMode.h"
#include "SalemPlayerController.h"
#include "SalemCharacter.h"

ASalemGameMode::ASalemGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASalemPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}