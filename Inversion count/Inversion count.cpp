// Inversion count.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 3, 11, 2, 9, 1, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int naredeni_dvoiki = 0, inversii = 0;

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			naredeni_dvoiki++;
			if (arr[i] > arr[j]) {
				inversii++;
			}
		}
	}

	cout << naredeni_dvoiki << " naredeni dvoiki" << endl;
	cout << inversii << " inversii" << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
