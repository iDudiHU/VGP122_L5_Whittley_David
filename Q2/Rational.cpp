#include <iostream>
#include<cmath>

#include "Rational.h"

using namespace std;

Rational::Rational(int numerator, int denominator) : numerator(numerator), denominator(denominator) /* short hand way to init memeber variables*/
{
}

Rational::Rational(const Rational& aRational) {

	setNum(aRational.getNum());
	setDem(aRational.getDem());
}

Rational::~Rational()
{
}

void Rational::setNum(int a)
{
	numerator = a;
}

void Rational::setDem(int b)
{
	denominator = b;
}


int Rational::getNum() const
{
	return numerator;
}

int Rational::getDem() const
{
	return denominator;
}


void Rational::GCD(Rational g1)
{

	int temp = 1, a = g1.getNum(), b = g1.getDem();

	if (a < 0) {
		a *= 1;
	}
	else if (b < 0) {
		b *= -1;
	}

	while (b > 0)
	{
		temp = b;
		b = a % temp;
		a = temp;
	}

	cout << "The fraction (" << g1.getNum() << " / " << g1.getDem() << ") can be simplified to (" << g1.getNum() / temp << " / "
		<< g1.getDem() / temp << ") using the GCD " << temp << "." << endl;
}


int Rational::Simplify(int a, int b)
{
	Rational sim;

	int temp = 1, x, y, r;

	if (a > b)
	{
		x = a;
		y = b;
	}

	else
	{
		x = b;
		y = a;

	}

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}

	return x;

}


void Rational::Add(Rational a1)
{

	int cd = getDem() * a1.getDem();
	int Num1 = getNum() * a1.getDem();
	int Num2 = a1.getNum() * getDem();


	cout << "SUM: (" << getNum() << " / " << getDem() << ") + (" << a1.getNum() << " / " << a1.getDem() << ") = ("
		<< (Num1 + Num2) / Simplify(abs(Num1 + Num2), abs(cd)) << " / " << cd / Simplify(abs(Num1 + Num2), abs(cd)) << ")" << endl;

}

void Rational::Subtract(Rational s1)
{

	int cds = getDem() * s1.getDem();
	int Num3 = getNum() * s1.getDem();
	int Num4 = s1.getNum() * getDem();

	cout << "SUBTRACTION: (" << getNum() << " / " << getDem() << ") - (" << s1.getNum() << " / " << s1.getDem() << ") = ("
		<< (Num3 - Num4) / Simplify(abs(Num3 - Num4), abs(cds)) << " / " << cds / Simplify(abs(Num3 - Num4), abs(cds)) << ")" << endl;
}

void Rational::Multiply(Rational m1)
{

	int cdr = getDem() * m1.getDem();
	int Num5 = getNum() * m1.getNum();

	cout << "MULTIPLICATION: (" << getNum() << " / " << getDem() << ") * (" << m1.getNum() << " / " << m1.getDem() << ") = ("
		<< (Num5) / Simplify(abs(Num5), abs(cdr)) << " / " << cdr / Simplify(abs(Num5), abs(cdr)) << ")" << endl;
}

void Rational::Divide(Rational d1)
{
	int cdd = getDem() * d1.getNum();
	int Num6 = getNum() * d1.getDem();

	cout << "DIVISION: (" << getNum() << " / " << getDem() << ") / (" << d1.getNum() << " / " << d1.getDem() << ") = ("
		<< (Num6) / Simplify(abs(Num6), abs(cdd)) << " / " << cdd / Simplify(abs(Num6), abs(cdd)) << ")" << endl;
}



void Rational::DisplayFract(Rational f1) const
{
	cout << "DISPLAY FRACTION: " << f1.getNum() << " / " << f1.getDem() << endl;
}

void Rational::DisplayFloat(Rational f2) const
{

	double q1 = (double)f2.getNum();
	double q2 = (double)f2.getDem();

	cout << "DISPLAY DECIMAL OF FRACTION: " << f2.getNum() << " / " << f2.getDem() << " = " << q1 / q2 << endl;
}