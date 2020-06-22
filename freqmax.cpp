#include <iostream>
#include <limits.h>

int main()
{
    int n {};
    std::cin >> n;

    int max = INT_MIN;
    int maxCount = 0;

    for (int i = 0; i < n; ++i)
    {
        int input{};
        std::cin >> input;

        if (input > max)
        {
            max = input;
            maxCount = 1;
        }
        else if (input == max)
            ++maxCount;
    }
    std::cout << maxCount;
}