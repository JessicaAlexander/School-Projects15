#include "pch.h"
#include "fractionType.h"

fractionType::fractionType()
{
	numerator = 0;
	denominator = 1;
}

fractionType::fractionType(int num, int den)
{
	numerator = num;
	denominator = den;
}

void fractionType::setNumerator(int n)
{
	numerator = n;
}

void fractionType::setDenominator(int n)
{
	denominator = n;
}

int fractionType::getNumerator() const
{
	return numerator;
}

int fractionType::getDenominator() const
{
	return denominator;
}

fractionType fractionType::operator+(fractionType rightFr)
{
	fractionType frac;
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	int sumnumer = (a * d + b * c);
	int denominator = (b * d);
	frac.setNumerator(sumnumer);
	frac.setDenominator(denominator);
	return frac;
}

fractionType fractionType::operator-(fractionType rightFr)
{
	fractionType frac;
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	int subnumer = (a * d - b * c);
	int denominator = (b * d);
	frac.setNumerator(subnumer);
	frac.setDenominator(denominator);
	return frac;
}

fractionType fractionType::operator*(fractionType rightFr)
{
	fractionType frac;
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	int mulnumer = (a * c);
	int muldenominator = (b * d);
	frac.setNumerator(mulnumer);
	frac.setDenominator(muldenominator);
	return frac;
}

fractionType fractionType::operator/(fractionType rightFr)
{
	fractionType frac;
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	int divnumer = (a * d);
	int divdenominator = (c * b);
	frac.setNumerator(divnumer);
	frac.setDenominator(divdenominator);
	return frac;
}

bool fractionType::operator!=(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 != n2) || (d1 != d2))
		return true;
	else
		return false;
}

bool fractionType::operator==(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 == n2) && (d1 == d2))
		return true;
	else
		return false;
}

bool fractionType::operator<=(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 / d1) <= (n2 / d2))
		return true;
	else
		return false;
}

bool fractionType::operator>=(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 / d1) >= (n2 / d2))
		return true;
	else
		return false;
}

bool fractionType::operator<(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 / d1) < (n2 / d2))
		return true;
	else
		return false;
}

bool fractionType::operator>(fractionType rightFr) const
{
	int a = numerator;
	int b = denominator;
	int c = rightFr.numerator;
	int d = rightFr.denominator;
	double n1 = a * d;
	double d1 = b * d;
	double n2 = c * b;
	double d2 = d * b;
	if ((n1 / d1) > (n2 / d2))
		return true;
	else
		return false;
}

ostream& operator<<(ostream& os, const fractionType& fraction)
{
	os << fraction.numerator << "/" << fraction.denominator;
	return os;
}

istream& operator>>(istream& is, fractionType& fraction)
{
	char ch;
	is >> fraction.numerator;
	is >> ch;
	is >> fraction.denominator;
	return is;
}