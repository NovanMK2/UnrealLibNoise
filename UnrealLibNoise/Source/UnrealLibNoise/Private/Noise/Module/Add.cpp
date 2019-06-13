

#include "UnrealLibNoise.h"
#include "Add.h"


float UAdd::GetValue(FVector Coordinates)
{
	return GetSourceModule(0)->GetValue(Coordinates) + GetSourceModule(1)->GetValue(Coordinates);
}


