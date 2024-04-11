// Binary search algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int binarySearch(int arr[], int lqvaGranica, int dqsnaGranica, int x)
{
    while (lqvaGranica <= dqsnaGranica) {
        int sreda = (dqsnaGranica + lqvaGranica) / 2;

        // Проверка дали x е по средата
        if (arr[sreda] == x) {
            return sreda;
        }

        if (arr[sreda] < x) {
            dqsnaGranica = sreda + 1;
            // Ако x е по-голямо се пропуска лявата половина
        } else {
            lqvaGranica = sreda - 1;
            // Ако x е по-малко се пропуска дясната половина
        }
    }
    return -1;
}

int main(void)
{
    int arr[] = { 6, 3, 4, 97, 10, 5, 8 };
    int x = 10;
    int size = sizeof(arr);
    int result = binarySearch(arr, 0, size - 1, x);

    if (result == -1) {
        cout << "Елементът НЕ се намира в масива." << endl;
    } else {
        cout << "Елементът се намира на индекс " << result << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu