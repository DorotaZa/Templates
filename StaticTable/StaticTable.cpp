// StaticTable - zadanaie no4 robione z Michalem

#include <iostream>
#include "StaticTable.hpp"

int main()
{
    StaticTable<int, 10> arr1;
    for (int i = 0; i < 10; ++i)
    {
        arr1[i] = i;
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Array[" << i << "] = " << arr1[i] << std::endl;
    }

    std::cout << std::endl;


    arr1.print<char>(3);
    arr1.print<char>(' ');


    std::cout << std::endl;

    //BOOL
    StaticTable<bool, 2> arr2;
    arr2[0] = true;
    arr2[1] = false;
    std::cout << std::boolalpha << arr2[0] << std::endl;
    std::cout << std::boolalpha << arr2[1] <<std::endl;


    try
    {
        StaticTable<int, 10> arr1;
        for (int i = 0; i = 10; ++i)
        {
            arr1[i] = i;
        }
        for (int i = 0; i = 10; ++i)
        {
            std::cout << "Array[" << i << "] = " << arr1[i] << std::endl;
        }
    }
    catch(const std::out_of_range& error)
    {
        std::cout << error.what() << std::endl;
    }
}
