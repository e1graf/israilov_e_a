#include <iostream>
#include <string>
 
int main(){
    int x = 0;
    int steps = 0;
    std::cin>> x;
    if (x <= 5) {
        std::cout<<"1";
    }
    else { 
        while (x > 5) {
            steps = steps + 1;
            x = x - 5;
        }
        steps = steps + 1;
        std::cout<<steps;
    }
    return 0;
}