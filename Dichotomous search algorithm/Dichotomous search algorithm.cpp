// Dichotomous search algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int dihoSearch(char arr[], int lqvaGranica, int dqsnaGranica, char target, int& checksCount){
    while (lqvaGranica <= dqsnaGranica) {
        int sreda = (dqsnaGranica + lqvaGranica) / 2;
        checksCount++;

        // Проверка дали x е по средата
        if (arr[sreda] == target) {
            return sreda;
        }

        if (arr[sreda] < target) {
            lqvaGranica = sreda + 1;
            // Ако x е по-голямо се пропуска лявата половина
        } else {
            dqsnaGranica = sreda - 1;
            // Ако x е по-малко се пропуска дясната половина
        }
    }
    return -1;
}

int main() {
    char arr[] = "115436ivanov";
    char targets[] = { '9', '8', '7', 'q', 'y', 'w', 'o' };
    int size = sizeof(arr) - 1; //Изваждам 1 заради терминиращия null символ накрая
    int targetsSize = sizeof(targets) / sizeof(targets[0]);
    int checksCount = 0;

    for (int i = 0; i < targetsSize; i++) {
        int result = dihoSearch(arr, 0, size - 1, targets[i], checksCount);
        if (result != -1) {
            cout << "Елементът " << targets[i] << " се намира на индекс " << result << endl;
        } else {
            cout << "Елементът " << targets[i] << " НЕ се намира в масива." << endl;
        }
    }

    cout << "Брой проверки: " << checksCount << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
