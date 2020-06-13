#include <iostream>

int main()
{
    float A = 0;
    float B = 0;
    float C = 0;
    std::cin >> A >> B >> C;
    if (B <= A && A < C)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    } 
}