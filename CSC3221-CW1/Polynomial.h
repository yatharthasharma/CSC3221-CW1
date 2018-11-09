#pragma once
#include <iostream>
using namespace std;

class Polynomial
{
public:
	Polynomial();										// empty constructor to create objects
	Polynomial(int maxpower, int* allcoeffecients);		// constructor that takes in power and array of coefffecients of the polynomial
	//Polynomial(Polynomial& h);							// copy constructor that makes use of overridden assignment operator
	virtual ~Polynomial();								// destructor - not implemented properly
	int coeffecient(int x);								// constructor - passing coeffecients as parameters
	int evaluate(int x);								//compute the value of quadratic given value of x
	Polynomial operator+(Polynomial&  rhs);				// overloading addition operator
	Polynomial operator-(Polynomial&  rhs);				// overloading subtraction operator
	Polynomial operator*(Polynomial&  rhs);				// overloading multiplication operator
	bool operator==(Polynomial& rhs);					// overloading == operator
	bool operator!=(Polynomial& rhs);					// overloading != operator
	//Polynomial operator=(Polynomial& rhs);				// overloading assignment operator
	Polynomial operator+=(Polynomial&  rhs);			// overloading += operator
	Polynomial operator-=(Polynomial&  rhs);			// overloading -= operator
	Polynomial operator*=(Polynomial&  rhs);			// overloading *= operator
	int maxPower(int power, Polynomial & rhs);			// get the maximum power out of current polynomial or the given one
	friend istream &operator>>(istream &inStream, Polynomial& q);	// overloading >> operator
	friend ostream &operator<<(ostream &outStream, Polynomial& q);	// overloading << operator
	int calcPower(int coefficient, int power);			// calculate the value of an exponent
private:
	int* coeffecients;									// array of coeffecients
	int power;											// degree
	int totalValue;										// using this variable to compute the value of the polynomial
};