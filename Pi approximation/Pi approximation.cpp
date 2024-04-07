// Pi approximation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double piVurhu4 = 0.0;
    double znak = 1.0;


    for (int i = 1; i <= 10000; i++) {
        piVurhu4 = piVurhu4 + (znak / (2.0 * i - 1));
        znak = znak * (-1);

        if ((i + 1) % 100 == 0) {
            double pi = piVurhu4 * 4;
            cout << pi << endl;
        }
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

