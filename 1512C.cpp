//https://codeforces.com/problemset/problem/1512/C
//bpm-22-2 elnur israilov

#include <iostream>
#include <string>
 
int main() {
	int m, a, r, i, n, e, t, b;
	std::string s;
 
	std::cin >> t;
 
	while (t--) {

		std::cin >> a >> b >> s;
		int flag = 0;
		n = a + b;
 
		for (i = 0; i < n; i++) {
			if (s[i] == '0') {
				a--;
			}
			else if (s[i] == '1') {
				b--;
			}
		}
		for (i = 0; i < n / 2; i++) {
			if (s[i] == '?') {
				if (s[n - i - 1] != '?') {
					s[i] = s[n - i - 1];
					if (s[n - i - 1] == '0') {
						a--;
					}
					else {
						b--;
					}
				}
			}
			else {
				if (s[n - i - 1] == '?') {
					s[n - i - 1] = s[i];
					if (s[i] == '0') {
						a--;
					}
					else {
						b--;
					}
				}
				else if (s[i] != s[n - i - 1]) {
 
					flag = 1;
				}
			}
		}
		for (i = 0; i < n / 2; i++) {
			if (s[i] == '?') {
				if (a > 1) {
					s[i] = '0';
					s[n - i - 1] = '0';
					a = a - 2;
				}
				else if (b > 1) {
					s[i] = '1';
					s[n - i - 1] = '1';
					b = b - 2;
				}
				else {
					flag = 1;
				}
			}
		}
 
		if ((a == 1) && (b == 0)){
			s[n / 2] = '0';
		}
		else if ((b == 1) && (a == 0)) {
			s[n / 2] = '1';
		}
		else if ((a < 0) || (b < 0)) {
			flag = 1;
		}
		if (flag == 1) {
			std::cout << -1 << std::endl;
		}
		else {
			std::cout << s << std::endl;
		}
	}
return 0;
}