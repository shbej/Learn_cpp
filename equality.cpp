#include <iostream>

int main()
{
    unsigned int a = 1;
    unsigned int b = 1;
    std::cin >> a >> b;
    if (a == b)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}