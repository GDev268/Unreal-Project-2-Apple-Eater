// Fill out your copyright notice in the Description page of Project Settings.


#include "BigEaterGame.h"


ABigEaterGame::ABigEaterGame()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABigEaterGame::BeginPlay() {
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABigEaterGame::SpawnMyFood, FMath::RandRange(1, 3), true);
}

void ABigEaterGame::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

void ABigEaterGame::SpawnMyFood() {
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);

	GetWorld()->SpawnActor(LaFood, &SpawnPosition, &SpawnRotation);
}