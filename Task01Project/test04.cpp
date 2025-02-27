#include <iostream>
#include <string>
using namespace std;


int* test(int* size)
{
	*size = 5;
	int* pointer = new int[*size];

	*pointer = 1;
	*(pointer + 1) = 11;
	*(pointer + 2) = 111;
	*(pointer + 3) = 1111;
	*(pointer + 4) = 11111;


	return pointer;
}



int main()
{

	int size;
	int* pointer = test(&size);

	for (int i = 0; i < size; i++)
	{
		cout << *(pointer + i) << "\n";
	}


	cout << endl;

	delete[] pointer;


	return 0;
}