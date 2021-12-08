#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
#include <ctime>

#define ARRAY_VALUE_MIN -20
#define ARRAY_VALUE_MAX 30

void initArr(int* arr, int size)
{
	if (!arr)
		return;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % ((ARRAY_VALUE_MAX + 1) - ARRAY_VALUE_MIN) + ARRAY_VALUE_MIN;
	}
}

void printArr(int* arr, int size)
{
	if (!arr)
		return;

	std::cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		std::cout << std::setw(3) << arr[i];
		if (i < size - 1)
		{
			std::cout << ", ";
		}
		else
		{
			std::cout << " ]" << std::endl;
		}
	}
}

bool isEven(int a)
{
	return !(a % 2);
}

bool isOdd(int a)
{
	return a % 2;
}

#endif //MAIN_HPP
