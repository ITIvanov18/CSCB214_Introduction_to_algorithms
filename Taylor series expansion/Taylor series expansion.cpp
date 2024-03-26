// Taylor series expansion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int factoriel(int n) {
	int fac = 1;
	for (int i = 1; i <= n; i++)
	{
		fac = fac * i;
	}
	return fac;
}

int main()
{
	int znak = 1;
	double sin = 0, x, gradusi;
	cout << "Въведете ъгъл в градуси: ";
	cin >> gradusi;

	x = 3.14159 * gradusi / 180;

	for (int i = 1; i < 7; i++)
	{
		sin = sin + znak * pow(x, 2 * i - 1) / factoriel(2 * i - 1);
		znak = -znak;
	}

	cout << "sin(" << gradusi << ") = " << sin << endl;

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
