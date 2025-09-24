#include <iostream>
#include <cmath>

int main()
{
    double x, n, A, m, Y, K, D;
    std::cout << "Enter x, n, m, K" << std::endl;
    std::cin >> x >> n >> m >> K;
    A = fabs(n + m);
    D = tan(x);
    Y = 1.29 + K / A + pow(D, 2);
    std::cout << Y;
    return 0;
}