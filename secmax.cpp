#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if (b <= a && a <= c)
    {
        std::cout << a;
    }
    else if (c <= a && a <= b)
    {
        std::cout << a;
    }
    else if (a <= b && b <= c)
    {
        std::cout << b;
    }
    else if (c <= b && b <= a)
    {
        std::cout << b;
    }
    else
    {
        std::cout << c;
    }
}