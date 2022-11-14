/* Create a class called Rational for performing arithmetic with fractions. Write a program to test
your class. Use integer variables to represent the private data of the class— the numerator and the
denominator. Provide a constructor that enables an object of this class to be initialized when it’s
declared. The constructor should contain default values in case no initializers are provided and
should store the fraction in reduced form.

For example, the fraction 2/4 would be stored in the object as 1 in the numerator and 2 in the denominator. 

Provide public member functions that perform each of the following tasks:
a. add—Adds two Rational numbers. The result should be stored in reduced form.
b. subtract—Subtracts two Rational numbers. Store the result in reduced form.
c. multiply—Multiplies two Rational numbers. Store the result in reduced form.
d. divide—Divides two Rational numbers. The result should be stored in reduced form.
e. toRationalString—Returns a string representation of a Rational number in the form a/b, where
a is the numerator and b is the denominator.
f. toDouble—Returns the Rational number as a double. */

#include <iostream>
#include "Rational.h"

using namespace std;

int nIn1 = 1;
int dIn1 = 1;
int nIn2 = 1;
int dIn2 = 1;

void main()
{
	cout << "Enter the first numerator: ";
	cin >> nIn1;
	cout << "Enter the first denominator: ";
	cin >> dIn1;
	cout << "Enter the second numerator: ";
	cin >> nIn2;
	cout << "Enter the second denominator: ";
	cin >> dIn2;

	Rational::add(nIn1, dIn1, nIn2, dIn2);
	Rational::subtract(nIn1, dIn1, nIn2, dIn2);
	Rational::multiply(nIn1, dIn1, nIn2, dIn2);
	Rational::divide(nIn1, dIn1, nIn2, dIn2);
	cout << Rational::toRationalString(nIn1, dIn1, nIn2, dIn2) << endl;
	Rational::toDouble(nIn1, dIn1, nIn2, dIn2);


}