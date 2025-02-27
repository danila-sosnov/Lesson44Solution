#include <iostream>
#include <string>
using namespace std;

void init(int* vector, int size)
{
	for (int i = 0; i < size; i++)
	{
		vector[i] = rand() % 100;
	}
}

string convert(int* vector, int size)
{
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(vector[i]) + " ";
	}

	return s;
}

void get_extreme_element(int* vector, int size, int* max, int* min)
{
	*max = vector[0];
	*min = vector[0];

	for (int i = 1; i < size; i++)
	{
		if (vector[i] > *max)
		{
			*max = vector[i];
		}

		if (vector[i] < *min)
		{
			*min = vector[i];
		}
	}

	
}

int main()
{
	const int SIZE = 10;
	int vector[SIZE]{};

	init(vector, SIZE);

	int max, min;

	get_extreme_element(vector, SIZE, &max, &min);

	cout << "Vector: " << convert(vector, SIZE) << endl;
	cout << "Max value is " << max << "\n";
	cout << "Min value is " << min << "\n";


	return 0;
}