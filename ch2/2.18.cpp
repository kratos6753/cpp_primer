#include <iostream>

int main()
{
    int a = 2, *b = &a;
    std::cout << a << " " << *b << std::endl;
    int c = 3;
    b = &c;
    std::cout << a << " " << *b << std::endl;

    return 0;
}