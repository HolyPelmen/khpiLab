#include "textFile.h"

textFile::textFile() {}

textFile::~textFile()
{
	a.clear();
}

void textFile::setA(std::string b)
{
	a = b;
}

std::ofstream& operator<<(std::ofstream& out, const textFile& point)
{
	out << point.a;
	return out;
}
