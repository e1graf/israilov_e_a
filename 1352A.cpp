//https://codeforces.com/contest/1352/problem/A
//bpm-22-2 elnur israilov

#include <iostream>
#include <vector>
#include <math.h>
 
int main() {
    int a, i, j, n, k, t, c; 
    std::cin >> n; 
    for (i=0; i<n; i++) { 
        int x =0;
        std::vector <int> vec; 
        std::cin >> a; 
        while (a>0) { 
            k = a % 10;
            if (k!=0)  {
                vec.push_back(k*pow(10,x));
            }
            a = a/10;
            x++;
        }
        t = vec.size();
        std::cout << t;
        std::cout<< std::endl;
        c=0;
        for (j=t-1; j>=0; j--) {
            std::cout << vec[j] << ' ';
        }
        std::cout<< std::endl;
    }
    return 0;
}
