// Minimum element and it's index algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int arrLength = 6;

int main()
{
	int arrayA[arrLength] = { 3, 11, 4, 9, 1, 7 };

	int min = arrayA[0];
	int index = 0;
	for (int i = 0; i < arrLength; i++) {
		if (arrayA[i] < min) {
			min = arrayA[i];
			index = i;
		}
	}
	cout << "Min value: " << min << endl;
	cout << "Index: " << index << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
