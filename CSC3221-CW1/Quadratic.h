#pragma once
#include <iostream>
using namespace std;

class Quadratic
{
public:
	Quadratic(int a, int b, int c);
	double evaluate(double x);
	int coeffecient(int x);
	Quadratic operator+(Quadratic& rhs);
	Quadratic operator-(Quadratic&  rhs);
	bool operator==(Quadratic& rhs);
	bool operator!=(Quadratic& rhs);
	Quadratic operator+=(Quadratic&  rhs);
	Quadratic operator-=(Quadratic&  rhs);
	friend istream &operator>>(istream &inStream, Quadratic& q);
	friend ostream &operator<<(ostream &inStream, Quadratic& q);
private:
	//const int exponents[3] = {1, 2, 3};
	int exponents[3] = { 1,2,3 };
	int coeffecients[3];
};