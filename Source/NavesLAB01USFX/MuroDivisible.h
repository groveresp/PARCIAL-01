#pragma once

#include "CoreMinimal.h"
#include "MuroJuego.h"
#include "MuroDivisible.generated.h"

UCLASS()
class NAVESLAB01USFX_API AMuroDivisible : public AMuroJuego
{
	GENERATED_BODY()

public:
	AMuroDivisible();

	virtual void ActualizarComportamiento(float DeltaTime) override;
	virtual void BeginPlay() override;

	void RecibirDanio();

private:
	float TiempoTranscurrido;
	bool bYaSePartio;
};
