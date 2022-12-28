#include <iostream>
#include <cmath>
#include <array> 
#include <vector>

int main() {
	int i;
	int j;
	int a;
	int b;
	int cur; 
	int h;
	int w; 
	int sum = 0; 

	std::cin >> a >> b;
	std::vector <int> stroka; 

	for (i = 0; i < a*b; i++) {
		std::cin >> cur;
		stroka.push_back(cur);
	}

	std::cin >> h >> w; 

	for (i = 0; i < h; i++) {
		for (j = i * b; j < (i + 1) * b; j++) {
			if (j % b < w) sum += stroka[(i * b) + (j % b)];
		}
	}

	std::cout << sum;

}