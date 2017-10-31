#include "Vector4.h"
#include <math.h> 


Vector4::Vector4(float x, float y, float z)
{
	x = mX;
	y = mY;
	z = mZ;
}

Vector4 Vector4::operator+(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX + other.mX;
	V4.mY = mY + other.mY;
	V4.mZ + other.mZ;
	return V4;
}

Vector4 Vector4::operator-(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX - other.mX;
	V4.mY = mY - other.mY;
	V4.mZ = mZ - other.mZ;
	return V4;
}

Vector4 Vector4::operator*(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX * other.mX;
	V4.mY = mY * other.mY;
	V4.mZ = mZ * other.mZ;
	return V4;
}

Vector4 Vector4::operator==(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX == other.mX;
	V4.mY = mY == other.mY;
	V4.mZ = mZ == other.mZ;
	return V4;
}

float Vector4::dot(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mX*other.mX + mX * other.mX;
	V4.mY = mY*other.mY + mY * other.mY;
	V4.mZ = mZ*other.mZ + mZ*other.mZ;
	return mX; mY; mZ;
}

Vector4 Vector4::Cross(Vector4 & other)
{
	Vector4 V4;
	V4.mX = mY * other.mZ - mZ * other.mY;
	V4.mY = mZ * other.mX - mX * other.mZ;
	V4.mZ = mX * other.mY - mY * other.mX;
	return V4;
}

float Vector4::magnitude()
{
	float mag = sqrt((mX * mX) + (mY*mY));
	return  mag;
}

Vector4 Vector4::normalize()
{
	return Vector4();
}
