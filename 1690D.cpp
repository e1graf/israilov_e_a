//https://codeforces.com/contest/1690/problem/D
//bpm-22-2 elnur israilov

#include <iostream>
#include <string>
 
int main() {
	int t;
	int n;
	int k;
	int i;
	int j;
	int W;
	std::string s;
	std::cin >> t;
	while (t--) {
		std::cin >> n >> k >> s;
		
		W = 0;
		
		for (i = 0; i < k; i++) {
			if (s[i] == 'W') {
				W++;
			}
		}
		int min = W;
		for (i = k; i < n; i++) {
			if (s[i] == 'W') {
				W++;
			}
			if (s[i - k] == 'W'){
				W--;
			}
			if (W < min) {
				min = W;
			}
		}
		if (n == k) {
		    if (W < min) {
                min = W;
		    }
		}
		
		std::cout << min << std::endl;
	}
	return 0;
}