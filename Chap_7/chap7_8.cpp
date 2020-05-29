#include <iostream>
#include <array>
#include <string>

using namespace std;

const size_t ROW = 2;
const size_t COLUMN = 3;

void print2DArray(const array<array<int, COLUMN>, ROW> &a)
{
    for (auto const &ROW : a)
    {
        for (auto const &element : ROW)
        {
            std::cout << element << '\t';
        }
        std::cout << endl;
    }
}

void demo1DArray()
{
    std::cout << "Print 1D Array Object: " << std::endl;
    const size_t arraySize = 7;
    array<int, arraySize> array1 = {1, 2, 3, 4, 5, 6, 7};
    for (int item : array1)
    {
        std::cout << item << std::endl;
    }
}

void demo2DArray()
{
    std::cout << "Prinrt 2D Array Object: " << std::endl;
    array<array<int, COLUMN>, ROW> array2 = {1, 2, 3, 4, 5, 6};
    print2DArray(array2);
}

int main()
{
    demo1DArray();
    demo2DArray();
    return 0;
}
