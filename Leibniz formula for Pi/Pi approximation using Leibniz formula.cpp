// Pi approximation using Leibniz formula.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int precision;
    cin >> precision; //брой итерации (точност)

    double pi = 0.0;
    int i = 0;
    int znak = 1;
    while (i < precision) {
        pi = pi + znak * 4.0 / (2 * i + 1);
        znak = znak * (-1); // алтернация на знака
        i++;
    }

    cout << "Приблизителното изчисление на Pi, използвайки реда на Лайбниц, с " 
         << precision << " итерации е: " << pi << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
