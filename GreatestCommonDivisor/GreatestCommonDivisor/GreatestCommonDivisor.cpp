// GreatestCommonDivisor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int gcd(int, int);
int main()
{
	int X, Y;
	cout << "Enter the first integer(X): ";
	cin >> X;

	cout << "Enter the second integer(Y): ";
	cin >> Y;

	cout << "G.C.D. of " << X << " and " << Y << " is: " << gcd (X, Y);
	cout << "\n\n\t";
	system("pause");
	return 0;
}

int gcd(int X, int Y)
{
	if (Y == 0)
		return X;

	return gcd(Y, X % Y);
}