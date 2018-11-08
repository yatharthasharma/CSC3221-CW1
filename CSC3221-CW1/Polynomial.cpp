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

int Polynomial::evaluate(int x)
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

Polynomial Polynomial::operator+(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* sum = new int[polyPower];
	for (int i = 0; i <= power; i++)
		sum[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		sum[i] += rhs.coeffecients[i];

	return Polynomial(polyPower, sum);
}

Polynomial Polynomial::operator-(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* difference = new int[polyPower];
	for (int i = 0; i <= power; i++)
		difference[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		difference[i] -= rhs.coeffecients[i];
	return Polynomial(polyPower, difference);
}

bool Polynomial::operator==(Polynomial & rhs)
{
	if (power != rhs.power)
		return false;
	else {
		for (int i = 0; i < power; i++) {
			if (coeffecients[i] != rhs.coeffecients[i]) {
				return false;
			}
		}
	}
	return true;
}

bool Polynomial::operator!=(Polynomial & rhs)
{
	if (power == rhs.power)
		return false;
	else {
		for (int i = 0; i < power; i++) {
			if (coeffecients[i] != rhs.coeffecients[i]) {
				return true;
			}
		}
	}
	return false;
}
int Polynomial::maxPower(int power, Polynomial & rhs) {
	if (power >= rhs.power)
		return power;
	else
		return rhs.power;
}
// MIGHT BE DIFFERENT 
Polynomial Polynomial::operator+=(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* sum = new int[polyPower];
	for (int i = 0; i <= power; i++)
		sum[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		sum[i] += rhs.coeffecients[i];

	return Polynomial(polyPower, sum);
}
// MIGHT BE DIFFERENT
Polynomial Polynomial::operator-=(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* difference = new int[polyPower];
	for (int i = 0; i <= power; i++)
		difference[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		difference[i] -= rhs.coeffecients[i];
	return Polynomial(polyPower, difference);
}

istream & operator>>(istream & inStream, Polynomial & q)
{
	int power = 0;
	cout << "Enter power of polynomial: ";
	inStream >> power;
	int* coefficients = new int[power];
	cout << "Enter coeffecients for the polynomial starting from the constant: ";
	for (int i = 0; i <= power; i++) {
		inStream >> coefficients[i];
	}
	q = Polynomial(power, coefficients);
	return inStream;
}

ostream & operator<<(ostream & outStream, Polynomial & q)
{
	// TODO: insert return statement here
	return outStream;
}
