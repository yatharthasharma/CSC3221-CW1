#pragma once
class Polynomial
{
public:
	Polynomial(int maxpower, int* allcoeffecients);
	~Polynomial();
	int coeffecient(int x);
	double evaluate(double x);
	Polynomial operator+=(Polynomial&  rhs);
	Polynomial operator-=(Polynomial&  rhs);
private:
	int* coeffecients;
	int power;
	int totalValue;
};