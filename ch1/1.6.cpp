#include <iostream>

int main()
{
    int v1, v2;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of " << v1;
    << " and " << v2;
    << " is " << (v1 * v2) << std::endl;
// illegal because of syntax error
    return 0;
}