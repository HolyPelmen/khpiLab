#pragma once
#include <iostream>

class Transport
{
public:
	Transport();
	Transport(double, int, double, std::string);

	void setprice(double);
	double getprice();

	void setnum(int);
	int getnum();

	void setrent(double);
	double getrent();

	void setname(std::string);
	std::string getname();
private:
	double price;
	int num;
	double rent;
	std::string name;
};

