// Matrix multiplication algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int SIZE = 3;

int main()
{
	cout << "Matrix A: \n";

	int matrixA[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nMatrix B: \n";

	int matrixB[3][3] = { {1, 1, 1}, {1, 1, 1}, {1, 1, 1} };

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			cout << matrixB[i][j] << " ";
		}
		cout << endl;
	}

	int matrixC[3][3];
	int k = 0;

	// index row = i, index column = j
	// matrixC [i, j] = ?

	for (int i = 0; i < SIZE; ++i) 
	{
		for (int j = 0; j < SIZE; ++j) 
		{
			// ред i на matrixA * стълб j на matrixB = скаларно произведение
			matrixC[i][j] = 0;
			for (int k = 0; k < SIZE; ++k) 
			{
				matrixC[i][j] = matrixC[i][j] + matrixA[i][k] * matrixB[k][j];
			}
		}
	}

	cout << "\nMatrix C: \n";

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			cout << matrixC[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu