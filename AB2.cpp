#include <iostream>

int main()
{
    int A = 0;
    int B = 0;
    std::cin >> A >> B;
    int i = A;
    while (A <= i && i <= B)
    {
      if (i % 2 == 0)
      {
        std::cout << i << " ";
      }
      ++i;
    }
}