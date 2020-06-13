#include <iostream>

int main()
{
    char symb1 = 'A';
    char symb2 = 'A';
    std::cin >> symb1 >> symb2;
    int code1 = symb1;
    int code2 = symb2;
    if (code1 > code2)
    {
        std::cout << "YES";
    }
    else if (code1 < code2)
    {
        std::cout << "NO";
    }
    else if (code1 == code2)
    {
        std::cout << "EQUAL";
    }
}