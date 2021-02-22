#include "Name.h"

Name::Name() {}

Name::Name(std::string _name)
{
    name = _name;
}

Name::Name(std::string _name, std::string _subname)
{
    name = _name; subname = _subname;
}

Name::~Name()
{
    name.clear(); subname.clear();
}

std::string Name::getName()
{
    return name;
}

std::string Name::getSubname()
{
    return subname;
}

bool operator<(const Name& _left, const Name& _right)
{
     return _left.name < _right.name;
}

std::ostream& operator<<(std::ostream& out, const Name& c)
{
    out << c.name << " " << c.subname;
    return out;
}

bool operator==(const Name& _left, const Name& _right)
{
    return _left.name == _right.name;
}
