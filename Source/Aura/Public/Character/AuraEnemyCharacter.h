#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemyCharacter.generated.h"

UCLASS()
class AURA_API AAuraEnemyCharacter : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemyCharacter();
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted = false;

protected:
	virtual void BeginPlay() override;
};
