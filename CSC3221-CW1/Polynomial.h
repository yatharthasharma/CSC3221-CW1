#pragma once
class Polynomial
{
public:
	Polynomial(int maxpower, int* allcoeffecients);
	~Polynomial();
	int coeffecient(int x);
	double evaluate(double x);
private:
	int* coeffecients;
	int power;
};