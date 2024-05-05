// Insertion sort algorithm operations count (10000, 15000, 20000, 30000 elements).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionSort(int masiv[], int size, int& counter) {
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
}

/*
void insertionSort(int masiv[], int size, int& counter) {
	for (int i = 2; i < size; i++) {
		masiv[0] = masiv[i];    // котва на index 0
		int buffer = masiv[i];
		int j = i - 1;

		for (j; j >= 0; j--) {
			if (buffer < masiv[j]) {
				counter++;
				masiv[j + 1] = masiv[j];
			}
			else {
				break;
			}
		}
		masiv[j + 1] = buffer;
	}
}
*/

int main() {
	int sizes[] = { 10000, 15000, 20000, 30000 };

	for (int size : sizes) {
		int* orderedArray = new int[size];
		int* reversedArray = new int[size];

		// Генериране на нареден и обратно нареден масив
		for (int i = 0; i < size; i++) {
			orderedArray[i] = i;
			reversedArray[i] = size - i;
		}

		int orderedCounter = 0;
		int reversedCounter = 0;

		insertionSort(orderedArray, size, orderedCounter);
		insertionSort(reversedArray, size, reversedCounter);

		cout << "Размер на масива: " << size << endl;
		cout << "Сравнения при нареден масив: " << orderedCounter << endl;
		cout << "Сравнения при обратно нареден масив: " << reversedCounter << endl;
		cout << "\n";

		delete[] orderedArray;
		delete[] reversedArray;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
