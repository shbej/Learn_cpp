#include <iostream>

int main()
{
    long long A = 0;
    long long B = 1;
    std::cin >> A >> B;
    long long div_rem = A % B;
    std::cout << div_rem;
}