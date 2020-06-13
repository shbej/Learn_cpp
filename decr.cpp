#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    if (a >= b && b >= c && c >= d)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    
}