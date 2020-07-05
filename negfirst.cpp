#include <iostream>

int main()
{
  unsigned int N = 1;
  std::cin >> N;
  int array[1000];
  
  for (int i = 0; i < N; ++i)
  {
    std::cin >> array[i];
  }

  for (int i = 0; i < N; ++i)
  {
    if (array[i] < 0)
      std::cout << array[i] << " ";
    else
      continue;
  }

  for (int i = 0; i < N; ++i)
  {
    if (array[i] >= 0)
      std::cout << array[i] << " ";
    else
      continue;
  }
}