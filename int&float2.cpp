#include <iostream>

int main()
{
    short A = 0;
    short B = 0;
    long double C = 0.0;
    long double D = 1.0;
    std::cin >> A >> B >> C >> D;
    std::cout << A * C - B / D;
}