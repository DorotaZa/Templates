#include <iostream>


template <typename T>
class StaticTable
{
private:
    T* ptr;
    int size;

public:
    StaticTable(T arr[], int s);
    void print();
};

template <typename T> StaticTable<T>::StaticTable(T arr[], int s)
{
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void StaticTable<T>::print()
{
    for (int i = 0; i < size; i++)
        std::cout << " " << ptr[i];
    std::cout << std::endl;
}


int main()
{
    std::cout << "Integer-type array:" << std::endl;
    const int N = 5;
    int arr[N] = { 1, 2, 3, 4, 5 };
    StaticTable<int> a(arr, N);
    a.print();
    std::cout << std::endl;

    std::cout << "Double-type array:" << std::endl;
    double arrD[N] = { 1.23, 2.34, 3.45, 4.56, 5.67 };
    StaticTable<double> aD(arrD, N);
    aD.print();
    std::cout << std::endl;

    std::cout << "Char-type array:" << std::endl;
    char arrCh[N] = { 3, 24, 11, 44, 's' };
    StaticTable<char> aCh(arrCh, N);
    aCh.print();
    std::cout << std::endl;

}