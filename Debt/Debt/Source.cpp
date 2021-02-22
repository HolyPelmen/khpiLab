#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include <vector>
#include "COMP.h"

const int floatAccuracy = 9;

int main() {
	setlocale(LC_ALL, "Russian");

	std::ofstream fin("R_numbers.txt");
	std::ifstream fout("R_numbers.txt");
	
	try {
		if (!fin.is_open()) throw -1;
		else if (!fout.is_open()) throw -1;
	}
	catch (...) { std::cout << "Ошибка при открытии файла" << std::endl; }

	
	int symbolCount = 0, numbersCount = 0;

#pragma region Writing
	{
		std::unique_ptr<std::string> tempWriting(new std::string);

		for (int q = 0; q < 4; ++q, ++numbersCount) {
			float temp;
			std::cout << "Введите вещественное число: ";
			std::cin >> temp;
			*tempWriting.get() += std::to_string(temp) + " ";
			symbolCount += tempWriting.get()->size();
		}

		fin << *tempWriting;
		fin.close();
	}
#pragma endregion

	std::unique_ptr<std::vector<float>> RNumbers(new std::vector<float>);

#pragma region Reading
	{
		std::unique_ptr<char> tempRead(new char[symbolCount]);
		fout.getline(tempRead.get(), symbolCount);

		std::unique_ptr<std::string> temp(new std::string);
		for (int q = 0; q <= symbolCount; q++) {
			if (tempRead.get()[q] != ' ') {
				*temp.get() += tempRead.get()[q];
			}
			if (tempRead.get()[q] == ' ' || q == symbolCount){
				try {
					RNumbers.get()->push_back(atoi(temp.get()->c_str()));
					temp.get()->clear();
				}
				catch (...) { std::cout << "Ошибка при чтении файла" << std::endl; return -1; }
			}
		}
	}
#pragma endregion

	std::unique_ptr<std::vector<COMP<float>>> compNumbers(new std::vector<COMP<float>>);

	std::ofstream finCOM("COMP_numbers.txt");
	for (int q = 0; q < numbersCount; (q += 2)) {
		try {
			compNumbers.get()->push_back(COMP<float>(RNumbers.get()->at(q), RNumbers.get()->at(q + 1)));
		}
		catch (...) { std::cout << "Ошибка при конвертации чисел в комлексные" << std::endl; }
	}
	for (int q = 0; q < compNumbers.get()->size(); ++q) {
		try {
			finCOM << std::to_string(compNumbers.get()->at(q).getComp()) << " ";
			std::cout << compNumbers.get()->at(q).getComp() << " ";
		}
		catch (...) { std::cout << "Ошибка при записи комплексных чисел" << std::endl; }
	}
	finCOM.close();
	
	return 0;
}