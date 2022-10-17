//https://codeforces.com/contest/1721/problem/B
//bpm-22-2 elnur israilov

#include <iostream>
#include <vector>
#include <cmath>
int main() {
 
  int m, a, r, i, n, e, t, sx, sy, d, failure;
  std::cin >> e; 
  
  for (i = 0; i < e; i++) {
      std::cin >> n >> m >> sx >> sy >> d; 
      
      failure = -1;
      
      if ( (fmin(sx - 1, m - sy) <= d) && (fmin(sy - 1, n - sx) <= d)) { 
          std::cout << failure;
      } 
      else {
          std::cout << n + m - 2;
      }
      std::cout << std::endl;
  }
 
return 0;
 
}
