#include "NaveJugador.h"

ANaveJugador::ANaveJugador() : Direccion(FVector(0.0f, 1.0f, 0.0f))
{
	Salud = 50.0f;
	Velocidad = 400.0f;
}

void ANaveJugador::Desplazar(float DeltaTime)
{
	FVector UbicacionNueva = GetActorLocation() + (Direccion * Velocidad * DeltaTime);
	SetActorLocation(UbicacionNueva);

	if (FMath::Abs(UbicacionNueva.Y) > 3000.0f)
	{
		Direccion.Y *= -1.0f;
	}

	UE_LOG(LogTemp, Warning, TEXT("NaveEnemiga patrullando en: %s"), *UbicacionNueva.ToString());
}

