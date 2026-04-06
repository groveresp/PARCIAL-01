#pragma once

#include "CoreMinimal.h"
#include "NaveEspacial.h"
#include "NaveJugador.generated.h"

UCLASS()
class NAVESLAB01USFX_API ANaveJugador : public ANaveEspacial
{
	GENERATED_BODY()

public:
	ANaveJugador();

	virtual void Desplazar(float DeltaTime) override;

private:
	FVector Direccion;
};