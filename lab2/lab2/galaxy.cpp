#include <iostream>
#include "galaxy.h"

void galaxy::setclass(std::string &a)
{
	cl = a;
}

std::string galaxy::getclass()
{
	return cl;
}

void galaxy::setmas(double&a)
{
	mas = a;
}

double galaxy::getmas()
{
	return mas;
}

void galaxy::setper(double&a)
{
	per = a;
}

double galaxy::getper()
{
	return per;
}

void galaxy::setnum(unsigned int&a)
{
	num = a;
}

int galaxy::getnum()
{
	return num;
}

galaxy galaxy::operator=(galaxy& d1)
{
	cl = d1.cl;
	mas = d1.mas;
	per = d1.per;
	num = d1.num;
	return galaxy();
}

galaxy operator+(const galaxy& d1, const galaxy& d2)
{
	galaxy temp;
	temp.cl = d1.cl + d2.cl;
	temp.mas = d1.mas + d2.mas;
	temp.per = d1.per + d2.per;
	temp.num = d1.num + d2.num;
	return galaxy(temp);
}

void operator==(const galaxy& d1, const galaxy& d2)
{
	if (d1.cl != d2.cl) { std::cout << "Данные экземпляры класса не равны." << std::endl; }
	else if (d1.mas != d2.mas) { std::cout << "Данные экземпляры класса не равны." << std::endl; }
	else if (d1.num != d2.num) { std::cout << "Данные экземпляры класса не равны." << std::endl; }
	else if (d1.per != d2.per) { std::cout << "Данные экземпляры класса не равны." << std::endl; }
}


std::ostream& operator<<(std::ostream& stream, galaxy& o1)
{
	stream << "|" << o1.cl << "  |  ";
	stream << o1.mas << "|";
	stream << o1.per << "  |";
	stream <<  o1.num << "  |" << std::endl;
	return stream;
}

std::istream& operator>>(std::istream& stream, galaxy& o1)
{
	std::cout << "Введите спектральный класс, масса, часть%, численность: \n";
	stream >> o1.cl;
	stream >> o1.mas;
	stream >> o1.per;
	stream >> o1.num;
	return stream;
}
