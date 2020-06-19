#include <iostream>

int main()
{
  int x = 1;
  int sum = 0;
  while (x != 0)
  {
    std::cin >> x;
    sum += x;
  }
  std::cout << sum;
}