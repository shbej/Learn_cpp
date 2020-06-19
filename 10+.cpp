#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;
    int i = 10;
    while (i <= x)
    {
      std::cout << i << " ";
      ++i;
    }
}