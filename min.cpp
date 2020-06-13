#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    if (a <= b && a <= c)
    {
        std::cout << a;
    }
    else if (b <= a && b <= c)
    {
        std::cout << b;
    }
    else
    {
        std::cout << c;
    }
}