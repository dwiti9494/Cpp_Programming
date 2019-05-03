#include <sstream>
#include "Person.h"

string Person::toString()
{
    stringstream ss;
    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;

    return ss.str();
}