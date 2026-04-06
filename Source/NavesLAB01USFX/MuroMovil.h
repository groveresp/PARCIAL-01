#pragma once

#include "CoreMinimal.h"
#include "MuroJuego.h"
#include "MuroMovil.generated.h"

UCLASS()
class NAVESLAB01USFX_API AMuroMovil : public AMuroJuego
{
	GENERATED_BODY()

public:
	AMuroMovil();

	virtual void ActualizarComportamiento(float DeltaTime) override;

private:
	float RangoMovimiento;
	float VelocidadMovimiento;
	bool bMoviendoDerecha;
	FVector PosicionInicial;
};
