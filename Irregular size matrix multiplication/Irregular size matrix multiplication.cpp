// Irregular size matrix multiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Matrix A: \n";

	int matrixA[3][4] = { {4, 8, 9, 4}, {3, 3, 1, 7}, {6, 4, 6, 2} };

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nMatrix B: \n";

	int matrixB[4][2] = { {4, 3}, {8, 4}, {9, 1}, {4, 7} };

	for (int k = 0; k < 4; k++)
	{
		for (int n = 0; n < 2; n++)
		{
			cout << matrixB[k][n] << " ";
		}
		cout << endl;
	}

	int matrixC[3][2];
	// index row = i, index column = k
	// matrixC [i, k] = ?
	
	for (int i = 0; i < 3; i++) 
	{
		for (int k = 0; k < 2; k++) 
		{
			// ред i на matrixA * стълб k на matrixB = скаларно произведение
			matrixC[i][k] = 0;
			for (int m = 0; m < 4; m++) 
			{
				matrixC[i][k] = matrixC[i][k] + matrixA[i][m] * matrixB[m][k];
			}
		}
	}

	cout << "\nMatrix C: \n";

	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			cout << matrixC[i][k] << " ";
		}
		cout << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
