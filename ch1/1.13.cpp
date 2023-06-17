#include <iostream>

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << sum << std::endl;

    for (int i = 10; i >= 0; --i)
        std::cout << i << std::endl;

    int v1, v2;
    std::cin >> v1 >> v2;
    if (v1 > v2)
        swap(v1, v2);
    for (int i = v1; i <= v2; ++i)
        std::cout << i << std::endl;

    return 0;
}