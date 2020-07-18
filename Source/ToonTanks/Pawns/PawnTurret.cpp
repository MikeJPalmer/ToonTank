// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);

	PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APawnTurret::CheckFireCondition()
{
	// If Player == null || is Dead THEN BAIL!!

	if (!PlayerPawn) { return; }

	// If Player IS in range THEN FIRE!!

	if (ReturnDistanceToPlayer() <= FireRange)
	{
		// Fire

		UE_LOG(LogTemp, Warning, TEXT("Fire Condition Success"));
	}
}

float APawnTurret::ReturnDistanceToPlayer()
{
	if (!PlayerPawn) { return 10000.f; }

	return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
}