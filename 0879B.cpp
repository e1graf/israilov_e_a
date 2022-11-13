//https://codeforces.com/problemset/problem/879/B
//bpm-22-2 elnur israilov

#include <iostream>
#include <vector>

int main() {

    int n;
    long long k;

    std::cin >> n >> k;
    std::vector<int> powers(n);

    for (int i = 0; i < n; i++) {
        std::cin >> powers[i];
    }

    int winner = powers[0];
    long long cur_k = 0;

    for (int i = 1; i < n; i++) {

        if (powers[i] < winner) {
            cur_k++;
        }
        else {
            cur_k = 1;
            winner = powers[i];
        }
        if (cur_k == k)
            break;
    }

    std::cout << winner << '\n';
}
