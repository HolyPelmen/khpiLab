#include "Number.h"

Number::Number() {}

Number::Number(std::string _number) { number = _number; }

Number::~Number()
{
	number.clear();
}

std::string Number::getNumber()
{
	return number;
}
