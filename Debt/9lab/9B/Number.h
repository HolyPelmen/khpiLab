#pragma once
#include <string>
class Number
{
public:
	Number();
	Number(std::string);
	~Number();

	std::string getNumber();
private:
	std::string number;
};

