#include <iostream>

int main()
{
  unsigned int N = 1;
  std::cin >> N;
  int array[1000];
  int count = 0;

  for (int i = 0; i < N; ++i)
    std::cin >> array[i];
  for (int i = 0; i < N; ++i)
    if (array[i] != array[N-1])
      ++count;
  std::cout << count;
}