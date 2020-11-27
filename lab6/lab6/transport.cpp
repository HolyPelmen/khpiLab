#include "Transport.h"

Transport::Transport()
{
	price = 0.0; num = 0; rent = 0.0; name = ' ';
}

Transport::Transport(double a, int b, double c, std::string d)
{
	price = a; num = b; rent = c; name = d;
}

void Transport::setprice(double a)
{
	price = a;
}

double Transport::getprice()
{
	return price;
}

void Transport::setnum(int a)
{
	num = a;
}

int Transport::getnum()
{
	return num;
}

void Transport::setrent(double a)
{
	rent = a;
}

double Transport::getrent()
{
	return rent;
}

void Transport::setname(std::string a)
{
	name = a;
}

std::string Transport::getname()
{
	return name;
}
