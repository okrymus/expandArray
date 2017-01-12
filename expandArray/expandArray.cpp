// The program creates a new array that is twice the size of the argument array and copy the contents of the argument array to the new array and if the element are unused, those should be set to zero.
// Expand array homework week 1
// Programmer: Panupong Leenawarat
// Last modified 1/26/2016

#include <iostream>
using namespace std;

void showValues(int nums[], int size);

int main()
{
	const int SIZE = 11;
	int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	
	// Get the new size of the new array
	int expandArray[SIZE * 2];

	// Print the program's introduction
	cout
		<< endl
		<< "         The program creates a new array that is twice the size of the        " << endl
		<< "    argument current array and then copy the contents of the argument array   " << endl
		<< " to the new array and if the elements are unused, those should be set to zero." << endl
		<< "                               By Lee. Panupong                               " << endl << endl;

	// Copy whole contents in the current array to the new array
	for (int count = 0; count < SIZE * 2; count++)
	{
		if (count < SIZE)
			expandArray[count] = numbers[count];
		else
			// if unused elements of the new array set to zero
			expandArray[count] = 0;
	}

	// Print out the current array
	cout << "Before" << endl;
	showValues(numbers, SIZE);

	// Create an empty line and print out the new array with the twice of size elements
	cout << endl << "After expanding the array" << endl;
	showValues(expandArray, SIZE * 2);

	cout << endl;

	system("pause");
	return 0;
}

void showValues(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		cout << nums[index] << " ";
	cout << endl;
}