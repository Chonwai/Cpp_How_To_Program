#include <iostream>
#include <array>
#include <string>

using namespace std;

const size_t row = 2;
const size_t column = 3;

void printArray(const array<array<int, column>, row> &a)
{
    for (auto const &row : a)
    {
        for (auto const &element : row)
        {
            std::cout << element << '\t';
        }
        std::cout << endl;
    }
}

void demo1DArray()
{
    std::cout << "Print Normal Array Object: " << std::endl;
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
    array<array<int, column>, row> array2 = {1, 2, 3, 4, 5, 6};
    printArray(array2);
}

int main()
{
    demo1DArray();
    demo2DArray();
    return 0;
}
