// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGameAgent.h"
#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InitializeProjectile(FVector Direction, float Speed);
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void DealDamageTo(AActor* damaging, float damage);
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	ECollisionChannel GetInstigatorCollisionChannel();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void CheckForGroundUnitTarget();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool ShouldCheckForGroundTarget();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToTarget();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
	bool IsEnemyProjectile();
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AdjustToDesiredZ();

public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float ProjectileSpeed;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Damage;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* DetonationEmitter;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckDistance;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float GroundUnitCheckAngle;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseGameAgent* GroundTarget;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;
	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* ImpactSound; 

		




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
