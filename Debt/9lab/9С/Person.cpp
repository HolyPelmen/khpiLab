#include "Person.h"

Person::Person() {}

Person::Person(int _age) {
	age = _age;
}

Person::Person(std::string _name) {
	name = _name;
}

int Person::get_age()
{
	return age;
}

std::string Person::get_name()
{
	return name;
}

bool Person::operator()(const Person& _left, const Person& _right)
{
	return _left.name < _right.name;
}

bool operator<(const Person& _left, const Person& _right)
{
	return _left.age < _right.age;
}
