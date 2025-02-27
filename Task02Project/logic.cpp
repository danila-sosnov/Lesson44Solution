
#include "logic.h"

int sum_even_elements(int* vector, int size)
{

	int sum = 0;

	for (int i = 0; i < size; i+=2)
	{
		if (*(vector + 1) % 2 == 0)
		{
			sum += *(vector + 1);
		}
	}

	return sum;
}