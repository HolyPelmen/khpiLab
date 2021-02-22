#include <iostream>
#include "Array.h"
#include <memory>
#include <time.h>

int main() {
	srand(time(NULL));

	Array<int> arr;
	arr.setIndex(20);
	for (int q = 0; q < arr.getIndex(); ++q) {
		int temp = rand() % 49 + 1;
		arr.fillElement(q, temp);
	}
	arr.print();
	std::cout << "Sum of all elements: " << arr.sumElement() << std::endl;
	std::cout << "Average value of array: " << arr.average() << std::endl;
	std::cout << "Overloading [] testing: " << std::endl;
	int i;
	std::cout << "Enter array size > "; std::cin >> i; std::cout << std::endl;
	
	if (arr[i] != -1) std::cout << "Max value of this array: " << arr[i] << std::endl;

	return 0;
}