// Integer factoriel calculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits.h>
using namespace std;

int factoriel(int n) {
	int fac = 1;
	for (int broqch = 1; broqch <= n; broqch++)
	{
		fac = fac * broqch;
	}
	return fac;
}

int main()
{
	int num;
	cin >> num;

	int fac = 0;
	if (num < 0) {
		cerr << "Грешка! Числото е задължително да бъде положително." << endl;
	} else {
		fac = fac + factoriel(num);
		cout << "Факториелът на " << num << " е " << fac << endl;
	}

	int number = 1;
	int result = 1;

	// Проверяваме дали резултатът е извън диапазона на int
	while (result > 0) {
		if (result > INT_MAX / number) {
			cout << "Препълването настъпва при factoriel(" << (number - 1) << ")" << endl;
			break;
		}
		result = result * number;
		number++;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
