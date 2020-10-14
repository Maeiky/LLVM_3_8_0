﻿#if !( defined tHDef_Lib_GZ_Base_Mat4x4 || defined  tHDef_IN_Lib_GZ_Base_Mat3x4 || defined  tHDef_IN_Lib_GZ_Base_Mat2x4 || defined  tHDef_IN_Lib_GZ_Base_Mat1x4 || defined  tHDef_IN_Lib_GZ_Class)
#pragma once
#define tHDef_Lib_GZ_Base_Mat4x4
namespace Lib_GZ{namespace Base{class cMat4x4;}}

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
#include "Lib_GZ/Base/Mat3x4.h"
namespace Lib_GZ{namespace Base{namespace Mat4x4{

//Structure Definition

}}}

//Optimised Class include -> direct class or header of header (Constants)
#include "Lib_GZ/Math.h"
#include "Lib_GZ/Base/Vec4.h"
#include "Lib_GZ/Base/Mat3x4.h"
namespace Lib_GZ{namespace Base{class cMat4x4;}}
namespace Lib_GZ{namespace Sys{class cDebug;}}
namespace Lib_GZ{class cClass;}
namespace Lib_GZ{class cThreadMsg;}

namespace Lib_GZ{namespace Base{namespace Mat4x4{


	//Structure Implementation

	//Unit creation
	//Unit destruction
	//Unit array write

}
class tApi_Lib_GZ pMat4x4 {

	public:
	//Pure Function

};

class tApi_Lib_GZ cMat4x4 : public Lib_GZ::Base::cMat3x4 {

	public:


		//Var
		gzEmbed<Lib_GZ::Base::cVec4> v3;
		cMat4x4(Lib_GZ::cBase* _parent);
		virtual void Ini_cMat4x4(Lib_GZ::Base::cVec4* _v0, Lib_GZ::Base::cVec4* _v1, Lib_GZ::Base::cVec4* _v2, Lib_GZ::Base::cVec4* _v3);

		inline cMat4x4(const cMat4x4 &_o)  : Lib_GZ::Base::cMat3x4(_o), v3(_o.v3){};
		inline cMat4x4(const cMat4x4 &_o, gzBool _b)  : Lib_GZ::Base::cMat3x4(_o, _b), v3(_o.v3){};
		virtual gzAny MemCopy();
		virtual gzAny DeepCopy();
		virtual ~cMat4x4();

	private:

		//Var

};
class tApi_Lib_GZ csMat4x4 : public Lib_GZ::cStThread  {

	public:
		//Object Creation Wrapper
		inline virtual gzSp<cMat4x4> New(Lib_GZ::cBase* _parent, Lib_GZ::Base::cVec4* _v0, Lib_GZ::Base::cVec4* _v1, Lib_GZ::Base::cVec4* _v2, Lib_GZ::Base::cVec4* _v3){
			gzSp<cMat4x4>_oTemp = gzSp<cMat4x4>(new cMat4x4(_parent));
			_oTemp->Ini_cMat4x4(_v0, _v1, _v2, _v3);
			return _oTemp;
		}
		//Public static

		//Static function

		inline csMat4x4(Lib_GZ::cBase* _parent): Lib_GZ::cStThread(_parent){};
		inline ~csMat4x4(){};
};
GZ_mStaticClass(Mat4x4)
namespace Mat4x4{
}}}
#endif