#include "ConnectFourApp.h"
#include <iostream>
#include <new>


int main()
{
	int input_key, n_array;
	int * point_array;
	std::cout << "How many numbers would you like to type?" << std::endl;
	std::cin >> input_key;


	point_array = new (std::nothrow) int[input_key];

	if (point_array == nullptr)
		std::cout << "Error: memory could not be allocated";
	else
	{
		for (n_array = 0; n_array < input_key; n_array++)
		{
			std::cout << "Enter number: ";
			std::cin >> point_array[n_array];
		}

		std::cout << "You have entered: ";
		for (n_array = 0; n_array < input_key; n_array++)
		{
			std::cout << point_array[n_array] << ", " << std::endl;
		}
		delete[] point_array;
	}
	return 0;
}
