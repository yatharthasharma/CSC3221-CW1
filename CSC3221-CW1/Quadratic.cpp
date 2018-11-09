#include "Quadratic.h"

Quadratic::Quadratic()
{
}

Quadratic::Quadratic(int a, int b, int c)
{
	// adding int parameters to the array of coeffecients
	coeffecients[0] = a;
	coeffecients[1] = b;
	coeffecients[2] = c;
}


double Quadratic::evaluate(double x)
{
	return (coeffecients[2] * x * x) + (coeffecients[1] * x) + coeffecients[0];
}

int Quadratic::coeffecient(int x)
{
	return coeffecients[x];
}

Quadratic Quadratic::operator+(Quadratic& rhs)
{
	return Quadratic(coeffecients[0] + rhs.coeffecient(0), coeffecients[1] + rhs.coeffecient(1), coeffecients[2] + rhs.coeffecient(2));
}

Quadratic Quadratic::operator-(Quadratic& rhs)
{
	return Quadratic(coeffecients[0] - rhs.coeffecient(0), coeffecients[1] - rhs.coeffecient(1), coeffecients[2] - rhs.coeffecient(2));
}

bool Quadratic::operator==(Quadratic& rhs)
{
	if (coeffecients[0] == rhs.coeffecient(0) && coeffecients[1] == rhs.coeffecient(1) && coeffecients[2] == rhs.coeffecient(2))
		return true;

	return false;
}

bool Quadratic::operator!=(Quadratic& rhs)
{
	if (coeffecients[0] != rhs.coeffecient(0) || coeffecients[1] != rhs.coeffecient(1) || coeffecients[2] != rhs.coeffecient(2))
		return true;

	return false;
}

Quadratic Quadratic::operator+=(Quadratic& rhs)
{
	coeffecients[0] += rhs.coeffecient(0);
	coeffecients[1] += rhs.coeffecient(1);
	coeffecients[2] += rhs.coeffecient(2);
	return Quadratic(coeffecients[0], coeffecients[1], coeffecients[2]);
}

Quadratic Quadratic::operator-=(Quadratic& rhs)
{
	coeffecients[0] -= rhs.coeffecient(0);
	coeffecients[1] -= rhs.coeffecient(1);
	coeffecients[2] -= rhs.coeffecient(2);
	return Quadratic(coeffecients[0], coeffecients[1], coeffecients[2]);
}

istream &operator>>(istream &inStream, Quadratic & q)
{
	int x, y, z = 0;
	char separator = ',';
	cout << "Enter coefficient values starting from the constant separated by commas: (Ex.: 1,2,3)";
	inStream >> x >> separator >> y >> separator >> z;
	q = Quadratic(x, y, z);
	return inStream;
}

ostream & operator<<(ostream & outStream, Quadratic & q)
{
	outStream << "The quadratic is: " << noshowpos << q.coeffecient(2) << "x2 " << showpos << " " << q.coeffecient(1) << "x " << showpos << " " << q.coeffecient(0);
	return outStream;
}