#include "MuroJuego.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AMuroJuego::AMuroJuego() : Salud(100.0f)
{
	// IMPORTANTE: Habilitar Tick
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.016f;

	CajaColision = CreateDefaultSubobject<UBoxComponent>(TEXT("CajaColision"));
	RootComponent = CajaColision;
	CajaColision->SetBoxExtent(FVector(50.0f, 50.0f, 100.0f));

	MallaMuro = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaMuro"));
	MallaMuro->SetupAttachment(CajaColision);

	// Asignar mesh de cubo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaCubo(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MallaCubo.Succeeded())
	{
		MallaMuro->SetStaticMesh(MallaCubo.Object);
	}

	MallaMuro->SetWorldScale3D(FVector(1.0f, 1.0f, 2.0f));
}

void AMuroJuego::BeginPlay()
{
	Super::BeginPlay();
}

void AMuroJuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ActualizarComportamiento(DeltaTime);
}

