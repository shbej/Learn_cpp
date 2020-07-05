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

    for (int i = 0; i < n / 2; ++i)
    {
        std::cout << arr[i] + arr[n-i-1] << " ";
    }
}