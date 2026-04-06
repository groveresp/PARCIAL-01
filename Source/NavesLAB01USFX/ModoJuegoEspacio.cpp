#include "ModoJuegoEspacio.h"
#include "NaveJugador.h"
#include "NaveEnemiga.h"
#include "MuroDivisible.h"
#include "MuroMovil.h"
#include "MuroDesaparecible.h"

void AModoJuegoEspacio::BeginPlay()
{
	Super::BeginPlay();
	GenerarTodosLosActores();

	UE_LOG(LogTemp, Warning, TEXT("=== JUEGO INICIADO ==="));
	UE_LOG(LogTemp, Warning, TEXT("Total naves: %d"), TodasLasNaves.Num());
	UE_LOG(LogTemp, Warning, TEXT("Total muros: %d"), TodosLosMuros.Num());
	UE_LOG(LogTemp, Warning, TEXT("=== LABERINTO GENERADO ==="));
}

void AModoJuegoEspacio::GenerarTodosLosActores()
{
	// Crear naves
	ANaveJugador* Jugador = GetWorld()->SpawnActor<ANaveJugador>(
		ANaveJugador::StaticClass(),
		FVector(0.0f, 0.0f, 100.0f),
		FRotator::ZeroRotator
	);
	if (Jugador)
	{
		TodasLasNaves.Add(Jugador);
		UE_LOG(LogTemp, Warning, TEXT("? Nave Jugador creada en: %s"), *Jugador->GetActorLocation().ToString());
	}

	ANaveEnemiga* Enemigo1 = GetWorld()->SpawnActor<ANaveEnemiga>(
		ANaveEnemiga::StaticClass(),
		FVector(1000.0f, 0.0f, 100.0f),
		FRotator::ZeroRotator
	);
	if (Enemigo1)
	{
		TodasLasNaves.Add(Enemigo1);
		UE_LOG(LogTemp, Warning, TEXT("? Nave Enemiga 1 creada en: %s"), *Enemigo1->GetActorLocation().ToString());
	}

	ANaveEnemiga* Enemigo2 = GetWorld()->SpawnActor<ANaveEnemiga>(
		ANaveEnemiga::StaticClass(),
		FVector(-1000.0f, 500.0f, 100.0f),
		FRotator::ZeroRotator
	);
	if (Enemigo2)
	{
		TodasLasNaves.Add(Enemigo2);
		UE_LOG(LogTemp, Warning, TEXT("? Nave Enemiga 2 creada en: %s"), *Enemigo2->GetActorLocation().ToString());
	}

	
	ConstruirLaberinto();
}

void AModoJuegoEspacio::ConstruirLaberinto()
{
	UE_LOG(LogTemp, Warning, TEXT(">>> Construyendo laberinto..."));

	
	CrearMuroDivisibleHorizontal(FVector(0.0f, -1500.0f, 0.0f), 3000.0f);   
	CrearMuroDivisibleHorizontal(FVector(0.0f, 1500.0f, 0.0f), 3000.0f);   
	CrearMuroDivisibleVertical(FVector(-1500.0f, 0.0f, 0.0f), 3000.0f);     
	CrearMuroDivisibleVertical(FVector(1500.0f, 0.0f, 0.0f), 3000.0f);     

	UE_LOG(LogTemp, Warning, TEXT("? Muros perimetrales (divisibles) creados"));

	

	// Línea vertical central dividiendo el mapa 
	CrearMuroDivisibleVertical(FVector(0.0f, 200.0f, 0.0f), 1000.0f);

	// Línea horizontal en zona izquierda
	CrearMuroDivisibleHorizontal(FVector(-700.0f, -400.0f, 0.0f), 800.0f);


	UE_LOG(LogTemp, Warning, TEXT("? Divisiones interiores (divisibles) creadas"));


	// Muro móvil 1 (se desplaza de lado a lado)
	AMuroMovil* MuroMovil1 = GetWorld()->SpawnActor<AMuroMovil>(
		AMuroMovil::StaticClass(),
		FVector(300.0f, 0.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (MuroMovil1)
	{
		TodosLosMuros.Add(MuroMovil1);
		UE_LOG(LogTemp, Warning, TEXT("? Muro Móvil 1 creado en: %s"), *MuroMovil1->GetActorLocation().ToString());
	}

	// Muro móvil 2 (se desplaza en otra zona)
	AMuroMovil* MuroMovil2 = GetWorld()->SpawnActor<AMuroMovil>(
		AMuroMovil::StaticClass(),
		FVector(-300.0f, -800.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (MuroMovil2)
	{
		TodosLosMuros.Add(MuroMovil2);
		UE_LOG(LogTemp, Warning, TEXT("? Muro Móvil 2 creado en: %s"), *MuroMovil2->GetActorLocation().ToString());
	}

	// Muro desaparecible 1 
	AMuroDesaparecible* MuroDesap1 = GetWorld()->SpawnActor<AMuroDesaparecible>(
		AMuroDesaparecible::StaticClass(),
		FVector(-300.0f, 700.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (MuroDesap1)
	{
		TodosLosMuros.Add(MuroDesap1);
		UE_LOG(LogTemp, Warning, TEXT("? Muro Desaparecible 1 creado en: %s"), *MuroDesap1->GetActorLocation().ToString());
	}

	// Muro desaparecible 2 
	AMuroDesaparecible* MuroDesap2 = GetWorld()->SpawnActor<AMuroDesaparecible>(
		AMuroDesaparecible::StaticClass(),
		FVector(300.0f, -700.0f, 0.0f),
		FRotator::ZeroRotator
	);
	if (MuroDesap2)
	{
		TodosLosMuros.Add(MuroDesap2);
		UE_LOG(LogTemp, Warning, TEXT("? Muro Desaparecible 2 creado en: %s"), *MuroDesap2->GetActorLocation().ToString());
	}

	UE_LOG(LogTemp, Warning, TEXT(">>> Total muros generados: %d"), TodosLosMuros.Num());
}

void AModoJuegoEspacio::CrearMuroDivisibleHorizontal(FVector Posicion, float Largo)
{
	int32 NumSegmentos = FMath::CeilToInt(Largo / 100.0f);
	float EspacioEntreSegmentos = 100.0f;

	for (int32 i = 0; i < NumSegmentos; ++i)
	{
		float DesplazamientoX = (i - NumSegmentos / 2.0f) * EspacioEntreSegmentos;
		FVector PosicionSegmento = Posicion + FVector(DesplazamientoX, 0.0f, 0.0f);

		AMuroDivisible* Muro = GetWorld()->SpawnActor<AMuroDivisible>(
			AMuroDivisible::StaticClass(),
			PosicionSegmento,
			FRotator::ZeroRotator
		);

		if (Muro)
		{
			TodosLosMuros.Add(Muro);
		}
	}
}

void AModoJuegoEspacio::CrearMuroDivisibleVertical(FVector Posicion, float Alto)
{
	int32 NumSegmentos = FMath::CeilToInt(Alto / 100.0f);
	float EspacioEntreSegmentos = 100.0f;

	for (int32 i = 0; i < NumSegmentos; ++i)
	{
		float DesplazamientoY = (i - NumSegmentos / 2.0f) * EspacioEntreSegmentos;
		FVector PosicionSegmento = Posicion + FVector(0.0f, DesplazamientoY, 0.0f);

		AMuroDivisible* Muro = GetWorld()->SpawnActor<AMuroDivisible>(
			AMuroDivisible::StaticClass(),
			PosicionSegmento,
			FRotator::ZeroRotator
		);

		if (Muro)
		{
			TodosLosMuros.Add(Muro);
		}
	}
}

