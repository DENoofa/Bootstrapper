#pragma once

class DynamicArray
{

public:

	DynamicArray();
	~DynamicArray();
	int ArraySize();
	int& operator[](int index);
	void AddSize(int value);


private:
	int *pointer1;
	int length;
	int next_number;

};

