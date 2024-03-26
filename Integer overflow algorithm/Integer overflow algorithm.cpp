// Integer overflow algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int i = 1;
start:
	if (i < 0) 
	{
		goto finish;
	}
	i++;
	goto start;

finish:
	std::cout << "Overflow occurred!" << std::endl;
	std::cout << "The value of i: " << i <<std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
