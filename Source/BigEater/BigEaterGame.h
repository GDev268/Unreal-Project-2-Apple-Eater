// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BigEaterGame.generated.h"

/**
 * 
 */
UCLASS()
class BIGEATER_API ABigEaterGame : public AGameMode
{
	GENERATED_BODY()

	ABigEaterGame();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TSubclassOf<APawn> LaFood;

	float Spawn_Z = 500.0f;

	UPROPERTY(EditAnywhere)
		float Spawn_X_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_X_Max;
	UPROPERTY(EditAnywhere)
		float Spawn_Y_Min;
	UPROPERTY(EditAnywhere)
		float Spawn_Y_Max;

	void SpawnMyFood();
};

