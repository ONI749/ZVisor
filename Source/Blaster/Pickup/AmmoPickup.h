#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Blaster/Weapon/WeaponTypes.h"
#include "AmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API AAmmoPickup : public APickup
{
	GENERATED_BODY()
public:
	virtual void Destroyed() override;
protected:
	virtual void OnSphereOverlap(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
private:
	UPROPERTY(EditAnywhere)
	int32 AmmoAmount = 30;

	UPROPERTY(EditAnywhere)
	EWeaponType WeaponType;

};
