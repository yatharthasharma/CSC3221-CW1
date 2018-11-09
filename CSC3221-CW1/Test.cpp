#include "stdio.h"
#include "Polynomial.h"
#include "Quadratic.h"
#include <iostream>
using namespace std;

int main() {
	// TESTS FOR QUADRATICS
	/*
	Quadratic q1;															// declaring first quadratic
	// USING overloaded >> and << operators - last functionality mentioned in the spec: Overload the input and output operators (>> and <<) appropriately.
	cin >> q1;																
	cout << q1 << endl;												

	// USING Quadratic class' coeffecient and evaluate functions - test the first two functionalities -
		// 1. Return the coefficient of a given power of x.
		// 2. Compute the value of the quadratic given a value for x.
	cout << endl;
	cout << "Value of the constant: " << q1.coeffecient(0) << ", value of the coeffecient of x: " 
		<< q1.coeffecient(1) << ", value of the coeffecient of x2: " << q1.coeffecient(2) << endl;
	cout << "Value of the function at (x = 1) is: " << q1.evaluate(1) << ", at (x = 2) is: " << q1.evaluate(2)
		<< ", at (x = 3) is: " << q1.evaluate(3) << endl << endl;
	Quadratic q2;															// declaring second quadratic
	cin >> q2;										
	cout << q2 << endl;

	// ADDING AND SUBTRACTING two quadratics - testing the functionality -
		// 1. Overload addition and subtraction operators to allow quadratics to be manipulated. 
	cout << endl << "Add the two Quadratics!" << endl;								
	Quadratic sumOfQuadratics = q1 + q2;									// adding both the quadratics using overloaded + operator
	Quadratic diffOfQuadratics = q1 - q2;									// subtracting second quadratic from the first using overloaded - operator
	cout << endl << "Sum and difference of quadratics resulted in these two quadratics respectively - " << endl;
	cout << sumOfQuadratics << endl;										// printing the new quadratic
	cout << diffOfQuadratics << endl;										// printing the new quadratic
	
	// TESTING USAGE OF += and -= operators
	Quadratic test1 = Quadratic(1, 2, 5);									// declaring two test quadratics - change values of coefficients to check
	Quadratic test2 = Quadratic(2, 3, 4);
	cout << endl << "Test1 Quadratic - " << test1 << '\t' << "Test2 Quadratic - " << test2 << endl;	// printing them out
	test1 += test2;																// using overloaded += operator
	cout << "New Test1 Quadratic after being operated on by += operator - " 
		<< test1 << endl;														// printing the quadratic on which overloaded += was used													
	test1 -= test2;																// using overloaded -= operator
	cout << "New Test1 Quadratic after being operated on by -= operator - " 
		<< test1 << endl;	// printing the quadratic on which overloaded -= was used
	
	// TESTING USAGE OF == and != operators
	Quadratic equal1 = Quadratic(1, 1, 1);
	Quadratic equal2 = Quadratic(1, 1, 1);
	Quadratic notequal1 = Quadratic(1, 2, 3);
	Quadratic notequal2 = Quadratic(1, 1, 0);
	
	cout << endl << endl << "equal1 array - " << equal1 << '\t' << "equal2 array - " << equal2 << '\t'
		<< "notequal1 array - " << notequal1 << '\t' << "notequal2 array - " << notequal2 << endl;
	cout << "USING == OPERATOR - " << endl;
	cout << boolalpha << (equal1 == equal2) << endl;
	cout << boolalpha << (equal2 == equal1) << endl;
	cout << boolalpha << (equal1 == notequal1) << endl;
	cout << boolalpha << (equal1 == notequal2) << endl << endl;

	cout << "USING != OPERATOR - " << endl;
	cout << boolalpha << (equal1 != equal2) << endl;
	cout << boolalpha << (equal2 != equal1) << endl;
	cout << boolalpha << (equal1 != notequal1) << endl;
	cout << boolalpha << (equal1 != notequal2) << endl;
	*/
	// TESTS FOR POLYNOMIALS

	Polynomial p1;
	// USING overloaded >> and << operators - last functionality mentioned in the spec: Overload the input and output operators (>> and <<) appropriately.
	cin >> p1;
	cout << p1;
	// USING Polynomial class' coeffecient and evaluate functions - test the first two functionalities -
		// 1. Return the coefficient of a given power of x.
		// 2. Compute the value of the quadratic given a value for x.
	cout << endl;
	cout << "Value of the constant: " << p1.coeffecient(0) << ", value of the coeffecient of x: "
		<< p1.coeffecient(1) << ", value of the coeffecient of x2: " << p1.coeffecient(2) << endl;
	cout << "Value of the function at (x = 1) is: " << p1.evaluate(1) << ", at (x = 2) is: " << p1.evaluate(2)
		<< ", at (x = 3) is: " << p1.evaluate(3) << endl << endl;

	Polynomial p2;															// declaring second quadratic
	cin >> p2;
	cout << p2 << endl;

	// ADDING AND SUBTRACTING two polynomials - testing the functionality -
		// 1. Overload addition and subtraction operators to allow polynomials to be manipulated. 
	cout << endl << "Add the two Quadratics!" << endl;
	Polynomial sumOfPolynomial = p1 + p2;									// adding both the polynomials using overloaded + operator
	Polynomial diffOfPolynomial = p1 - p2;									// subtracting second polynomial from the first using overloaded - operator
	cout << endl << "Sum and difference of Polynomials resulted in these two Polynomials respectively - " << endl;
	cout << sumOfPolynomial << endl;										// printing the new polynomial
	cout << diffOfPolynomial << endl;										// printing the new quadratic
	system("PAUSE");
	return EXIT_SUCCESS;
}
