// FractionMath.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"
#include <iostream>
#include "fractionType.h"
using namespace std;

int main() {
	int choice;
	fractionType fraction1, fraction2, result;
	bool boolean;

	while (true)
	{
		cout << "\n\tFraction Math" << endl;
		cout << "1.Addition" << endl;
		cout << "2.Subtraction" << endl;
		cout << "3.Multiplication" << endl;
		cout << "4.Division" << endl;
		cout << "5.Test Equality" << endl;
		cout << "6.Test In-Equality" << endl;
		cout << "7.Test Less than or equal to" << endl;
		cout << "8.Test Greater than or equal to" << endl;
		cout << "9.Test Less than" << endl;
		cout << "10.Test Greater than" << endl;
		cout << "11.Exit" << endl;
		cout << "Enter Choice :";
		cin >> choice;
		switch (choice)
		{

		case 1: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			result = fraction1 + fraction2;
			cout << fraction1;
			cout << " + ";
			cout << fraction2;
			cout << " = ";
			cout << result;
			cout << endl;
			continue;
		}

		case 2: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			result = fraction1 - fraction2;
			cout << fraction1;
			cout << " - ";
			cout << fraction2;
			cout << " = ";
			cout << result;
			cout << endl;
			continue;
		}

		case 3: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			result = fraction1 * fraction2;
			cout << fraction1;
			cout << " * ";
			cout << fraction2;
			cout << " = ";
			cout << result;
			cout << endl;
			continue;
		}

		case 4: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			result = fraction1 / fraction2;
			cout << fraction1;
			cout << " / ";
			cout << fraction2;
			cout << " = ";
			cout << result;
			cout << endl;
			continue;
		}

		case 5: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 == fraction2;
			if (boolean)
				cout << fraction1 << " is equal to " << fraction2 << endl;
			else
				cout << fraction1 << " is not equal to " << fraction2 << endl;
			continue;
		}

		case 6: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 != fraction2;
			if (boolean)
				cout << fraction1 << " is not equal to " << fraction2 << endl;
			else
				cout << fraction1 << " is equal to " << fraction2 << endl;
			continue;
		}

		case 7: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 <= fraction2;
			if (boolean)
				cout << fraction1 << " is less than or equal to " << fraction2 << endl;
			else
				cout << fraction1 << " is not less than or equal to " << fraction2 << endl;
			continue;
		}

		case 8: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 >= fraction2;
			if (boolean)
				cout << fraction1 << " is greater than or equal to " << fraction2 << endl;
			else
				cout << fraction1 << " is not greater than or equal to " << fraction2 << endl;
			continue;
		}

		case 9: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 < fraction2;
			if (boolean)
				cout << fraction1 << " is less than " << fraction2 << endl;
			else
				cout << fraction1 << " is not less than " << fraction2 << endl;
			continue;
		}

		case 10: {
			cout << "Enter fraction 1: " << endl;
			cin >> fraction1;
			cout << "Enter fraction 2: " << endl;
			cin >> fraction2;
			boolean = fraction1 > fraction2;
			if (boolean)
				cout << fraction1 << " is greater than " << fraction2 << endl;
			else
				cout << fraction1 << " is not greater than " << fraction2 << endl;
			continue;
		}

		case 11: {
			break;
		}

		default: {
			cout << "** Invalid Choice **" << endl;
			continue;
		}
		}
		break;
	}
	return 0;
}