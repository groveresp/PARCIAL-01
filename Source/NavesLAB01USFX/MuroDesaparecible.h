#pragma once

#include "CoreMinimal.h"
#include "MuroJuego.h"
#include "MuroDesaparecible.generated.h"

UCLASS()
class NAVESLAB01USFX_API AMuroDesaparecible : public AMuroJuego
{
	GENERATED_BODY()

public:
	AMuroDesaparecible();

	virtual void ActualizarComportamiento(float DeltaTime) override;

private:
	float TiempoVisible;
	float TiempoInvisible;
	float TemporizadorCiclo;
	bool bEsVisible;
};
