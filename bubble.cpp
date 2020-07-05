#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;
    int arr[1000];
    for (int i = 0; i < N; ++i)
        std::cin >> arr[i];
        
    bool sorted {};
    for (int j = 0; j < N; ++j)
    {
        sorted = true;
        for (int i = 0; i < N - 1 - j; ++i)
        {
            if (arr[i] < arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                sorted = false;
            }
        }
    }

    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << " ";
    }    
    
}