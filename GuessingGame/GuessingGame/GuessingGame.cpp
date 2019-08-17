// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num, guess, range, level; 
	bool isGuessed;
	int num_of_chances = 0;
	int play = 1;
	int win = 0;
	int loss = 0;
	while (play == 1)
	{
		cout << "Please enter the level of difficulty: "
			<< "1 for easy, "
			<< "2 for medium, and "
			<< "3 for hard " << endl;
		cin >> level;
		if (level == 1) {
			range = 100;
		}
		else if (level == 2) {
			range = 1000;
		}
		else
		{
			range = 10000;
		}
		srand(time(0));
		num = rand() % range;
		int num_of_chances = 0;
		isGuessed = false;
		while ((!isGuessed) && (num_of_chances < 10))
		{
			cout << "Enter an integer greator than 0 and less than " << range << endl;
			cin >> guess;
			num_of_chances += 1;
			cout << endl;
			if (guess == num)
			{
				cout << "Your number is correct!!" << endl;
				cout << endl;
				win += 1;
				isGuessed = true;
			}
			else if (guess < num) {
				cout << "Your guess is lower than the randomly chosen number " << endl << endl;
			}
			else {
				cout << "Your guess is higher than the randomly chosen number " << endl << endl;
			}
		}
		if (guess != num) {
			cout << "The randon number was " << num << endl;
			loss += 1;
		}
		cout << "If you want to play again enter 1 else 0!" << endl;
		cin >> play;
	}
	cout << "Thank you for playing!" << endl;
	cout << "You won: " << win << " times" << endl;
	cout << "You lost: " << loss << " times" << endl;
	return 0;
}