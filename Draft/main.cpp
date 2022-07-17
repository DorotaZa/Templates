// Draft


#include <iostream>
#include <iomanip> //needed for setprecision

template <typename T>
void print(T s) //szablon funkcji print
{
    std::cout << s << std::endl;
}


template<>
void print /*<double>*/(double d) //specjalizacja dla typu double; ustawiamy dokladnosc do dwoch miejsc po przecinku
{
    // std::cout << s << std::endl;
    std::cout << std::setprecision(3) << d << std::endl;
}

template<>
void print /*<bool>*/(bool b)
{
    if (b)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }

}

template<int n>
void print()
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << i << ". Ku ku!" << std::endl;
    }

}
struct S
{
private:
    int z;
};


int main()
{
    print(10);
    print(13.4556769696);
    print<bool>(0);
    print<30>();

    //S obj;
    //print(obj);
}
