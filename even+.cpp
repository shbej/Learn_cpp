#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;
    if (a % 2 == 0 && a % 7 == 3)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    
}