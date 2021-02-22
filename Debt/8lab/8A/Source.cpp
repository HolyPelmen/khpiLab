#include <iostream>
#include "Num.h"

int main() {
	setlocale(LC_ALL, "Russian");

	{
	    Num<short> firstInt(10); Num<short> secondInt(5);
	    std::cout << "First int: " << firstInt.getNum() << ". Second int: " << secondInt.getNum() << ".\n";
	    Num<short> resultInt = firstInt / secondInt;
	    std::cout << "Result of / operation: " << resultInt.getNum() << "." << std::endl;
    }

	{
		Num<float> firstFloat(10.5); Num<float> secondFloat(2.3);
		std::cout << "First float: " << firstFloat.getNum() << ". Second float: " << secondFloat.getNum() << ".\n";
		Num<float> resultFloat = firstFloat / secondFloat;
		std::cout << "Result of / operation: " << resultFloat.getNum() << "." << std::endl;
	}

    return 0;
}