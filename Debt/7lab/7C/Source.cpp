#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <time.h>

int main() {
	srand(time(NULL));

	std::fstream num("num.txt", std::ios::binary | std::ios::out);

	std::cout << "Numbers before writing: " << std::endl;

	{
		std::unique_ptr<std::vector<int>> numbersStart(new std::vector<int>);
		for (size_t i = 0; i < 10; i++)
		{
			int q = rand() % 10;
			numbersStart.get()->push_back(q);
			num.write((char*)&q, sizeof q);
			std::cout << numbersStart.get()->at(i) << " ";
		}
		std::cout << std::endl;
		num.close();

		std::fstream num1("num.txt", std::ios::binary | std::ios::out);
		if (numbersStart.get()->at(5) % 2 == 0) {
			for (size_t i = 0; i < 5; i++)
			{
				numbersStart.get()->at(i) = 77;
			}
		}
		else {
			for (size_t i = 6; i < 10; i++)
			{
				numbersStart.get()->at(i) = 88;
			}
		}
		for (size_t i = 0; i < numbersStart.get()->size(); i++)
		{
			num1.write((char*)&numbersStart.get()->at(i), sizeof numbersStart.get()->at(i));
		}
		num1.close();
	}

	std::fstream in("num.txt", std::ios::binary | std::ios::in);

	std::cout << "Numbers after changing: " << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		int q;
		in.read((char*)&q, sizeof q);
		std::cout << q << " ";
	}
	in.close();

    return 0;
}