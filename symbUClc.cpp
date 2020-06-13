#include <iostream>

int main()
{
    int N = 1;
    std::cin >> N;
    char symblc = N + 96;
    char symbUC = N + 64;
    std::cout << symblc << " " << symbUC;
}