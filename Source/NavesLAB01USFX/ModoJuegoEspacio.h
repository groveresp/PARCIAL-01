#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ModoJuegoEspacio.generated.h"

UCLASS()
class NAVESLAB01USFX_API AModoJuegoEspacio : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	TArray<AActor*> TodasLasNaves;

	UPROPERTY()
	TArray<AActor*> TodosLosMuros;

	void GenerarTodosLosActores();
	void ConstruirLaberinto();
	void CrearMuroDivisibleHorizontal(FVector Posicion, float Largo);
	void CrearMuroDivisibleVertical(FVector Posicion, float Alto);
	void CrearMuroMovilHorizontal(FVector Posicion, float Largo);
	void CrearMuroMovilVertical(FVector Posicion, float Alto);
};
