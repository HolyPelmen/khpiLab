#include <iostream>
#include <vector>
#include <time.h>
#include <memory>
#include "Numbers.h"

const int vectorSize = 10;

int main() {
	srand(time(NULL));

	std::unique_ptr<std::vector<Numbers>> v1(new std::vector<Numbers>);
	std::unique_ptr<std::vector<Numbers>> v2(new std::vector<Numbers>);

	for (int q = 0; q < vectorSize; ++q) {
		int a, b;
		a = rand() % 10; b = rand() % 10;
		v1.get()->push_back(Numbers(a, b));
		a = rand() % 10; b = rand() % 10;
		v2.get()->push_back(Numbers(a, b));
	}

	std::cout << "Test formation:" << std::endl;
	std::cout << "vector-1 sum (<, >, =) vector-2 sum" << std::endl << std::endl;

	for (int q = 0; q < vectorSize; ++q) {
		try {
			std::cout << v1.get()->at(q).get();
			if (v1.get()->at(q).get() < v2.get()->at(q).get()) std::cout << " < ";
			else if (v1.get()->at(q).get() > v2.get()->at(q).get()) std::cout << " > ";
			else if (v1.get()->at(q).get() == v2.get()->at(q).get()) std::cout << " = ";
			std::cout << v2.get()->at(q).get() << std::endl;
		}
		catch (...) { std::cout << "Out of range error" << std::endl; }
	}

	return 0;
}