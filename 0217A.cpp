//https://codeforces.com/contest/217/problem/A
//bpm-22-2 elnur israilov
#include <iostream>
#include <string>
 
 
int main(){
    int year = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin>> year;
    for (int i = year + 1; i < 20000 ;i++) {
        a = i / 1000;
        b = (i - 1000*a) / 100;
        c = (i - 1000*a - 100*b) / 10;
        d = i % 10; 
        if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d)) {
            std::cout << i;
            break;}
    
    }
    return 0;
}
    
