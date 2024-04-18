// Selection sort algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int arrayA[] = { 1, 1, 5, 4, 3, 8 };
	int size = sizeof(arrayA) / sizeof(arrayA[0]);
	int countCheck = 0;

	cout << "Original array: ";
	for (int i = 0; i < size; i++) {
		cout << arrayA[i] << " ";
	}
	cout << "\n" << endl;

	for (int i = 0; i < size - 1; i++) {
		int min = arrayA[i];
		int minElementIndex = i;
		for (int j = i + 1; j < size; j++) {
			countCheck++;
			if (arrayA[j] < min) {
				min = arrayA[j];
				minElementIndex = j;
			}
		}
		arrayA[minElementIndex] = arrayA[i];
		arrayA[i] = min;

		// Отпечатваме min, flag, countCheck и актуализирания arrayA на всяка итерация
		cout << "Обхождане " << i + 1 << ": min = " << min << ", сравнения = " << countCheck << ", flag = " << minElementIndex;
		cout << ", arrayA = ";
		for (int k = 0; k < size; k++) {
			cout << arrayA[k] << " ";
		}
		cout << endl;
		countCheck = 0; // занулявам променливата, за да не се натрупват проверките с всяко обхождане
	}

	cout << "\nSorted array: ";
	for (int i : arrayA) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
