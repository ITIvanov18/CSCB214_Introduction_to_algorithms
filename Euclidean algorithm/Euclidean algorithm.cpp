// Euclidean algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

start:
	r = a % b;
	if (r == 0)
	{
		goto finish;
	}
	else
	{
		a = b;
		b = r;
		goto start;
	}

finish:
	cout << b << " е най-големият общ делител";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
