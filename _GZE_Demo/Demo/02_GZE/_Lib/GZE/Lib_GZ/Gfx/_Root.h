﻿//This file is part of "GZE - GroundZero Engine"

//The permisive licence allow to use GZE for free or commercial project (Apache License, Version 2.0).
//For conditions of distribution and use, see copyright notice in Licence.txt, this license must be included with any distribution of the code.

//Though not required by the license agreement, please consider the following will be greatly appreciated:
//- We would like to hear about projects where GZE is used.
//- Include an attribution statement somewhere in your project.
//- If you want to see GZE evolve please help us with a donation.

namespace Lib_GZ{namespace Gfx{class cRoot;}}
#ifndef tHDef_HH_Lib_GZ_Gfx_Root
#define tHDef_HH_Lib_GZ_Gfx_Root
#include "Lib_GZ/GzTypes.h"
namespace Lib_GZ{namespace Gfx{namespace Root{

	//Public const
	//Private const

	//Enum
	struct eType{
		enum Type {
			None = 0,
			Tile = 1,
			Img = 2
		};
		Type t_;inline eType(Type t) : t_(t) {}operator Type () const {return t_;}
		inline eType(){};
	};
}}}
#endif