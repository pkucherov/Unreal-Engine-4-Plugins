// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "PluginsGameMode.h"
#include "Plugins.h"

#include "PluginsCharacter.h"

APluginsGameMode::APluginsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
