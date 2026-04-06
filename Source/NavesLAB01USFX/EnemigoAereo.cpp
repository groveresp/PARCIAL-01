#include "EnemigoAereo.h"

void AEnemigoAereo::BeginPlay()
{
	Super::BeginPlay();
	CargarRuta();
}

void AEnemigoAereo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector UbicacionActual = GetActorLocation();
	FVector Destino;

	// Si el GameMode lo llama a formación
	if (!bMovimientoAutonomo)
	{
		Destino = PosicionDestinoGameMode;
	}
	// Si se mueve solo por su ruta ZigZag
	else if (PuntosRuta.Num() > 0)
	{
		Destino = PuntosRuta[IndicePuntoRutaActual];

		if (FVector::Dist(UbicacionActual, Destino) <= Tolerancia)
		{
			IndicePuntoRutaActual = (IndicePuntoRutaActual + 1) % PuntosRuta.Num();
		}
	}
	else return;

	// Movimiento físico hacia el destino
	FVector Direccion = (Destino - UbicacionActual).GetSafeNormal();
	SetActorLocation(UbicacionActual + (Direccion * VelocidadMovimiento * DeltaTime));
}

void AEnemigoAereo::CargarRuta()
{
	PuntosRuta.Empty();
	const float YInicio = 1500.0f; // Ajustado manualmente ya que WorldLimites puede ser 0
	const float XIzq = -800.0f;
	const float XDer = 800.0f;

	// Crear el patrón ZigZag
	for (int32 i = 0; i < 5; i++)
	{
		PuntosRuta.Add(FVector(YInicio - (i * 400.f), XIzq, 200.0f));
		PuntosRuta.Add(FVector(YInicio - (i * 400.f) - 200.f, XDer, 200.0f));
	}
	IndicePuntoRutaActual = 0;
}