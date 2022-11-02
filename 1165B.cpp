//https://codeforces.com/problemset/problem/1165/B
//bpm-22-2 elnur israilov

#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    int i;
    int n;
    int k = 0;
    std::cin >> n;
    std::vector <int> a(n);
    
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    for (i = 0; i < n; i++) if (a[i] > k) k++;
    
    std::cout << k;
}
