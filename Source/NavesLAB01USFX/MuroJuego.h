#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "MuroJuego.generated.h"

UCLASS(Abstract)
class NAVESLAB01USFX_API AMuroJuego : public AActor
{
	GENERATED_BODY()

public:
	AMuroJuego();
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	virtual void ActualizarComportamiento(float DeltaTime) PURE_VIRTUAL(AMuroJuego::ActualizarComportamiento, );

	float ObtenerSalud() const { return Salud; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Muro")
	float Salud;

	UPROPERTY(VisibleAnywhere, Category = "Muro")
	class UBoxComponent* CajaColision;

	UPROPERTY(VisibleAnywhere, Category = "Muro")
	class UStaticMeshComponent* MallaMuro;
};
