// Function of sin(x) with Mclaurin series expansion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

double degreesToRadians(double degrees) {
    return PI * degrees / 180;
}

int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; i++){
        result = result * i;
    }
    return result;
}

double MaclaurinExpansion(double x) {
    double sum = 0;
    int i = x;   //общ член <- x
    double znamenatel = 1;

    while (znamenatel >= 1) {
        znamenatel = factorial(2 * i + 1);
        sum = sum + (pow(-1, i) / znamenatel) * pow(x, (2 * i + 1));
        i++;
    }
    cout << "Знаменателят е препълнен." << endl;
    return sum;
}

int main() {
    double x;
    cout << "Въведете ъгъл в градуси: ";
    cin >> x;

    double radians = degreesToRadians(x); 
    double sin = MaclaurinExpansion(radians);
    cout << "sin(" << x << ") = " << "sin(" << radians << ") = " << sin << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
