#include "main.hpp"

void task(int* arr, int size, double *arithMean)
{
	if (!arr || !arithMean)
		return;

	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (isOdd(arr[i]))
		{
			*arithMean += arr[i];
			count += 1;
		}
	}

	if (count > 0)
	{
		*arithMean = *arithMean / count;
	}
	else
	{
		*arithMean = 0.0;
	}
}

int main()
{
	srand(time(NULL));

	int *a;
	int size = 0;
	double arithMean = 0.0;

	std::cout << "Enter array size: ";
	std::cin >> size;

	a = new int[size];

	initArr(a, size);
	printArr(a, size);
	task(a, size, &arithMean);

	std::cout << "Arithmetic mean: " << arithMean << std::endl;
	printArr(a, size);

	delete[] a;
	return 0;
}
