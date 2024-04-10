// Linear search in array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool linearSearchInArray(int arr[], int size, int target, int& checksCount) {
    for (int i = 0; i < size; i++) {
        checksCount++;
        if (arr[i] == target) {
            return true; // Tърсеното число е намерено
        }
    }
    return false; // Търсеното число НЕ е намерено
}


int main() {
    int arr[] = { 1, 1, 5, 4, 3, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int targets[] = { 1, 2, 3, 4 };

    bool result = true;
    int checksCount = 0; // Променлива за броя на проверките
    bool allFound = true;

    // Претърсване на всеки елемент от масива targets[]
    for (int i = 0; i < 4; i++) {
        result = linearSearchInArray(arr, size, targets[i], checksCount);
        if (result == false) {
            allFound = false;
            cout << "Липсва числото " << targets[i] << " в масива.\n";
            break;
        }
    }

    if (allFound == true) {
        cout << "Числата 1, 2, 3 и 4 са намерени в масива.\n";
    }

    cout << "Брой проверки: " << checksCount << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
