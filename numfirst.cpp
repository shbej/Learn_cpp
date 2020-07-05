#include <iostream>

int main()
{
  unsigned int N = 1;
  std::cin >> N;
  char array[1000];
  char symb {};
  int code = symb;

  for (int i = 0; i < N; ++i)
  {
    std::cin >> array[i];
    char symb = array[i];
    int code = symb; 
  }

  for (int i = 0; i < N; ++i)
  {
    char symb = array[i];
    int code = symb;
    if (code >= 48 && code <= 57)
      std::cout << array[i] << " ";
    else
      continue;
  }

  for (int i = 0; i < N; ++i)
  {
    char symb = array[i];
    int code = symb;
    if (code < 48 || code > 57)
      std::cout << array[i] << " ";
    else
      continue;
  }
}