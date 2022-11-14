/*Provide public member functions that perform each of the following tasks:
a. add—Adds two Rational numbers. The result should be stored in reduced form.
b. subtract—Subtracts two Rational numbers. Store the result in reduced form.
c. multiply—Multiplies two Rational numbers. Store the result in reduced form.
d. divide—Divides two Rational numbers. The result should be stored in reduced form.
e. toRationalString—Returns a string representation of a Rational number in the form a/b, where
a is the numerator and b is the denominator.
f. toDouble—Returns the Rational number as a double. */

#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Rational
{
private:
	int numerator, denominator;

public:

	int add(int, int, int, int);
	int subtract(int, int, int, int);
	int multiply(int, int, int, int);
	int divide(int, int, int, int);
	string toRationalString(int, int, int, int);
	double toDouble(int, int, int, int);
	int lowestFractionNum(int, int);
	int lowestFractionDen(int, int);
	Rational();
	~Rational();

	Rational()
	{
		numerator = 1;
		denominator = 1;
	}

	~Rational()
	{
		return;
	}

	int add(int n1, int d1, int n2, int d2)
	{
		int resN;
		int resD;
		int tmpN;
		int tmpD;

		tmpN = (n1 * d2) + (d1 * n2); // do math with result being numerator and denominator
		tmpD = (d1 * d2);

		resN = lowestFractionNum(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the numerator.
		resD = lowestFractionDen(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the denominator.
		
		cout << "The addition of those two fractions = " << resN << "/" << resD << endl;
		return;
	}

	int subtract(int n1, int d1, int n2, int d2)
	{
		int resN;
		int resD;
		int tmpN;
		int tmpD;

		tmpN = ((n2 * -1) * d1) - ((n1 * -1) * d2); // do math with result being numerator and denominator
		tmpD = (d1 * d2);

		resN = lowestFractionNum(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the numerator.
		resD = lowestFractionDen(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the denominator.

		cout << "The subtraction of those two fractions = " << resN << "/" << resD << endl;
		return;
	}

	int mutliply(int n1, int d1, int n2, int d2)
	{
		int resN;
		int resD;
		int tmpN;
		int tmpD;

		tmpN = (n1 * n2); // do math with result being numerator and denominator
		tmpD = (d1 * d2);

		resN = lowestFractionNum(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the numerator.
		resD = lowestFractionDen(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the denominator.

		cout << "The multiplication of those two fractions = " << resN << "/" << resD << endl;
		return;
	}
	
	int divide(int n1, int d1, int n2, int d2)
	{
		int resN;
		int resD;
		int tmpN;
		int tmpD;

		tmpN = (n1 * d2); // do math with result being numerator and denominator
		tmpD = (d1 * n2);

		resN = lowestFractionNum(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the numerator.
		resD = lowestFractionDen(tmpN, tmpD); // call lowestFraction method to resolve result to lowest fraction value and return the denominator.

		cout << "The division of those two fractions = " << resN << "/" << resD << endl;
		return;
	}

	string toRationalString(int n1, int d1, int n2, int d2)
	{
		char a[50];
		char b[50];
		char c[50];
		char d[50];
		
		string num1Str = itoa(n1, a, 10);
		string den1Str = itoa(d1, b, 10);
		string num2Str = itoa(n2, c, 10);
		string den2Str = itoa(d2, d, 10);
		string result = "You entered the fractions: " + num1Str + "/" + den1Str  + " and " + num2Str + "/" + den2Str + "\br";
		return result;
	}

	double toDouble(int n1, int d1, int n2, int d2)
	{
		double dblResult1;
		double dblResult2;
		dblResult1 = (double)n1 / d1;
		dblResult2 = (double)n2 / d2;
		cout << "The Double value of fraction 1 is: " << dblResult1 << " and of fraction 2 is: " << dblResult2 << endl;
		return;
	}

	int findGCD(int a, int b)
	{
		if (b == 0)
			return a;
		return findGCD(b, a % b)
	}

	int lowestFractionNum(int num, int den)
	{
		int gComMult;

		gComMult = findGCD(num, den);
		num /= gComMult;
		den /= gComMult;
		
		return num;
	}

	int lowestFractionDen(int num, int den)
	{
		int gComMult;

		gComMult = findGCD(num, den);
		num /= gComMult;
		den /= gComMult;

		return den;
	}
};