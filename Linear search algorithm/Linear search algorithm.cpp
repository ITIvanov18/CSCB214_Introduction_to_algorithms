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
	int arr[] = { 2, 3, 0, 8, 7, 6, 4, 9 }; 
	int size = sizeof(arr);
	int target = 7;

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