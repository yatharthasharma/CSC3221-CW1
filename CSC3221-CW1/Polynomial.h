#pragma once
#include <iostream>
using namespace std;

class Polynomial
{
public:
	Polynomial();
	Polynomial(int maxpower, int* allcoeffecients);
	virtual ~Polynomial();
	int coeffecient(int x);
	int evaluate(int x);
	Polynomial operator+(Polynomial&  rhs);
	Polynomial operator-(Polynomial&  rhs);
	Polynomial operator*(Polynomial&  rhs);//change in CPP
	bool operator==(Polynomial& rhs);
	bool operator!=(Polynomial& rhs);
	Polynomial operator=(Polynomial& rhs);
	Polynomial operator+=(Polynomial&  rhs);
	Polynomial operator-=(Polynomial&  rhs);
	Polynomial operator*=(Polynomial&  rhs);//change in CPP
	int maxPower(int power, Polynomial & rhs);
	friend istream &operator>>(istream &inStream, Polynomial& q);
	friend ostream &operator<<(ostream &outStream, Polynomial& q);
	int calcPower(int coefficient, int power);
private:
	int* coeffecients;
	int power;
	int totalValue;
};