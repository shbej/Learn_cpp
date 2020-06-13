#include <iostream>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    std::cin >> A >> B >> C >> D;
    if (A == -1 * D && B != -1 * C)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}