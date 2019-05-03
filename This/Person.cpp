#include <sstream>
#include "Person.h"

Person::Person()
{
    age = 0;
    name = " ";
}

Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;

    cout << "Memory location obj: " << this << endl;
}

string Person::toString()
{
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}