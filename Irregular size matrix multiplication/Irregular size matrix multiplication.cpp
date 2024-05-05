// Irregular size matrix multiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main() {
	cout << "Matrix A: \n";

	int matrixA[4][3] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12} };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "Matrix B: \n";

	int matrixB[4][3] = { {1,1,1}, {1,1,1}, {1,1,1}, {1,1,1} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrixB[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int matrixC[4][3];

	//index row = i, index column = j
	// matrixC [i, j] = ?

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//i-tiq red na a po j-tiq stulb na b- skaralrno proizvedenie;
			matrixC[i][j] = 0;
			for (int k = 0; k < 3; k++)
			{
				matrixC[i][j] = matrixC[i][j] + matrixA[i][k] * matrixB[k][j];
			}

		}
	}

	cout << "Matrix C: \n";

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrixC[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu