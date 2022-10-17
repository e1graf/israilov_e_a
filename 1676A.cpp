#include <iostream>
 
int main(){
 
    int m, a, r, i, n, e, t;
    
    std::cin >> n;
    
    for (i = 0; i < n; i++) {
        std::cin >> m;
        a = m/1000;
        r = m%1000;
        if ((a/100 +((a/10)%10) + a%10 ) == (r/100 + ((r/10)%10) + r%10)){
            std::cout << "YES" << std::endl;
        } 
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}