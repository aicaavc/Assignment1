// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BasePlayerController.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()
public:
	virtual void TakeDamage(float Damage, float& ActualDamage) override; 

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABasePlayerController* BasePlayerController; 
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime; 

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	void GetShipConstantVelocity(FVector& Direction, float& Speed);
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	float GetShipAxisAdjustment(float Dist, float Max); 
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FVector CalcOutOfBoundsAdjustment(); 
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void GetPlayerAgentInfo(APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ShouldSpawnAIController();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasDiedRecently();




};
