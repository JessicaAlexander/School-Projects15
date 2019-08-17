// Fractions Math Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
void get_fraction(int& num1, int& num2, int& den1, int& den2);

using namespace std;

enum mathOperation { ADD, SUBTRACT, MULTIPLY, DIVIDE, EXIT };
void addition(int& num1, int& num2, int& den1, int& den2, int& resultNum, int& resultDen)
{	
	int rn1, rn2, rd1, rd2;
	rn1 = num1 * den2;
	rd1 = den1 * den2;
	rn2 = num2 * den1;
	rd2 = den2 * den1;
	resultNum = rn1 + rn2;
	resultDen = rd1;
}

void subtraction(int& num1, int& num2, int& den1, int& den2, int& resultNum, int& resultDen)
{
	int rn1, rn2, rd1, rd2;
	rn1 = num1 * den2;
	rd1 = den1 * den2;
	rn2 = num2 * den1;
	rd2 = den2 * den1;
	resultNum = rn1 - rn2;
	resultDen = rd1;
}

void multiplication(int& num1, int& num2, int& den1, int& den2, int& resultNum, int& resultDen)
{
	int rn1, rn2, rd1, rd2;
	rn1 = num1 * num2;
	rd1 = den1 * den2;
	rn2 = num2 * num1;
	rd2 = den2 * den1;
	resultNum = rn1;
	resultDen = rd1;
}

void division(int& num1, int& num2, int& den1, int& den2, int& resultNum, int& resultDen)
{
	int rn1, rn2, rd1, rd2;
	rn1 = num1 * den2;
	rd1 = den1 * num2;
	rn2 = num1 * den2;
	rd2 = den1 * num2;
	resultNum = rn1;
	resultDen = rd1;
}

int displayMenu()
{
	int MenuChoice;
	cout << "Math Menu" << endl;
	cout << "1:   ADD" << endl;
	cout << "2.   SUBTRACT" << endl;
	cout << "3.   MULTIPLY" << endl;
	cout << "4.   DIVIDE" << endl;
	cout << "5.   EXIT" << endl;
	cout << "ENTER YOUR CHOICE: ";
	cin >> MenuChoice;
	return MenuChoice;
}

void get_fraction(int& num1, int& num2, int& den1, int& den2)
{
	cout << "\nEnter numerator and denominator for first number:";
	cin >> num1;
	cin >> den1;
	cout << "\nEnter numerator and denominator for second number:";
	cin >> num2;
	cin >> den2;
}

int main()
{
	int num1;
	int num2;
	int den1;
	int den2;
	int resultNum;
	int resultDen;
	int MenuChoice;
	bool stopProgram = false;

	while (!stopProgram)
	{
		MenuChoice = displayMenu();

		switch (MenuChoice)
		{
		case 1:
			get_fraction(num1, num2, den1, den2);
			addition(num1, num2, den1, den2, resultNum, resultDen);
			cout << num1 << "/" << den1 << "+" << num2 << "/" << den2 << " = " << resultNum << "/" << resultDen << endl;
			break;
		case 2:
			get_fraction(num1, num2, den1, den2);
			subtraction(num1, num2, den1, den2, resultNum, resultDen);
			cout << num1 << "/" << den1 << "-" << num2 << "/" << den2 << " = " << resultNum << "/" << resultDen << endl;
			break;
		case 3:
			get_fraction(num1, num2, den1, den2);
			multiplication(num1, num2, den1, den2, resultNum, resultDen);
			cout << num1 << "/" << den1 << "*" << num2 << "/" << den2 << " = " << resultNum << "/" << resultDen << endl;
			break;
		case 4:
			get_fraction(num1, num2, den1, den2);
			division(num1, num2, den1, den2, resultNum, resultDen);
			cout << num1 << "/" << den1 << "/" << num2 << "/" << den2 << " = " << resultNum << "/" << resultDen << endl;
			break;
		case 5:
			cout << "EXIT";
			stopProgram = true;
			cout << " Goodbye";
			break;
		default:
			cout << "Invalid Entry" << endl;
		}
	}

	return 0;
}

