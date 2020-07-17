// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts or when spawned
void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
}

// Called every frame
void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APawnTurret::CheckFireCondition()
{
	// If Player == null || is Dead THEN BAIL!!

	// If Player IS in range THEN FIRE!!

	UE_LOG(LogTemp, Warning, TEXT("Fire Condition Checked"));
}