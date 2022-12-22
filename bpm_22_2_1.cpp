#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	int i;
	double x;
	double step = 0.05;
	double elm;
	double eps = pow(10,-6)

	std::cout << "   x   " << || << "   sum   " << "\n";

	for (x = 0.1; x <= 1; x = x + step) {
		double sum = 0;
		for (i = 0; i < 1000; i++) {
			elm = pow(-1, i)*pow(x, 2 * i + 1) / (2 * i + 1);
			if (elm < eps) break;
			sum = sum + elm;
		}
		std::cout << setw(6) << std::fixed << std::setprecision(6) << x << sum << "\n";

	}

}
