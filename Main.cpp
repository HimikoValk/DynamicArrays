#include <iostream>
#include <cstddef>

#include "DynArray.h"
#include "AlgoArray.h"

int main()
{
    //Just example values
    double fill_value = 1.0; 
    std::size_t lenght = 5; 

    DyanmicArray my_array = create_dynamic_array(fill_value, lenght);

    for (std::size_t i = 0; i < my_array.m_lenght; i++)
    {
        //Just to set a diffrent fillvalue 
        my_array.m_data[i] = i;
    }

    std::cout << "Mean = " << mean(my_array) << std::endl;
    std::cout << "Median = " << median(my_array) << std::endl;
    std::cout << "Variance = " << variance(my_array) << std::endl;
    std::cout << "Stddev(Root) = " << stddev(my_array) << std::endl;

    return 0;
}