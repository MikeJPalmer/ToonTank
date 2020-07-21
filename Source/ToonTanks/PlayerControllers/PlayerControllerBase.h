// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
public:

	void SetPlayerEnabledState(bool SetPlayerEnabled);

};
