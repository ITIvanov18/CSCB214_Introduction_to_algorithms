// Insertion sort without sentinel (using while loop).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(int masiv[], int size) {
	for (int i = 0; i < size; i++) {
		cout << masiv[i] << " ";
	}
}

int main()
{
	int masiv[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int size = sizeof(masiv) / sizeof(masiv[0]);
	int counter = 0;

	printArray(masiv, size);
	cout << endl;

	for (int i = 1; i < size; i++) {
		int buffer = masiv[i];
		int j = i - 1;

		while (j >= 0 && masiv[j] > buffer) {
			counter++;
			masiv[j + 1] = masiv[j];
			j--;
		}
		masiv[j + 1] = buffer;
	}

	printArray(masiv, size);
	cout << "\nBroi sravneniq: " << counter << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

