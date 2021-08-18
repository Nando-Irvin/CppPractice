#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main() {
	srand(time(0));
	std::vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 }; // or initialize from array if not c++11
	std::random_shuffle(vec.begin(), vec.end());
	vec.resize(4);

	int number = 0;
	for (auto i = vec.begin(); i != vec.end(); ++i) {
		number = 10 * number + (*i);
	}
	std::cout << number << std::endl;
	std::cin.get();
}
