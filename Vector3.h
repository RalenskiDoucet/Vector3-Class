#pragma once
class Vector3 
{
	float mX; float mY; float mZ;
	Vector3(); 
	Vector3(float x, float y,float z);
	Vector3 operator+(Vector3&other);
	Vector3 operator-(Vector3&other);
	Vector3 operator*(Vector3&other);
	Vector3 operator==(Vector3&other);
	float dot(Vector3&other);
	Vector3 Cross(Vector3&other);
	float magnitude();
	Vector3 normalize();

};