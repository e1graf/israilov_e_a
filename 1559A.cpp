//https//codeforces.com/problemset/problem/1559/A
//bpm-22-2 elnur israilov

//the idea here is that we can fill the array with binary-multiplies of all array elements,
//for example: [a1,a2,a3] turns into [a1&a2&a3, a1&a2&a, a1&a2&a3], if we take the lines [1;2], [2;3] and [1;3]
//so all the elements will be equal and each will equal to max

#include <iostream>

int main() { 
    int i;
    int t; 
    int n; 
    int x;
    int tmp;
   
    std::cin >> t; 
   
    while(t--) { 
        std::cin >> n; 
        std::cin >> x;
        for (i = 0; i < n - 1; i++) {
            std::cin >> tmp;
            x &= tmp;
        }
    std::cout << x << "\n";
    }
}
    