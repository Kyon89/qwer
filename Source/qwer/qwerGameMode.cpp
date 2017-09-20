// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "qwerGameMode.h"
#include "qwerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AqwerGameMode::AqwerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/NewBlueprint"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
