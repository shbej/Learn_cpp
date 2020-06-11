#include <iostream>

int main()
{
  long long a = 0;
  long long b = 0;
  long long c = 0;
  long double d = 1.0;
  std::cout << "Please input a whole number a\n";
  std::cin >> a;
  std::cout << "Please input a whole number b\n";
  std::cin >> b;
  std::cout << "Please input a whole number c\n";
  std::cin >> c;
  std::cout << "Please input a positive float number d\n";
  std::cin >> d;
  std::cout << (a + b + c) / d;
}