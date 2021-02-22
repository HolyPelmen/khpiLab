#pragma once
#include <iostream>
class Name
{
public:
	Name();
	Name(std::string);
	Name(std::string, std::string);
	~Name();

	std::string getName();
	std::string getSubname();

	friend bool operator<(const Name& _left, const Name& _right);
	friend std::ostream& operator<<(std::ostream& out, const Name& c);
	friend bool operator==(const Name& _left, const Name& _right);
private:
	std::string name, subname;
};

