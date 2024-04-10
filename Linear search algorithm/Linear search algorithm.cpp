// Linear search algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
	int i = 0;
	while (i < size) {
		if (arr[i] == target) {
			return i;
		}
		i++;
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 1, 5, 4, 3, 6}; 
	int size = sizeof(arr) / sizeof(arr[0]);

	int target = 4;

	int result = linearSearch(arr, size, target);
	if (result != -1) {
		cout << "Елементът " << target << " е намерен на позиция " << result << endl;
	} else {
		cout << "Елементът " << target << " не е намерен в масива." << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu