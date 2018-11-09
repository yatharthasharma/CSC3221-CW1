#pragma once
#include <iostream>
using namespace std;

class Quadratic
{
public:
	Quadratic();
	Quadratic(int a, int b, int c);										// constructor - passing coeffecients as parameters
	double evaluate(double x);											//compute the value of quadratic given value of x
	int coeffecient(int x);												// return coefficient for a given power of x
	Quadratic operator+(Quadratic& rhs);								// overloading addition operator
	Quadratic operator-(Quadratic&  rhs);								// overloading subtraction operator
	bool operator==(Quadratic& rhs);									// overloading == operator
	bool operator!=(Quadratic& rhs);									// overloading != operator
	Quadratic operator+=(Quadratic&  rhs);								// overloading += operator
	Quadratic operator-=(Quadratic&  rhs);								// overloading -= operator
	friend istream &operator>>(istream &inStream, Quadratic& q);		// overloading >> operator
	friend ostream &operator<<(ostream &inStream, Quadratic& q);		// overloading << operator
private:
	int exponents[3] = { 1,2,3 };										// exponents for a quadratic equation
	int coeffecients[3];												// array of coefficients
};