#include "DynamicArray.h"

DynamicArray::DynamicArray()
{
	pointer1 = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pointer1[i] = 0;
		length = 10;
		next_number = 0;
	}

	// This creates the array. The function gets called and will set a new array with a value of 10 in the array.
	// A pointer is set to the lowest value in the array.As more numbers are added to the array, the pointer will move up. jkj
}


DynamicArray::~DynamicArray()
{
	delete[] pointer1;

	//	Delete the array
}

int& DynamicArray::operator[](int index)
{
	// At the start we declare a new pointer.The pointer set to only work inside of this function to begin with.
	// We then start a if statement to show if the array has more elements then the array can hold.If so, we begin
	// the processof creating a new array with the pointer.The array is 2x the size of the length of the previous
	// array.

	int *pointer_inop;
	if (index >= length)
	{
		pointer_inop = new int[index + (length * 2)];
		for (int i = 0; i < next_number; i++)
		{
			pointer_inop[i] = pointer1[i];
		}

		//	(Length at the start of the function is 10, so this up by 10x2. if the next one is called it would go up by 20x2)

		for (int ii = 0; ii < index + (length * 2); ii++)
		{
			pointer_inop[ii] = 0;
		}

		//	When the array is created, we copy the old elements of the array to the new array.We set the length to the new
		//	value of the length of the array, delete the previous array and reassign the new pointer to the new array created.

		length = index + (length * 2);
		delete[] pointer1;
		pointer1 = pointer_inop;
	}

	//	The next if statement is set setting the next index number passed the last.

	if (index > next_number)
	{
		next_number = index + 1;
	}

	//	And the last statement is the pointer set to the last element + 1.

	return *(pointer1 + index);
}

void DynamicArray::AddSize(int value)
{
	int *pointer_inop;
	if (next_number == length)
	{
		length = length + 10;
		pointer_inop = new int[length];
		for (int i = 0; i < next_number; i++)
		{
			pointer_inop[i] = pointer1[i];
		}
		for (int ii = 0; ii < next_number; ii++)
		{
			pointer_inop[ii] = 0;
		}
		delete[] pointer1;
		pointer1 = pointer_inop;
	}
	pointer1[next_number++] = value;

	//	Like the opeartor class, we declare a new array, but we work from the end of the array and only make it bigger
	//  When we need to.
}

int DynamicArray::ArraySize()
{
	return length;

	// We just need this to return the current length of the array
}