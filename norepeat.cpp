#include <iostream>

int main()
{
    int N = 1;
    std::cin >> N;
    int array[100];
    for (int i = 0; i < N; ++i)
        std::cin >> array[i];

    for (int i = 0; i < N; ++i)
    {
        bool unique = true;
        for (int j = 0; j < N; ++j)
            if (array[i] == array[j] && i != j)
                unique = false;
        if (unique)
          std::cout << array[i] << " " << i;
    }
}