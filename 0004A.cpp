//https://codeforces.com/contest/4/problem/A
//bpm-22-2 elnur israilov

#include <iostream>
#include <string>
 
int main(){
    int w = 0;
    std::cin >> w;
    if (w % 2 == 0 && w >= 4) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
    
