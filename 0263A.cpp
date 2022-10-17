#include <iostream>

int main(){
    int i = 0;
    int a = 0;
    int b = 0;
    int c = 0; 
    int d = 0;
    int e = 0;
    int steps = 0;
    for (i = -2; i < 3; i++) { 
        std::cin>> a;
        std::cin>> b;
        std::cin>> c;
        std::cin>> d;
        std::cin>> e;
        if ((a + b + c + d + e)==1) { 
            if (a == 1) {
                steps = 2 + abs(i);
            }
            else if (b == 1) {
                steps = 1 + abs(i);
                }
            else if (c == 1) {
                steps = abs(i);
                }
            else if (d == 1) {
                steps = 1 + abs(i);
                }
            else {
                steps = abs(i) + 2;
            }
        }}
    std::cout<< steps;
                
            
    return 0;
}