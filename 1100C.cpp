//https://codeforces.com/contest/1100/problem/C
//bpm-22-2 elnur israilov

#define _USE_MATH_DEFINES
 
#include <iostream>
#include <vector>
#include <cmath>
#include <numbers>
 
int main()
{
	int n, r;
	float res;
 
	std::cin >> n >> r;
 
	res = (r*sin(M_PI / n)) / (1 - sin(M_PI / n));
 
	std::cout << res;
 
	return 0;
}
