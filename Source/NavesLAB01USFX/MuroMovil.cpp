#include "MuroMovil.h"
#include "Components/BoxComponent.h"

AMuroMovil::AMuroMovil()
	: RangoMovimiento(500.0f), VelocidadMovimiento(200.0f), bMoviendoDerecha(true)
{
	Salud = 80.0f;
}

void AMuroMovil::ActualizarComportamiento(float DeltaTime)
{
	FVector UbicacionActual = GetActorLocation();

	if (bMoviendoDerecha)
	{
		UbicacionActual.X += VelocidadMovimiento * DeltaTime;
		if (UbicacionActual.X > PosicionInicial.X + RangoMovimiento)
		{
			bMoviendoDerecha = false;
		}
	}
	else
	{
		UbicacionActual.X -= VelocidadMovimiento * DeltaTime;
		if (UbicacionActual.X < PosicionInicial.X - RangoMovimiento)
		{
			bMoviendoDerecha = true;
		}
	}

	SetActorLocation(UbicacionActual);
	UE_LOG(LogTemp, Warning, TEXT("MuroMovil en: %s"), *UbicacionActual.ToString());
}
