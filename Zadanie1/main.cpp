// Zadanie 1

//Utwórz szablon funkcji max(a, b) która porówna i zwróci większy element.
//Co ze wskaźnikami?

#include <iostream>

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

}
