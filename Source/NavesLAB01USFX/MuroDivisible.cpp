#include "MuroDivisible.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

AMuroDivisible::AMuroDivisible()
	: TiempoTranscurrido(0.0f), bYaSePartio(false)
{
	Salud = 100.0f;
}

void AMuroDivisible::BeginPlay()
{
	Super::BeginPlay();

	// Cambiar color del material para que sea visualmente diferente
	UMaterialInstanceDynamic* MaterialDinamico = MallaMuro->CreateAndSetMaterialInstanceDynamic(0);
	if (MaterialDinamico)
	{
		MaterialDinamico->SetVectorParameterValue(FName("BaseColor"), FLinearColor::Green);
	}
}

void AMuroDivisible::ActualizarComportamiento(float DeltaTime)
{
	// Cada 5 segundos intenta dividirse automáticamente
	TiempoTranscurrido += DeltaTime;

	if (TiempoTranscurrido >= 5.0f && !bYaSePartio)
	{
		RecibirDanio();
		TiempoTranscurrido = 0.0f;
	}
}

void AMuroDivisible::RecibirDanio()
{
	if (bYaSePartio)
	{
		return;
	}

	bYaSePartio = true;
	Salud = 0.0f;

	FVector PosicionActual = GetActorLocation();
	FVector EscalaActual = GetActorScale3D();

	UE_LOG(LogTemp, Warning, TEXT("MuroDivisible se divide en dos partes en: %s"), *PosicionActual.ToString());

	// Crear primer fragmento (izquierda/arriba)
	AMuroDivisible* Fragmento1 = GetWorld()->SpawnActor<AMuroDivisible>(
		AMuroDivisible::StaticClass(),
		PosicionActual + FVector(-150.0f, 0.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (Fragmento1)
	{
		Fragmento1->SetActorScale3D(EscalaActual * 0.5f);
		Fragmento1->bYaSePartio = true;
		Fragmento1->Salud = 50.0f;
		UE_LOG(LogTemp, Warning, TEXT("  ? Fragmento 1 creado"));
	}

	// Crear segundo fragmento (derecha/abajo)
	AMuroDivisible* Fragmento2 = GetWorld()->SpawnActor<AMuroDivisible>(
		AMuroDivisible::StaticClass(),
		PosicionActual + FVector(150.0f, 0.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (Fragmento2)
	{
		Fragmento2->SetActorScale3D(EscalaActual * 0.5f);
		Fragmento2->bYaSePartio = true;
		Fragmento2->Salud = 50.0f;
		UE_LOG(LogTemp, Warning, TEXT("  ? Fragmento 2 creado"));
	}

	// Destruir el muro original
	Destroy();
}
