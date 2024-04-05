// Pi approximation with epsilon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double piVurhu4 = 0.0;
    double znak = 1.0;
    double previousPi = 0.0;
    double epsilon = 0.0001;
    double pi = 0.0;
    int index = 1;

    while (true) {
        piVurhu4 = piVurhu4 + (znak / (2.0 * index - 1));
        znak = znak * (-1);

        pi = piVurhu4 * 4;

        if (index % 100 == 0) {
            cout << pi << endl;
        }

        if (abs(pi - previousPi) < epsilon) {
            break;
        }

        previousPi = pi;
        index++;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
