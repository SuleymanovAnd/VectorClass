#include "Vector.h"

Vector::Vector() { x = 0; y = 0; z = 0;}

Vector::Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}

Vector::Vector(const Vector& oth) {
	x = oth.x;
	y = oth.y;
	z = oth.z;
}

Vector& Vector::operator= (const Vector& oth) {
	if (this == &oth) {
		return *this;
	}

	x = oth.x;
	y = oth.y;
	z = oth.z;
	return *this;
}

Vector::~Vector() = default;

double Vector::GetX() {
	return x;
}
double Vector::GetY() {
	return y;
}
double Vector::GetZ() {
	return z;
}

void Vector::Show() {
	if (this->IsZero()) {
		std::cout << "Vector is null." << std::endl;
	}else 
	std::cout << "x: " << x << ", y: " << y << ". z: " << z << std::endl;
}

void Vector::Set(double _x, double _y, double _z) {
	x = _x;
	y = _y;
	z = _z;
}

double Vector::Length() {
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
bool Vector::IsZero() {
	if (x == 0 && y == 0 && z == 0) return true;
	else return false;
}