#include "Person.h"

Person::Person()
{
    name = "Dwiti";
}
string Person::toString()
{
    return " Persons name is : " + name;
}
void Person::setName(string newName)
{
    name = newName;
}
string Person::getName()
{
    return name;
}