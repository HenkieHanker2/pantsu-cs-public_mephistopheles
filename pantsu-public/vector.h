#pragma once

#include "top.h"

class CVector
{
public:

	float x, y, z;

	CVector( float x = 0, float y = 0, float z = 0 )
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	CVector operator + ( const CVector& In )
	{
		return CVector( x + In.x, y + In.y, z + In.z );
	}
	
	CVector operator - ( const CVector& In )
	{
		return CVector( x - In.x, y - In.y, z - In.z );
	}

	CVector operator * ( const CVector& In )
	{
		return CVector( x * In.x, y * In.y, z * In.z );
	}

	CVector operator / ( const CVector& In )
	{
		return CVector( x / In.x, y / In.y, z / In.z );
	}

	void operator -= ( const CVector In )
	{
		*this = CVector( x - In.x, y - In.y, z - In.z );
	}

	void operator += ( const CVector In )
	{
		*this = CVector( x + In.x, y + In.y, z + In.z );
	}

};