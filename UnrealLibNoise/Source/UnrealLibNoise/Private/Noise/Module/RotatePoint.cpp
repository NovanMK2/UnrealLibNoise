

#include "UnrealLibNoise.h"
#include "RotatePoint.h"


URotatePoint::URotatePoint(const FObjectInitializer& ObjectInit) : Super(ObjectInit)
{
	SetAngles(DEFAULT_ROTATE_X, DEFAULT_ROTATE_Y, DEFAULT_ROTATE_Z);
}

float URotatePoint::GetValue(FVector Coordinates)
{
	if (GetSourceModule(0) == NULL) throw ExceptionNoModule();
	
	float nx = (_x1Matrix * Coordinates.X) + (_y1Matrix * Coordinates.Y) + (_z1Matrix * Coordinates.Z);
	float ny = (_x2Matrix * Coordinates.X) + (_y2Matrix * Coordinates.Y) + (_z2Matrix * Coordinates.Z);
	float nz = (_x3Matrix * Coordinates.X) + (_y3Matrix * Coordinates.Y) + (_z3Matrix * Coordinates.Z);
	return GetSourceModule(0)->GetValue(FVector(nx, ny, nz));
}

void URotatePoint::SetAngles(float xAngle, float yAngle, float zAngle)
{
	float xCos, yCos, zCos, xSin, ySin, zSin;
	xCos = FMath::DegreesToRadians(FMath::Cos(xAngle));
	yCos = FMath::DegreesToRadians(FMath::Cos(yAngle));
	zCos = FMath::DegreesToRadians(FMath::Cos(zAngle));
	xSin = FMath::DegreesToRadians(FMath::Sin(xAngle));
	ySin = FMath::DegreesToRadians(FMath::Sin(yAngle));
	zSin = FMath::DegreesToRadians(FMath::Sin(zAngle));

	_x1Matrix = ySin * xSin * zSin + yCos * zCos;
	_y1Matrix = xCos * zSin;
	_z1Matrix = ySin * zCos - yCos * xSin * zSin;
	_x2Matrix = ySin * xSin * zCos - yCos * zSin;
	_y2Matrix = xCos * zCos;
	_z2Matrix = -yCos * xSin * zCos - ySin * zSin;
	_x3Matrix = -ySin * xCos;
	_y3Matrix = xSin;
	_z3Matrix = yCos * xCos;

	_xAngle = xAngle;
	_yAngle = yAngle;
	_zAngle = zAngle;
}



