#include "Polynomial.h"



Polynomial::Polynomial(int maxpower, int* allcoeffecients) {
	power = maxpower;
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
	}
	return 0.0;
}

