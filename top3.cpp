#include <iostream>
#include <limits.h>

int main()
{
    unsigned int n = 3;
    std::cin >> n;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;  

    for (int i = 0; i < n; ++i)
    {
        int input = 0;
        std::cin >> input;

        if (input > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = input;
        }
        else if (input > max2 && input < max1)
        {
            max3 = max2;
            max2 = input;
        }
        else if (input > max3 && input < max2)
            max3 = input;
    }
    std::cout << max3 << " " << max2 << " " << max1;
}