#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoAereo.generated.h"

UCLASS()
class NAVESLAB01USFX_API AEnemigoAereo : public AEnemigo
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// Sobrescribimos la carga de ruta
	virtual void CargarRuta() override;
};