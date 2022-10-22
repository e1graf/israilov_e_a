//https://codeforces.com/problemset/problem/136/b
//bpm-22-2 elnur israilov

#include <iostream>

int main() {
	int a;
	int b = 0;
	int c;
	int k = 1;

	std::cin >> a >> c; 

	for (int i = 0; (a || c); i++) {
		b += ((3 + (c % 3) - (a % 3)) % 3) * k;
		a /= 3;
		c /= 3;
		k *= 3;
	}

	std::cout << b;
}