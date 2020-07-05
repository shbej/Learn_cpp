#include <iostream>

int main()
{
    int n = 1;
    std::cin >> n;
    int array_a[100];
    int array_b[100];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> array_a[i];
        array_b[i] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int k = 2; k < array_a[i]; ++k)
        {
          bool is_prime = true;
          for (int j = 2; j * j <= k; ++j)
          {
            if (k % j == 0)
            {
              is_prime = false;
              break;
            }
          }
          if (is_prime)
            ++array_b[i];
        }
    }

    for (int i = 0; i < n; ++i)
      std::cout << array_b[i] << " ";
}