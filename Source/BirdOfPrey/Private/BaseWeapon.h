// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StartFire();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void StopFire();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void PlayFireEffects();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	FTransform GetFireEffectSpawnTransform();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool HasFinishedFiring();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	virtual bool IsFiring();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
