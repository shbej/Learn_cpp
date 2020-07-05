#include <iostream>

int main ()
{
    const int CAP = 1000;
    int arr[CAP] {};
    int n{};
    std::cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    int negativeMax = 0;
    int negativeMaxIndex = -1;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            if (arr[i] > negativeMax || negativeMax == 0)
            {
                negativeMax = arr[i];
                negativeMaxIndex = i;
            }
        }
    }
    std::cout << negativeMax << " " << negativeMaxIndex;
}