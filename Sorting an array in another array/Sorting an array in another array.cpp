// Sorting an array in another array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int arrLength = 9;

/*
void printArray(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
*/

int main()
{
	//int arrayA[arrLength] = { 3, 11, 2, 9, 1, 5 };
	int arrayA[arrLength] = { 2, 1, 4, 1, 6, 5, 0, 4, 8};
	int arrayB[arrLength];

	cout << "Original array: ";
	for (int i = 0; i < arrLength; i++) {
		cout << arrayA[i] << " ";
	}
	cout << endl;

	int max = arrayA[0];
	for (int i = 0; i < arrLength; i++) {
		if (arrayA[i] > max) {
			max = arrayA[i];
		}
	}
	cout << "Max value: " << max << endl;

	int min = arrayA[0];
	for (int i = 0; i < arrLength; i++) {
		if (arrayA[i] < min) {
			min = arrayA[i];
		}
	}
	cout << "Min value: " << min << endl;

	// Поставяме min и max елементите в началото и съответно в края на arrayB
	arrayB[0] = min;
	arrayB[arrLength - 1] = max;

	for (int i = 0; i < arrLength; i++) {
		int smallestElementIndex = 0;

		// Откриваме кой е индексът на най-малкия елемент в arrayA
		for (int j = 1; j < arrLength - 1; j++) {
			if (arrayA[j] < arrayA[smallestElementIndex]) {
				smallestElementIndex = j;
			}
		}
		// Поставяме най-малкия елемент в началото на arrayB
		arrayB[i] = arrayA[smallestElementIndex];
		// Заменяме стойността на най-малкия елемент в arrayA със стойността на най-големия
		arrayA[smallestElementIndex] = max;

	/*   Отпечатваме arrayB на всяка итерация
		cout << "ArrayB after iteration " << i + 1 << ": ";
		printArray(arrayB, arrLength);
	*/
	}

	cout << "Sorted array: ";
	for (int i : arrayB) {
		cout << i << " ";
	}
	cout << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

