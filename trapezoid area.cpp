#include <iostream>

int main()
{
    long double trapezoid_base1 = 0;
    long double trapezoid_base2 = 0;
    long double trapezoid_height = 0;
    std::cin >> trapezoid_base1 >> trapezoid_base2 >> trapezoid_height;
    long double trapezoid_area = 0.5 * trapezoid_height * (trapezoid_base1 + trapezoid_base2);
    std::cout << trapezoid_area;
}