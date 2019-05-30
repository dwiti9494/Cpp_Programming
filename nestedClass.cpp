#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    class Address
    {
    public:
        string country;
        string streetname;
        int homeno;
    };
    Address addr;
    void AddressPlease()
    {
        cout << name << endl
             << addr.country << endl
             << addr.streetname << endl
             << addr.homeno << endl;
    }
};
int main()
{
    Person dwiti;
    dwiti.name = "dwiti";
    dwiti.addr.country = "India";
    dwiti.addr.streetname = "Albany dr";
    dwiti.addr.homeno = 265;

    dwiti.AddressPlease();

    return 0;
}