#include <iostream>
#include <cstddef>

#include "DynArray.h"

DyanmicArray create_dynamic_array(const double& value, const std::size_t& lenght)
{
	DyanmicArray dyanmic_array = { new double[lenght], lenght };

	for (std::size_t i = 0; i < lenght; i++)
	{
		dyanmic_array.m_data[i] = value;
	}

	return dyanmic_array;
}

void push_back(DyanmicArray& dynamic_array, const int& value)
{
	double* temp = nullptr;
	temp = new double[dynamic_array.m_lenght + 1];

	for (std::size_t i = 0; i < dynamic_array.m_lenght; i++)
	{
		temp[i] = dynamic_array.m_data[i];
	}

	temp[dynamic_array.m_lenght] = value;

	delete[]  dynamic_array.m_data;

	dynamic_array.m_data = temp;
	dynamic_array.m_lenght++;
}

void pop_back(DyanmicArray& dynamic_array)
{
	double* temp = nullptr;
	temp = new double[dynamic_array.m_lenght - 1];

	for (std::size_t i = 0; i < dynamic_array.m_lenght - 1; i++)
	{
		temp[i] = dynamic_array.m_data[i];
	}

	delete[] dynamic_array.m_data;

	dynamic_array.m_data = temp;
	dynamic_array.m_lenght--;
}