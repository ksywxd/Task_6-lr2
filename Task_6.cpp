#include <iostream>
#include <cmath>

int main()
{
    double x, b, D, A, S;
    std::cout << "Enter x, D: " << std::endl;
    std::cin >> x >> D;
    b = x + D;
    if (b == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    A = D*(x/b);
    double del = pow(D, 3) + (A + D - b);
    if (del == 0) {
        std::cout << "division by zero" << std::endl;
        return 1;
    }
    S = (A * A + b * cos(x)) / del;
    std::cout <<S;
    return 0;
}