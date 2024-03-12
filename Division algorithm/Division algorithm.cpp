// Division algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a[4];
	int b[4];
	int c[5] = { 0 };
	int naum = 0;

	for (int k = 0; k < 4; k++)
	{
		cin >> a[k];
	}

	for (int k = 0; k < 4; k++)
	{
		cin >> b[k];
	}

	for (int k = 3; k >= 0; k--)
	{
		int sum = a[k] + b[k] + naum;
		c[k + 1] = sum % 10;
		naum = sum / 10;
	}

	c[0] = naum;

	int startIndex = (c[0] != 0) ? 0 : 1;
	for (int k = startIndex; k < 5; k++)
	{
		cout << c[k] << " ";
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
