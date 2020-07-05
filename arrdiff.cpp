#include <iostream>

int main()
{
    int array1[10];
    int array2[10];

    for (int i = 0; i < 10; ++i)
        std::cin >> array1[i];

    for (int i = 0; i < 10; ++i)
        std::cin >> array2[i];
    
    for (int i = 0; i < 10; ++i)
    {
      bool found = false;
      for (int j = 0; j < 10; ++j)
      {
        if (array1[i] == array2[j])
        {
          found = true;
          break;
        }
      }
      if (!found)
        std::cout << array1[i] << " ";
    }
}