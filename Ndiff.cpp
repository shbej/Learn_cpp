#include <iostream>
#include <limits.h>

int main()
{
    unsigned int N = 1;
    std::cin >> N;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < N; ++i)
    {
        int input = 0;
        std::cin >> input;
        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }
    int diff = max - min;
    std::cout << diff;
}