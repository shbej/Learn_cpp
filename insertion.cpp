#include <iostream>

int main()
{
    int N = 0;
    std::cin >> N;
    int arr[1000];
    for (int i = 0; i < N; ++i)
        std::cin >> arr[i];
    
    for (int i = 1; i < N; ++i)
    {
        for (int j = i; j > 0; --j)
        if (arr[j] > arr[j - 1])
            std::swap(arr[j], arr[j - 1]);
        else
            break;  
    }
    

    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << " ";
    }    
    
}