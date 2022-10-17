//https://codeforces.com/contest/1717/problem/B
//bpm-22-2 elnur israilov

#include <iostream>
#include <array>
 
int main()
{
	int m, a, r, i, n, t, k, c;
 
	std::cin >> i;
 
	while (i--) {
 
		std::cin >> n >> k >> r >> c;
		
		t = (r + c -1)%k;
 
		for (m = 0; m < n; m++) {
		    
			for (a = 0; a < n; a++) {
			    
				if ((a + m + 1) % k == t) {
				    
					std::cout << 'X';
				}
				else {
					std::cout << '.';
				}
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
      
