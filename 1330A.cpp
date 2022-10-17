//https://codeforces.com/contest/1330/problem/A
//bpm-22-2 elnur israilov

#include <iostream>
#include <vector>
 
int main()
{
  int m, a, r, i, n, e, t, x, b, v, d, g;
  std::cin >> e; 
  
  for (i=0; i<e; i++) { 
      std::vector <int> v;
      std::cin >> n >> x; 
      a = n + x; 
      r = a;
      
      for (t=0 ; t<n; t++) { 
          std::cin >> b; 
          v.push_back(b);
      }
      
      for (t=a ; t>0; t--) { 
          d = t;
          
          for (g = 1; g <= t; g++) {
              for (m=0; m < v.size(); m++) {
                  if ( g == v[m] ) { 
                      d--;
                      break;
                  }
              }
          }
          if (d <= x) {
              std::cout << t << std::endl;
              break;
          }
      }
  }
}
