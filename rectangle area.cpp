#include <iostream>

int main()
{
    double rectangle_width = 0;
    double rectangle_height = 0;
    std::cin >> rectangle_width >> rectangle_height;
    long double rectangle_area = rectangle_width * rectangle_height;
    std::cout.precision(15);
    std::cout << rectangle_area;
}