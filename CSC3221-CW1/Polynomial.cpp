#include "Polynomial.h"



Polynomial::Polynomial(int maxpower, int* allcoeffecients) {
	power = maxpower;
	totalValue = 0;
	coeffecients = new int[power];
	for (int i = 0; i < power; ++i)
		coeffecients[i] = allcoeffecients[i];
}

Polynomial::~Polynomial()
{
}

int Polynomial::coeffecient(int x)
{
	return coeffecients[x];
}

double Polynomial::evaluate(double x)
{
	int y = x;
	for (int i = 0; i <= power; i++) {
		x = y;
		for (int x = 0; x <= power; x++) {
			x *= x;
		}
		coeffecients[i] = coeffecients[i] *  x;
		totalValue += coeffecients[i];
	}
	return totalValue;
}

Polynomial Polynomial::operator+=(Polynomial & rhs)
{
	int polyPower = 0;
	if (power >= rhs.power) {
		polyPower = power;
	}
	else {
		polyPower = rhs.power;
	}
	int* sum = new int[polyPower];
	for (int i = 0; i <= power; i++)
		sum[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		sum[i] += rhs.coeffecients[i];

	return Polynomial(polyPower, sum);
}

Polynomial Polynomial::operator-=(Polynomial & rhs)
{
	return Polynomial();
}

