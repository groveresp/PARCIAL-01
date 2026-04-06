#include "ProjectileEnemigo.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"

AProjectileEnemigo::AProjectileEnemigo()
{
	// 1. Buscamos el componente de movimiento que ya creó el PADRE
	// Pero le cambiamos los valores solo para este hijo
	if (GetProjectileMovement())
	{
		GetProjectileMovement()->InitialSpeed = 1200.f; // Más lento para que sea esquivable
		GetProjectileMovement()->MaxSpeed = 1200.f;
		GetProjectileMovement()->bRotationFollowsVelocity = true;
		GetProjectileMovement()->ProjectileGravityScale = 0.f; // Sin gravedad
		GetProjectileMovement()->bShouldBounce = false;        // No rebota
	}

	// 2. Asegurar que tenga Mesh (si el padre falló, aquí forzamos una esfera)
	if (GetProjectileMesh())
	{
		// Opcional: Escalarlo para que se vea distinto
		GetProjectileMesh()->SetWorldScale3D(FVector(0.7f, 0.7f, 0.7f));
	}
}

void AProjectileEnemigo::BeginPlay()
{
	Super::BeginPlay();

	// 3. MOVIMIENTO PROPIO: Forzar dirección vertical hacia abajo (-X en TwinStick)
	if (GetProjectileMovement())
	{
		// Definimos el vector de dirección: X=-1 (Abajo), Y=0 (No lateral), Z=0 (No altura)
		FVector DireccionAbajo = FVector(-1.0f, 0.0f, 0.0f);

		// Aplicamos la velocidad directamente al componente
		GetProjectileMovement()->Velocity = DireccionAbajo * GetProjectileMovement()->InitialSpeed;
	}
}

