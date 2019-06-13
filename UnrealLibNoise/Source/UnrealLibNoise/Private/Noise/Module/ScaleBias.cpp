

#include "UnrealLibNoise.h"
#include "ScaleBias.h"


UScaleBias::UScaleBias(const FObjectInitializer& ObjectInit) : Super(ObjectInit), Bias(DEFAULT_BIAS), Scale(DEFAULT_SCALE)
{
}

float UScaleBias::GetValue(FVector Coordinates)
{
	if (GetSourceModule(0) == NULL) throw ExceptionNoModule();

	return GetSourceModule(0)->GetValue(Coordinates) * Scale + Bias;
}



