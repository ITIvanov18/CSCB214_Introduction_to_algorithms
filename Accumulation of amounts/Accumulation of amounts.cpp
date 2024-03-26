// Accumulation of amounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
using namespace std;

void zadacha1() {
    int n;
    cin >> n;

    int Sum = 0;
    for (int i = 1; i <= n; i++) {
        Sum = Sum + i * i;
    }

    cout << "Сумата от квадратите на числата от 1 до "
        << n << " е: " << Sum << endl;
}

void zadacha2() {
    int n;
    cin >> n;

    int Sum = 0;
    for (int i = 2; i <= n; i++) {
        Sum = Sum + (pow(i, 2) - 2 * i);
    }

    cout << "Сумата на числата от 2 до " << n << 
        " по формулата (i^2 - 2*i) е: " << Sum << endl;
}

void zadacha3() {
    int n;
    cin >> n;

    int Sum = 0;
    for (int i = 3; i <= n; i++) {
        Sum = Sum + (pow(i, 3) - 2 * i);
    }

    cout << "Сумата на числата от 3 до " << n <<
        " по формулата (i^3 - 2*i) е: " << Sum << endl;
}


int main() {
    zadacha1();
    zadacha2();
    zadacha3();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
