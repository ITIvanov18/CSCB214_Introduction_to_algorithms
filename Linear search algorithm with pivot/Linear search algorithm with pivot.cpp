// Linear search algorithm with pivot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool linearSearchWithPivot(char arr[], int size, char target, int& checksCount, int& kotva) {
    for (int i = kotva - 1; i < size; i++) {  // i = kotva - 1, защото иначе обхождането започва от arr[1]
        checksCount++;
        if (arr[i] == target) {
            return true; // Tърсената буква е намерена
        }
    }
    return false; // Търсената буква НЕ е намерена
}

int main() {
    char arr[] = { 'i', 'v', 'a', 'n', 'o', 'v' };
    int size = sizeof(arr) / sizeof(arr[0]);
    char targets[] = { 'a', 'b', 'v', 'g' };

    bool result = true, allFound = true;
    int checksCount = 0, kotva = 0;

    for (int i = 0; i < 4; i++) {
        result = linearSearchWithPivot(arr, size, targets[i], checksCount, kotva);
        if (result == false) {
            allFound = false;
            cout << "Липсва буквата " << targets[i] << " в масива.\n";
        }
        // В случай, че някоя буква е намерена, инкрементираме котвата
        kotva++;
    }

    if (allFound == true) {
        cout << "Буквите a, b, v и g са намерени в масива.\n";
    }

    cout << "Брой проверки: " << checksCount << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
