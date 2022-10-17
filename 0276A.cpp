#include <iostream>
 
int main() {
    int i, n, t;
    std::cin >> n >> t;
    int max = -10000000000;
    int a, b, u;
    for (i=0; i<n; i++) { 
        std::cin >> a >> b;
        if (b<=t) { 
            u = a;
        } 
        else {
            u = a - (b-t);
        }
        if (max < u) { 
            max = u;
        }
    }
            
    std::cout << max;
    
    return 0;
}
        