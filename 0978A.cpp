#include <iostream>
#include <vector>
 
int main() {
    
    int m, a, r, i, n, e, t, o, x;
    std::cin >> n; 
    
    std::vector <int> nabor1;
    std::vector <int> nabor2;
    nabor1.reserve(50);
    
    for (i=0; i<n; i++) {
        std::cin >> m; 
        nabor1.push_back(m);
        }
    
    r = nabor1.size() - 1;
    
    nabor2.push_back(nabor1[r]);
    
    for (i=r-1; i>=0; i--) {
        x = 0;
        for (o=0; o<nabor2.size(); o++) {
            if (nabor1[i]==nabor2[o]) { 
                x++;
            }
        }
        if (x==0) {
            nabor2.push_back(nabor1[i]);
        }
    }
        
    t = nabor2.size() - 1;
    
    std::cout << t+1 << std::endl;
    
    for (e=t; e>=0; e--) {
        std::cout << nabor2[e] << ' ';
    }
    
    return 0;
}
 