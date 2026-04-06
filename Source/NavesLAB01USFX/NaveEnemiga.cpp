#include "NaveEnemiga.h"

ANaveEnemiga::ANaveEnemiga() : DireccionPatrulla(FVector(1.0f, 0.0f, 0.0f))
{
	Salud = 80.0f;
	Velocidad = 400.0f;
}

void ANaveEnemiga::Desplazar(float DeltaTime)
{
	FVector UbicacionNueva = GetActorLocation() + (DireccionPatrulla * Velocidad * DeltaTime);
	SetActorLocation(UbicacionNueva);

	if (FMath::Abs(UbicacionNueva.X) > 2000.0f)
	{
		DireccionPatrulla.X *= -1.0f;
	}

	UE_LOG(LogTemp, Warning, TEXT("NaveEnemiga patrullando en: %s"), *UbicacionNueva.ToString());
}

