#include "Polynomial.h"

Polynomial::Polynomial()
{
}

Polynomial::Polynomial(int maxpower, int* allcoeffecients) {
	power = maxpower;
	totalValue = 0;
	coeffecients = new int[power+1];
	for (int i = 0; i <= power; ++i)
		coeffecients[i] = allcoeffecients[i];
}

Polynomial::~Polynomial()
{
	delete [] coeffecients;
}

int Polynomial::coeffecient(int x)
{
	return coeffecients[x];
}

int Polynomial::evaluate(int x)
{
	totalValue = 0;
	for (int i = 0; i <= this->power; i++) {
		totalValue += coeffecients[i] * calcPower(x, i);
	}
	return totalValue;
}

Polynomial Polynomial::operator+(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* sum = new int[polyPower+1];
	for (int i = 0; i <= power; i++)
		sum[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		sum[i] += rhs.coeffecients[i];

	return Polynomial(polyPower, sum);
}

Polynomial Polynomial::operator-(Polynomial & rhs)
{
	int polyPower = maxPower(power, rhs);
	int* difference = new int[polyPower+1];
	for (int i = 0; i <= power; i++)
		difference[i] = coeffecients[i];
	for (int i = 0; i <= rhs.power; i++)
		difference[i] -= rhs.coeffecients[i];
	return Polynomial(polyPower, difference);
}

Polynomial Polynomial::operator*(Polynomial & rhs)
{
	int* x = 0;
	return Polynomial(0, x);
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
Polynomial Polynomial::operator=(Polynomial & rhs)
{
	return Polynomial(this->power, this->coeffecients);
}
int Polynomial::maxPower(int power, Polynomial & rhs) {
	if (power >= rhs.power)
		return power;
	else
		return rhs.power;
}
int Polynomial::calcPower(int x, int power)
{
	if (power != 0)
		return x * calcPower(x, power - 1);
	else
		return 1;
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

Polynomial Polynomial::operator*=(Polynomial & rhs)
{
	int* x = 0;
	return Polynomial(0, x);
}

istream & operator>>(istream & inStream, Polynomial & q)
{
	int power = 0;
	int separator = ',';
	cout << "Enter power of polynomial: ";
	inStream >> power;
	int* coefficients = new int[power+1];
	for (int i = 0; i <= power; i++) {
		cout << "Enter coeffecients for the polynomial starting from the constant one by one (press enter after entering each coefficient: ";
		inStream >> coefficients[i];
	}
	q = Polynomial(power, coefficients);
	return inStream;
}

ostream & operator<<(ostream & outStream, Polynomial & q)
{
	cout << "The polynomial is: ";

	for (int i = q.power; i >= 0; i--) {
		if (i != 0)
			outStream << showpos << " " << q.coeffecients[i] << "x" << noshowpos << i << " ";
		else
			outStream << showpos << q.coeffecient(i);
	}
	return outStream;
}
