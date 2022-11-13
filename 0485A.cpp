//https://codeforces.com/problemset/problem/485/A
//bpm-22-2 elnur israilov

#include <iostream>
#include <set>

int main() {
	int a;
	int b;
	std::set<int> s;
	std::cin >> a >> b;

	while ((!s.count(a % b)) && (a % b != 0)) {
		s.insert(a % b);
		a += a % b;
	}

	std::cout << ((a % b == 0) ? "Yes" : "No");
}