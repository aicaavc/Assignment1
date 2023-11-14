// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"

bool AProjectileWeapon::IsFiring()
{
	return false;
}

ABaseProjectile* AProjectileWeapon::SpawnProjectile(FTransform& SpawnTransform)
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform(int ShotNumber)
{
	return FTransform();
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}
