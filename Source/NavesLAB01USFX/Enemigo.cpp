#include "Enemigo.h"
#include "ProjectileEnemigo.h"
#include "NavesLAB01USFXProjectile.h"
#include "Kismet/GameplayStatics.h"

AEnemigo::AEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	VelocidadMovimiento = 500.0f;
	Tolerancia = 50.0f;
	bMovimientoAutonomo = true;
	IndicePuntoRutaActual = 0;

	// Definir límites por defecto
	WorldLimitesMin = FVector(-2000.f, -2000.f, 0.f);
	WorldLimitesMax = FVector(2000.f, 2000.f, 0.f);
}

void AEnemigo::BeginPlay() {
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle_Fire, this, &AEnemigo::FireProjectile, 2.0f, true);
	PosicionInicial = GetActorLocation();
}

void AEnemigo::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);


	if (bMovimientoAutonomo) {
		Moverse(DeltaTime);
	}
}

void AEnemigo::Moverse(float DeltaTime) {
}

void AEnemigo::CargarRuta() { /* Implementado en hijos */ }

void AEnemigo::FireProjectile()
{
	UWorld* const World = GetWorld();
	if (World)
	{
		FVector SpawnLocation = GetActorLocation() + FVector(-110.f, 0.f, 0.f);
		FActorSpawnParameters Params;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		// Ahora que incluiste el .h, esto funcionará:
		World->SpawnActor<AProjectileEnemigo>(AProjectileEnemigo::StaticClass(), SpawnLocation, FRotator::ZeroRotator, Params);
	}
}

