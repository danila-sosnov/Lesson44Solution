#include "logic.h"
#include "util.h"

int main()
{
	int* vector;
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	vector = new int[size];

	init(vector, size, -20, 50);

	cout << "Vector: " << convert(vector, size) << endl;

	cout << "Sum of even elements in odd position is " 
		<< sum_even_elements(vector, size);

	delete[] vector;

	return 0;
}