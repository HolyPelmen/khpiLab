#include <iostream>
#include <fstream>
#include <memory>
#include "textFile.h"

int main() {
	std::ofstream fout("test.txt");

	textFile t; t.setA("test");
	fout << t;
	fout.close();
	return 0;
}