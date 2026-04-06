#include "MuroDesaparecible.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AMuroDesaparecible::AMuroDesaparecible()
	: TiempoVisible(2.0f), TiempoInvisible(2.0f), TemporizadorCiclo(0.0f), bEsVisible(true)
{
	Salud = 60.0f;
}

void AMuroDesaparecible::ActualizarComportamiento(float DeltaTime)
{
	TemporizadorCiclo += DeltaTime;

	float DuracionCicloActual = bEsVisible ? TiempoVisible : TiempoInvisible;

	if (TemporizadorCiclo >= DuracionCicloActual)
	{
		TemporizadorCiclo = 0.0f;
		bEsVisible = !bEsVisible;

		// Cambiar visibilidad y colisión
		MallaMuro->SetVisibility(bEsVisible);
		CajaColision->SetCollisionEnabled(
			bEsVisible ? ECollisionEnabled::QueryAndPhysics : ECollisionEnabled::NoCollision
		);

		UE_LOG(LogTemp, Warning, TEXT("MuroDesaparecible: %s"), bEsVisible ? TEXT("VISIBLE") : TEXT("INVISIBLE"));
	}
}

