#include <iostream>
#include <cmath>

int main()
{
    double x, y, A, B, z, K, T, D, C;
    std::cout << "Enter x, y, z, K, D, C" << std::endl;
    std::cin >> x >> y >> z >> K >> D >> C;
    A = x - y;
    B = sqrt(z);
    T = cos(x) + pow(A, 2) / (K - C * D) - B;
    std::cout << T;
    return 0;
}