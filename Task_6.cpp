#include <iostream>
#include <cmath>

int main()
{
    double x, b, D, A, S;
    std::cout << "Enter x, D: " << std::endl;
    std::cin >> x >> D;
    b = x + D;
    A = D*(x/b);
    S = (A * A + b * cos(x)) / (pow(D, 3) + (A + D - b));
    std::cout <<S;
    return 0;
}