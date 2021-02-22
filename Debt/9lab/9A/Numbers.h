#pragma once
class Numbers
{
public:
	Numbers();
	Numbers(int, int);
	~Numbers();

	int get();
	
	friend bool operator<(const Numbers& _left, const Numbers& _right);
	friend bool operator>(const Numbers& _left, const Numbers& _right);
	friend bool operator==(const Numbers& _left, const Numbers& _right);

private:
	int a, b, sum;
};

