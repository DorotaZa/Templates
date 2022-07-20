#pragma once
#include <stdexcept>

template <typename T, unsigned int N>
class StaticTable
{
private:
    T arr[N];
public:
    T& operator[](const unsigned int i)//szablon musi byc zdefiniowany w miejscu deklaracji
    {
        //todo: wyjatek out_of_range, gdy i>=N
        if (i >= N)
        {
            throw std::out_of_range("You cannot create an array.");
        }
        return arr[i];
    }

    template <typename T2> //tworzymy funkcje szablonowa dla klasy
    void print (T2 separator) //ma wypisywac tablice uzywajac zmiennej T2 jako znaku rozdzielajacego wartosci
    {
        for (int i = 0; i < N; i++)
        {
            std::cout << separator << arr[i];
        }
        std::cout << std::endl;
    }

};


//specjalizacja szablonu klasy
template <unsigned int N>
class StaticTable<bool, N>
{
private:
    bool arr[N];
public:
    bool& operator[](const unsigned int i)//szablon musi byc zdefiniowany w miejscu deklaracji
    {
        //todo: wyjatek out_of_range, gdy i>=N
        return arr[i];
    }

};


