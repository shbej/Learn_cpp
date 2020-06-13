#include <iostream>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    std::cin >> A >> B >> C >> D;
    if (A > C)
    {
        std::cout << A * D - (B + C);
    }
    else if (A < C)
    {
        std::cout << (B + D) * A;
    }
    else
    {
        std::cout << A + B + C + D;
    }
}