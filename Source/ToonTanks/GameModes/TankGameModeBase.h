// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
private:

	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);

protected:

	virtual void BeginPlay() override;
	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();
	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool PlayerWon);

public:

	void ActorDied(AActor* DeadActor);

};
