#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item v1;
    if (std::cin >> v1)
    {
        Sales_item v2;
        int count = 1;
        while (std::cin >> v2)
        {
            if (v1.isbn() == v2.isbn())
                count++;
            else
            {
                std::cout << v1.isbn() << " " << count << std::endl;
                v1 = v2;
                count = 1;
            }
        }
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}