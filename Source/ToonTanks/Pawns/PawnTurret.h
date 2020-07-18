// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.

#pragma once

#include "CoreMinimal.h"
#include "PawnBase.h"
#include "PawnTurret.generated.h"

class APawnTank;

/**
 * 
 */
UCLASS()
class TOONTANKS_API APawnTurret : public APawnBase
{
	GENERATED_BODY()
	
private:

	void CheckFireCondition();

	float ReturnDistanceToPlayer();

	FTimerHandle FireRateTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRate = 2.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	float FireRange = 500.f;

	APawnTank* PlayerPawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void HandleDestruction() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
