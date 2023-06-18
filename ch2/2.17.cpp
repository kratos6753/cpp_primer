#include <iostream>

int main()
{
    int i, j, &ri = i;
    i = 5;
    std::cout << i << " " << ri << std::endl;
    ri = 10;
    std::cout << i << " " << ri << std::endl;
    // ri always points to i
    j = 4;
    ri = j;
    std::cout << i << " " << ri << std::endl;
    // reference may be bound only to an object, not to a literal
    // or to the result of a more general expression

    return 0;
}