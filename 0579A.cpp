//https://codeforces.com/problemset/problem/579/A
//bpm-22-2 elnur israilov

#include <iostream>

int main() {
	int n;
	int k = 0;
	std::cin >> n;
	while (n != 0) {
		if (n % 2 == 1) {
			k += 1;
		}
		n /= 2;
	}
	std::cout << k;
}