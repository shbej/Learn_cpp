#include <iostream>

int main()
{
    unsigned int N = 1;
    std::cin >> N;
    int array[1000];
    
    for (int i = 0; i < N; ++i)
        std::cin >> array[i];
        
    for (int j = N - 1; j >= 0; --j)
        std::cout << array[j] << " ";
}