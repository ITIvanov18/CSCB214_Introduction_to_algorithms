// Gauss summation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;

	for (int i = 0; i < n + 1; i++)
	{
		sum = sum + i;
	}

	cout << "Натрупаната сума е " << sum << "." << endl;

	int gSum = n * (n + 1) / 2;
	cout << "Сумата по формулата на Гаус е " << gSum << "." << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
