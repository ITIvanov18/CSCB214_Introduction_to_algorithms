// Factorial calculator without recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	int n, fac = 1;
	cin >> n;

	for (int i = 1; i < n + 1; i++)
	{
		fac = fac * i;
	}

	cout << "Факториелът на " << n << " e " << fac << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
