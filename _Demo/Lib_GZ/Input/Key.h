﻿#if !( defined tHDef_Lib_GZ_Input_Key || defined  tHDef_IN_Lib_GZ_Class)
#pragma once
#define tHDef_Lib_GZ_Input_Key
namespace Lib_GZ{namespace Input{class cKey;}}

//This file is part of "GZE - GroundZero Engine"

//The permisive licence allow to use GZE for free or commercial project (Apache License, Version 2.0).
//For conditions of distribution and use, see copyright notice in Licence.txt, this license must be included with any distribution of the code.

//Though not required by the license agreement, please consider the following will be greatly appreciated:
//- We would like to hear about projects where GZE is used.
//- Include an attribution statement somewhere in your project.
//- If you want to see GZE evolve please help us with a donation.

#include "Lib_GZ/Lib_GZ.h"
#include "Lib_GZ/GZ.h"
#include "Lib_GZ/Thread.h"
#include "_Key.h"
#include "Lib_GZ/Class.h"
namespace Lib_GZ{namespace Input{namespace Key{

//Structure Definition

}}}

//Optimised Class include -> direct class or header of header (Constants)
#include "Lib_GZ/Input/_Key.h"
namespace Lib_GZ{namespace Sys{class cDebug;}}
namespace Lib_GZ{class cClass;}
namespace Lib_GZ{class cThreadMsg;}

namespace Lib_GZ{namespace Input{namespace Key{


	//Structure Implementation

	//Unit creation
	//Unit destruction
	//Unit array write

}
class tApi_Lib_GZ pKey {

	public:
	//Pure Function

};

class tApi_Lib_GZ cKey : public Lib_GZ::cClass {

	public:


		//Var
		gzBool* aKeyDown;
		gzBool* aKeyPress;
		gzBool* aKeyRelease;
		cKey(Lib_GZ::cBase* _parent);
		virtual void Ini_cKey();
		virtual gzBool fIsDown(Lib_GZ::Input::Key::eKey _hKey);

		inline cKey(const cKey &_o)  : Lib_GZ::cClass(_o), aKeyDown(), aKeyPress(), aKeyRelease(){};
		inline cKey(const cKey &_o, gzBool _b)  : Lib_GZ::cClass(_o, _b), aKeyDown(), aKeyPress(), aKeyRelease(){};
		virtual gzAny MemCopy();
		virtual gzAny DeepCopy();
		virtual ~cKey();

	private:

		//Var

};
class tApi_Lib_GZ csKey : public Lib_GZ::cStThread  {

	public:
		//Object Creation Wrapper
		inline virtual gzSp<cKey> New(Lib_GZ::cBase* _parent){
			gzSp<cKey>_oTemp = gzSp<cKey>(new cKey(_parent));
			_oTemp->Ini_cKey();
			return _oTemp;
		}
		//Public static

		//Static function

		inline csKey(Lib_GZ::cBase* _parent): Lib_GZ::cStThread(_parent){};
		inline ~csKey(){};
};
GZ_mStaticClass(Key)
namespace Key{
}}}
#endif