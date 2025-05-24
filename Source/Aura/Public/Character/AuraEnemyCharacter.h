#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "AuraEnemyCharacter.generated.h"

UCLASS()
class AURA_API AAuraEnemyCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraEnemyCharacter();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
