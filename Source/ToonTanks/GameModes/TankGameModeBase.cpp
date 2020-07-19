// Copyright 2020 Michael Palmer & Paradigm Game Studios Lmtd.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	// Get References and game win/lose conditions.

	// Call HandleGameStart() to initialize the start countdown, turret activation, pawn check etc.
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// Check what type of actor died. If Turret, tally. If Player -> go to lose condition.
}

void ATankGameModeBase::HandleGameStart()
{
	// Initialize the start countdown, turret activation, pawn check etc.
	// Call BP version of GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// See if the player has destroyed all the turrets, show win result.
	// else if turret destroyed player, show lose result.
	// Call BP version of GameOver(bool).
}