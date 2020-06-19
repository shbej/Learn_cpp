#include <iostream>

int main()
{
    int A = 0;
    int B = 0;
    std::cin >> A >> B;
    int i = A;
    int count = 0;
    while (A <= i && i <= B)
    {
      if (i % 7 == 0)
      {
        ++count;
      }
      ++i;
    }
    std::cout << count;
}