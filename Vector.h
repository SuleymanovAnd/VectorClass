#include <iostream>
#include <math.h>
#pragma once


class Vector {
	double x;
	double y;
	double z;

public:
	Vector();
	Vector(double _x, double _y, double _z);
	Vector(const Vector& oth); //конструктор копирования
	Vector& operator = (const Vector& oth); // конструктор присваивания
	~Vector();

	double GetX();
	double GetY();
	double GetZ();

	void Show();
	void Set(double _x, double _y, double _z);
	double Length();
	bool IsZero();


};