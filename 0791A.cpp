#include <iostream>
 
int main(){
 
    int m, a, r, i, n, e, t;
    
    std::cin >> a >> r; 
    
    t = 0;
    while (a <= r) {
        a = 3*a;
        r = 2*r;
        t++;       
    }
        std::cout<<t;
    return 0;
}