// Original Code Copyright (C) 2003, 2004 Jason Bevins
// Unreal Adaptation (C) 2016 Matthew Hamlin
//
// This library is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation; either version 2.1 of the License, or (at
// your option) any later version.
//
// This library is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
// License (COPYING.txt) for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this library; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// Original Developers Email jlbevins@gmail.com
// Email: DarkTreePrd@gmail.com
//

#pragma once

#include "NoiseModule.h"
#include "Add.generated.h"

/// @addtogroup UnrealLibNoise
/// @{

/// @addtogroup modules
/// @{

/// @defgroup combinermodules Combiner Modules
/// @addtogroup combinermodules
/// @{

/// Noise module that outputs the sum of the two output values from two
/// source modules.
///
/// This noise module requires two source modules.
UCLASS(BlueprintType)
class UNREALLIBNOISE_API UAdd : public UNoiseModule
{
	GENERATED_BODY()
	
public:
	virtual float GetValue(FVector Coordinates) override;

	FORCEINLINE virtual int32 GetSourceModuleCount() const override { return 0; }
};

/// @}

/// @}

/// @}