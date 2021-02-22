#pragma once
#include <iostream>
class textFile
{
public:
	textFile();
	~textFile();

	void setA(std::string);
	friend std::ofstream& operator<< (std::ofstream& out, const textFile& point);
private:
	std::string a;
};

