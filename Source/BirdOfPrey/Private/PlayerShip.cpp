// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerShip.h"

void APlayerShip::TakeDamage(float Damage, float& ActualDamage)
{
}

void APlayerShip::GetShipConstantVelocity(FVector& Direction, float& Speed)
{
}

void APlayerShip::ClampToCameraBounds()
{
}

float APlayerShip::GetShipAxisAdjustment(float Dist, float Max)
{
	return 0.0f;
}

FVector APlayerShip::CalcOutOfBoundsAdjustment()
{
	return FVector();
}

void APlayerShip::GetPlayerAgentInfo(APlayerController* Player)
{
}

void APlayerShip::ShouldSpawnAIController()
{
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
	return false;
}
