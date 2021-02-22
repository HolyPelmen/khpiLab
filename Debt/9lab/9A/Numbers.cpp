#include "Numbers.h"

Numbers::Numbers()
{
	a = b = sum = 0;
}

Numbers::Numbers(int _a, int _b)
{
	a = _a; b = _b;
	sum = a + b;
}

Numbers::~Numbers() {}

int Numbers::get()
{
	return sum;
}

bool operator<(const Numbers& _left, const Numbers& _right)
{
	return _left < _right;
}

bool operator>(const Numbers& _left, const Numbers& _right)
{
	return _left > _right;
}

bool operator==(const Numbers& _left, const Numbers& _right)
{
	return _left == _right;
}
