#include "Vector3.h"
#include <math.h>

Vector3 Vector3::operator+(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX + other.mX;
	V3.mY = mY + other.mY;
	V3.mZ = mZ + other.mZ;
	return V3;
}

Vector3 Vector3::operator-(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX - other.mX;
	V3.mY = mY - other.mY;
	V3.mZ = mZ - other.mZ;
	return V3;
}

Vector3 Vector3::operator*(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX*other.mX;
	V3.mY = mY*other.mY;
	V3.mZ = mZ*other.mZ;
	return V3;
}

Vector3 Vector3::operator==(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX == other.mX;
	V3.mY = mY == other.mY;
	V3.mZ = mZ == other.mZ;
	return V3;
}

float Vector3::dot(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mX*other.mX + mX * other.mX;
	V3.mY = mY*other.mY + mY * other.mY;
	V3.mZ = mZ*other.mZ + mZ*other.mZ;
	return mX; mY; mZ;
}

Vector3 Vector3::Cross(Vector3 & other)
{
	Vector3 V3;
	V3.mX = mY * other.mZ - mZ * other.mY;
	V3.mY = mZ * other.mX - mX * other.mZ;
	V3.mZ = mX * other.mY - mY * other.mX;
	return V3;
}

float Vector3::magnitude()
{
	float mag = sqrt((mX * mX) + (mY*mY));
	return  mag;
}

Vector3 Vector3::normalize()
{
	Vector3 V3;
	V3.mX = 
	return Vector3();
}
