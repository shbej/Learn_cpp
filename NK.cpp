#include <iostream>

int main()
{
  int N = 0;
  int K = 0;
  int i = 0;
  int j = 0;
  int x = 0;
  std::cin >> N >> K;
  while (i < N)
  {
    std::cin >> x;
    if (x >= 123)
    {
      ++j;
    }
    ++i;
  }
  
  if (j == K)
  {
    std::cout << "YES";
  }

  else
  {
    std::cout << "NO";
  }
}