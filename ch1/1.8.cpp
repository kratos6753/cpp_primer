#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */; --> this particular line has problem compiling for obvious reasons
    std::cout << /* "*/ " /* " /*" */;
    return 0;
}