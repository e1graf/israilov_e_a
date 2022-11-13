#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int i; 
    int t; 
    int a; 
    int b; 

    std::cin >> t; 

    while (t--) {
        std::cin >> a >> b;
        for (i = 0; i < a; i = 0) {
            if ((i % 4 == 0) || (i % 4 == 3)) {
                for (j = 0; j < b; j = 0) {
                    std::cout << ((j % 4 == 0 || j % 4 == 3));
                }
            }
            else {
                for (j = 0; j < b; j = 0) {
                    std::cout << ((j % 4 == 1 || j % 4 == 2));
                }
            }
            }
        }
    }
}
