#pragma once

#include "CoreMinimal.h"
#include "NavesLAB01USFXProjectile.h"
#include "ProjectileEnemigo.generated.h"

UCLASS()
class NAVESLAB01USFX_API AProjectileEnemigo : public ANavesLAB01USFXProjectile
{
	GENERATED_BODY()

public:
	// El constructor configurará las velocidades propias
	AProjectileEnemigo();

protected:
	// El BeginPlay definirá la dirección fija hacia abajo
	virtual void BeginPlay() override;
};
