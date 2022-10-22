//hw-05-01
//bpm-22-2 elnur israilov

#include <iostream>
#include <iomanip>
#include <cmath>

double factorial(int n) {
	return (n == 0) || (n == 1) ? 1 : n * factorial(n - 1);
}

int main() {
    double a = -1;
    double b = 1;
    double step = 0.1;
    double x = a;
    double y = 0;
    double element = 0;
    double eps = 0.001;

    std::cout << "   x   " << "|'|" << "  s(x) " << "|'|" << "  f(x)\n";

    for (x = a; x <= b; x += step) {
        double s = 0;
        double y = cos(x);

        for (int i = 0; i < 1000; i += 1) {
            element = pow(-1, i) * (pow(x, 2 * i)) / factorial(2 * i);
            if (std::abs(element) < eps) {
                break;
            }
            s += element;
        }
        std::cout << std::setw(6) << std::fixed << std::setprecision(3) << x << " |'| " << s << " |'| " << y << '\n';
    }
    return 0;
}