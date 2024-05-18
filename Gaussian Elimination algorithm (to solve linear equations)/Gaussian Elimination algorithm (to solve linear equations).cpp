// Gaussian Elimination algorithm (to solve linear equations).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int matrixA[3][3] = { {7,8,9}, {3,5,7}, {2,4,6} };
	int matrixC[3] = { 3,10,6 };

	cout << "Матрица преди Гаусовата елиминация" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\nВекторът C:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << matrixC[i] << " ";
	}
	cout << endl;

	//обхващащ цикъл
	for (int k = 0; k < 3; k++){
		int delitel = matrixA[k][k];
		//получаване на 1 по диагонала
		// трябва да разделя на а[k][k]

		for (int j = k ; j < 3; j++)
		{
			matrixA[k][j] = matrixA[k][j] / delitel;
		}
		matrixC[k] = matrixC[k] / delitel;


		//нулиране на елементите под диагонала (колона k)
		for (int i = k + 1; i < 3; i++)
		{
			//Умножаваме k-тия ред с matrixA[k][i]
			// събираме i-ти ред и к-ти ред, за да
			// получим 0 на к-то място
			for (int j = k; j < 3; j++) {
				matrixA[i][j] = matrixA[i][j] - matrixA[k][j];
				matrixA[i][j] = matrixA[i][j] - matrixA[k][j] * matrixA[i][k];
			}
			matrixC[i] = matrixC[i] - matrixC[i] * matrixA[i][k];
		}
	}

	cout << "\nРазширена матрица след Гаусовата елиминация:" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrixA[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
