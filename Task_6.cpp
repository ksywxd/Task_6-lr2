#include <iostream>
#include <cmath>

int main()
{
    double x, D, A, b, S;
    std::cout << "Enter x and D" << std::endl;
    std::cin >> x >> D;
    b = x + D;
    A = D * x / b;
    S = (pow(A, 2) + b * cos(x));
    std::cout << S;
    return 0;
}