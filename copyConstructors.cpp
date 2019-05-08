#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() // Adding constructor here
    {
        cout << "Animal created." << endl;
    };
    Animal(const Animal &other) // Copy constructor
    {
        name = other.name;
        cout << "Animal created by copying." << endl;
    }

    void setName(string name) { this->name = name; };
    void speak() const
    {
        cout << "My name is : " << name << endl;
    }
};
int main()
{
    Animal animal1; // create object
    animal1.setName("Freddy");

    Animal animal2 = animal1; // copy object by the usage of constructor
    animal2.speak();
    animal2.setName("Begum");

    animal1.speak();
    animal2.speak();

    Animal animal3(animal1);
    animal3.speak();

    return 0;
}