#include <iostream>

int main()
{
    char symb1 = 'a';
    char symb2 = 'a';
    std::cin >> symb1 >> symb2;
    int diff = symb2 - symb1;
    std::cout << diff;
}