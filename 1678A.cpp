//https://codeforces.com/contest/1678/problem/A
//bpm-22-2 elnur israilov

#include <iostream>
#include <array>


int main()
{
	int t = 0;
	int n = 0;
	int k = 0;
	int c = 0;
	int j = 0;
	int f = 0;
	int const sarr = 100;
	int i = 0;
	std::cin >> t;
	while (t--) {
	    c = 0;
		std::array<int, sarr> a{ 0 };
		std::cin >> n;
		for (i = 0; i < n; i++) {
			std::cin >> a[i];
			if (a[i] == 0) {
				c++;
			}
		}
		if (c == 0) {
			for (i = 0; i < n - 1; i++) {
				for (j = i + 1; j < n;j++) {
					if (a[i] == a[j]) {
						f = 1;
						break;
					}
				}
			}
			if (f == 1) {
				k = n;
			}
			else {
				k = n + 1;
			}
		}
		else {
			k = n - c;
		}
		std::cout << k << std::endl;
	}
	return 0;
}
