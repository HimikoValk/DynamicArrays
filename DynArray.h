#pragma once

#include <cstddef>

/**
 * @brief DynamicArray Structure.
 *
 * @param double* m_data
 * @param std::size_t m_lenght
 */
struct DyanmicArray
{
	// M = Member 
	double* m_data;
	std::size_t m_lenght;
};

/**
 * @brief Create a dynamic array object
 *
 * @param value The fill value for the array.
 * @param The lenght of the array .
 * @return DyanmicArray
 */
DyanmicArray create_dynamic_array(const double& value, const std::size_t& lenght);


/**
 * @brief Push backs the *value* at the end of the array.
 *
 * @param dynamic_array The dynamic array.
 * @param value The value to append to the array.
 */
void push_back(DyanmicArray& dynamic_array, const int& value);

/**
 * @brief Pop backs the value at the end of the vector.
 *
 * @param Input_Array  The dynamic array.
 * @param size The size of the array.
 */
void pop_back(DyanmicArray& dynamic_array, const std::size_t& size);

