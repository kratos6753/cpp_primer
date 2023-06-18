#include <iostream>
#include "Sales_item.h"
// write a program which reads set of book sales transactions,
// writing each transaction to the standard output
int main()
{
    Sales_item item;
    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }

    return 0;
}