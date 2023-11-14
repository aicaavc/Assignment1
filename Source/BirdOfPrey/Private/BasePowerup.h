// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerShip.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

UCLASS()
class ABasePowerup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePowerup();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Apply(APlayerShip* PlayerShip);
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayEffects();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
