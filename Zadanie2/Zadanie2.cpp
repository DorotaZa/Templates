// Zadanie 2/3

//2
//Przeciąż ten szablon, tak że będzie zwracał najwięszy element w tablicy

//3
//Dodaj specjalizację szablonu funkcji max() dla typu char* (i const char*) (łańcuchy znaków).
//Do porównywanie łańichów znaków sluży strcmp

#include <iostream>
#include <string.h>

//int strcmp(const char* lhs, const char* rhs);

template<typename T>

T max(T x, T y)
{
    /* if (x > y)
     {
         return x;
     }
     else
     {
         return y;
     }*/

    return x > y ? x : y;
}
template<typename T> //specjalizacja czesciowa funckji max, ktora dziala na wskaznikach
T* max(T* x, T* y)
{
    return *x > *y ? x : y;
}

template<> //pusty bo pelna specyfikacja szablonu tutaj nastepuje
char* max(char* x, char* y)
{
    if (strcmp(x, y) > 0)
    {
        return x;
    }
    else
    {
        return y;
    }
}

template<typename T>
T max(T* data, const unsigned int size)
{
    T tempMax = data[0];
    for (unsigned int i = 1; i < size; ++i)
    {
        if (data[i] > mx)
        {
            mex = data[i];
        }
    }

    return max;
}


int main()
{
    int num1 = 100;
    int num2 = 10;
    std::cout << "Greater integer: " << max(num1, num2) << std::endl;
    std::cout << "Greater double: " << max(num1, num2) << std::endl;

    //dla wskaznikow konieczna specjalizacja szablonu
    int* p1 = &num1;
    int* p2 = &num2;
    std::cout << "Greater value of the pointer: " << *max(p1, p2) << std::endl;

    std::cout << "Greater string: " << max("anasblkcbakcbakb", "scjblkb") << std::endl;

    const unsigned int size = 10;
    int arr[size] = { 2,5,67,44,2222,90,6,34,23,1};
    std::cout << "The maximum value in the array: " << max(arr, size) << std::endl;



