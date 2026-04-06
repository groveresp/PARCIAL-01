#pragma once

#include "CoreMinimal.h"
#include "NaveEspacial.h"
#include "NaveEnemiga.generated.h"

UCLASS()
class NAVESLAB01USFX_API ANaveEnemiga : public ANaveEspacial
{
	GENERATED_BODY()

public:
	ANaveEnemiga();

	virtual void Desplazar(float DeltaTime) override;

private:
	FVector DireccionPatrulla;
};
