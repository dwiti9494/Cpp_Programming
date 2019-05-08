#include <iostream>
using namespace std;

class Animal
{
private:
    string name;

public:
    Animal() // constructor
    {
        cout << "Animal created." << endl;
    }
    Animal(const Animal &other) : // copy constructor
                                  name(other.name)
    {
        cout << "Animal created by copying." << endl;
    }
    ~Animal() // destructor
    {
        cout << "Destructor called" << endl;
    }
    void setName(string name) // Set name method
    {
        this->name = name;
    }
    void speak() const // speak method which o/p the name
    {
        cout << "My name is : " << name << endl;
    }
};
int main()
{

    Animal *pAnimal = new Animal[10];
    pAnimal[5].setName("George");
    pAnimal[5].speak();

    delete[] pAnimal;

    char *pMem = new char[1000];
    delete[] pMem;

    return 0;
}