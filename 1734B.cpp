#include <iostream>

int main() { 
    int n; 
    int t; 
    int i; 
    int j; 
    
    std::cin >> t; 
    while (t--) { 
        
        std::cin >> n; 
        
        for (i = 1; i <= n; i++) { 
            for (j = 1; j <= i; j++) { 
                std::cout << ((j == 1) || (j == i)) << ' ';
            }
            std::cout << '\n';
        }
    }
return 0;
}
