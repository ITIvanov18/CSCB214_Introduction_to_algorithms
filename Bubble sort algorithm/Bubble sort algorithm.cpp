// Bubble sort algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size, int counter = 0) {
	bool swapped = true;

	while (swapped) {
		swapped = false;

		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				counter++;
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}

	}
	cout << "Broi proverki: " << counter << endl;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = { 7, 3, 1, 4, 9, 15, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Shuffled array: \n";
	printArray(arr, size);

	cout << "\n" << endl;
	bubbleSort(arr, size);

	cout << "Sorted array: \n";
	printArray(arr, size);


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
