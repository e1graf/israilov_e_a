//https://codeforces.com/problemset/problem/1699/B
//bpm-22-2 elnur israilov

#include <iostream>

int main() {

    int i;
    int j;
    int t;
    int a;
    int b;

    std::cin >> t;

    while (t--) {
        std::cin >> a >> b;
        for (i = 0; i < a; i++) {
            if ((i % 4 == 0) || (i % 4 == 3)) {
                for (j = 0; j < b; j++) {
                    std::cout << ((j % 4 == 0 || j % 4 == 3)) << ' ';
                }
            }
            else {
                for (j = 0; j < b; j++) {
                    std::cout << ((j % 4 == 1 || j % 4 == 2)) << ' ';
                }
            }
            std::cout << '\n';
        }
    }
}