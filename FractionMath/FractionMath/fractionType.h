#pragma once
#define H_fraction
#include <string>
#include <iostream>

using namespace std;

class fractionType
{
	public:
	fractionType();
	fractionType(int numer, int denom);
	void setNumerator(int);
	void setDenominator(int);
	int getNumerator() const;
	int getDenominator() const;
	fractionType operator+(fractionType rightFr);
	fractionType operator-(fractionType rightFr);
	fractionType operator*(fractionType rightFr);
	fractionType operator/(fractionType rightFr);
	bool operator!=(fractionType rightFr) const;
	bool operator==(fractionType rightFr) const;
	bool operator<=(fractionType rightFr) const;
	bool operator>=(fractionType rightFr) const;
	bool operator<(fractionType rightFr) const;
	bool operator>(fractionType rightFr) const;

	friend ostream& operator<<(ostream&, const fractionType&);

	friend istream& operator>>(istream&, fractionType&);
private:
	int numerator;
	int denominator;
};