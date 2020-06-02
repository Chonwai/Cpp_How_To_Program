#include <iostream>
#include <array>
#include <string>

using namespace std;

void printArray(const array<int, 10>);

int main()
{
    array<int, 10> a1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(a1);
    return 0;
}

void printArray(const array<int, 10> items) {
    for (int item : items) {
        std::cout << item << std::endl;
    }
}  