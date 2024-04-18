// isSorted array function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		if (arr[i - 1] > arr[i]) {
			return false;
		}
	}

	return true;
}

int main() {
	int arr[] = { 1, 3, 7, 4, 8, 10, 15 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Is current array sorted? - ";
	if (isSorted(arr, size)) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu