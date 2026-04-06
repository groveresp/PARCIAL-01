#include "NaveEspacial.h"
#include "Components/StaticMeshComponent.h"

ANaveEspacial::ANaveEspacial() : Salud(100.0f), Velocidad(500.0f)
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.016f;

	ComponenteMalla = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ComponenteMalla"));
	RootComponent = ComponenteMalla;

	// Asignar mesh genérico de esfera
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEsfera(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if (MallaEsfera.Succeeded())
	{
		ComponenteMalla->SetStaticMesh(MallaEsfera.Object);
	}

	ComponenteMalla->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
}

void ANaveEspacial::BeginPlay()
{
	Super::BeginPlay();
}

void ANaveEspacial::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Desplazar(DeltaTime);
}

