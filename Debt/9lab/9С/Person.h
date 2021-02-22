#pragma once
#include <iostream>
class Person
{
    Person();
    Person(int);
    Person(std::string);

    int get_age();
    std::string get_name();

    friend bool operator<(const Person& _left, const Person& _right);
    bool operator()(const Person& _left, const Person& _right);
private:
    int age;
    std::string name;
};

class Staff : Person {
public:

    void print();
    void print(int);
    void print(std::string);

private:
};

