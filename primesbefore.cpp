#include <iostream>

int main()
{
    unsigned int x = 0;
        std::cin >> x;
    for (int i = 2; i <= x; ++i)
    {
        bool isPrime = true;
        for (int j = 2;  j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            std::cout << i << " ";
    }
}
