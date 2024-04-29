// Insertion sort algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(int masiv[], int size) {
	for (int i = 1; i < size; i++) {
		cout << masiv[i] << " ";
	}
}

int main()
{
	int masiv[] = { 999, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int size = sizeof(masiv) / sizeof(masiv[0]);
	int counter = 0;

	printArray(masiv, size);
	cout << endl;

	for (int i = 2; i < size; i++) {
		masiv[0] = masiv[i];    // kotva na index 0
		int buffer = masiv[i];
		int j = i - 1;
	begin:
		if (buffer < masiv[j]) {
			counter++;
			masiv[j + 1] = masiv[j];
			j--;
			goto begin;
		}
		masiv[j + 1] = buffer;
	}

	printArray(masiv, size);
	cout << "\nBroi sravneniq: " << counter << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
