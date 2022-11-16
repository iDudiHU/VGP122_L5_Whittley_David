/* Create a class called Rational for performing arithmetic with fractions. Write a program to test
your class. Use integer variables to represent the private data of the class� the numerator and the
denominator. Provide a constructor that enables an object of this class to be initialized when it�s
declared. The constructor should contain default values in case no initializers are provided and
should store the fraction in reduced form.

For example, the fraction 2/4 would be stored in the object as 1 in the numerator and 2 in the denominator. 

Provide public member functions that perform each of the following tasks:
a. add�Adds two Rational numbers. The result should be stored in reduced form.
b. subtract�Subtracts two Rational numbers. Store the result in reduced form.
c. multiply�Multiplies two Rational numbers. Store the result in reduced form.
d. divide�Divides two Rational numbers. The result should be stored in reduced form.
e. toRationalString�Returns a string representation of a Rational number in the form a/b, where
a is the numerator and b is the denominator.
f. toDouble�Returns the Rational number as a double. */

#include <iostream>
#include "Rational.h"

using namespace std;

int main() {

	int a = 0, b = 1;
	Rational F1, F2;

	cout << "Enter the numerator: ";
	cin >> a;

	F1.setNum(a);

	cout << "Enter the denominator: ";
	cin >> b;

	F1.setDem(b);

	cout << "Enter the numerator: ";
	cin >> a;

	F2.setNum(a);

	cout << "Enter the denominator: ";
	cin >> b;

	F2.setDem(b);

	F1.Add(F2);
	F1.Subtract(F2);
	F1.Multiply(F2);
	F1.Divide(F2);
	F1.GCD(F2);

	F1.DisplayFract(F1);
	F1.DisplayFloat(F1);

	Rational F3(F2);

	cout << "\n--COPIED FRACTION--" << endl;
	F3.DisplayFract(F2);

	system("Pause");

	return 0;
}