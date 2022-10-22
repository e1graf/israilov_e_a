//hw-05-03
//bpm-22-2 elnur israilov

#include <iostream>
#include <iomanip>
#include <cmath>

double factorial(int n) {
    return (n == 0) || (n == 1) ? 1 : n * factorial(n - 1);
}
int main() {
    double a = 0;
    double b = 1;
    double step = 0.1;
    double x = 0;
    double y = 0;
    double element = 0;
    double eps = 0.0001;
    const double pi = 2 * asin(1);

    std::cout << pi << '\n';
    std::cout << "   x   " << "|'|" << "  s(x) " << "|'|" << "  f(x)\n";

    for (x = a; x <= b; x += step) {
        double s = 0;
        double y = exp(2*x);
        
        for (int i = 1; i < 1000; i += 1) {
            element = pow(2*x, i)/factorial(i);
            if (std::abs(element) < eps) {
                break;
            }
            s += element;
        }
        std::cout << std::setw(6) << std::fixed << std::setprecision(3) << x << " |'| " << s << " |'| " << y << '\n';
    }
    return 0;
}
