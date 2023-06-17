#include <iostream>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2)
        swap(v1, v2);

    int i = v1;
    while (i <= v2)
        std::cout << i++ << std::endl;

    return 0;
}