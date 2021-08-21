#include <iostream>
#include <cstddef>
#include <math.h>

#include "AlgoArray.h"
#include "DynArray.h"

double sum(DyanmicArray &dynamic_array)
{
	double sum_value = 0.0;

	for (std::size_t i = 0; i < dynamic_array.m_lenght; i++)
	{
		sum_value += dynamic_array.m_data[i];
	}

	return sum_value;
}

double mean(DyanmicArray &dynamic_array)
{
	return sum(dynamic_array) / dynamic_array.m_lenght;
}

double median(DyanmicArray &dynamic_array)
{

	double median_value = 0.0;

	bool hasOddLenght = dynamic_array.m_lenght % 2;

	//1	,2	,3	,4	,5 => 3
	if (hasOddLenght)
	{

		std::size_t index = dynamic_array.m_lenght / 2;
		median_value = dynamic_array.m_data[index];


	}
	//1 , 2 ,3 ,4  => 2.5
	//l = 4  l = lenght
	//index1 = 2
	// index2 = 1
	//median_value = (index1 + index2)/ 2  = 2.5
	else
	{
		std::size_t index1 = dynamic_array.m_lenght / 2;
		std::size_t index2 = (dynamic_array.m_lenght / 2) - 1;
		median_value = (dynamic_array.m_data[index1] + dynamic_array.m_data[index2]) / 2.0;

	}

	return median_value;
}

double variance(DyanmicArray& dynamic_array) 
{
	double mean_value = mean(dynamic_array); 
	double variance_value = 0.0; 
	double probability = 1.0 / dynamic_array.m_lenght; 

	//V[x] = sum((x[i] - mean)^2)
	for (std::size_t i = 0; i < dynamic_array.m_lenght; i++)
	{
		double x_i = dynamic_array.m_data[i]; 
		variance_value += pow(x_i - mean_value, 2.0) * probability; 
		
	}

	return variance_value; 
}

double stddev(DyanmicArray& dynamic_array) 
{
	double variance_value = variance(dynamic_array); 
	double stddev_value = sqrt(variance_value); 

	return stddev_value; 
}
