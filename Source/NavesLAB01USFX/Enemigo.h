#pragma once

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.generated.h"

UCLASS()
class NAVESLAB01USFX_API AEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AEnemigo();

	// Variables para el GameMode y Formación
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bMovimientoAutonomo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector PosicionDestinoGameMode;

	virtual void Moverse(float DeltaTime);

	// Variables de Ruta y Configuración (Usadas por los hijos)
	UPROPERTY(EditAnywhere, Category = "Movement")
	float VelocidadMovimiento;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float Tolerancia;

	TArray<FVector> PuntosRuta;
	int32 IndicePuntoRutaActual;
	FVector PosicionInicial;

	// Límites del mundo (puedes ajustarlos en el constructor)
	FVector WorldLimitesMin;
	FVector WorldLimitesMax;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	// Función virtual para que cada tipo de enemigo cargue su propia ruta
	virtual void CargarRuta();

	// Función de disparo (para que también disparen)
	void FireProjectile();
	FTimerHandle TimerHandle_Fire;
};
