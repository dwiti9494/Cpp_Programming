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

Animal *createAnimal()
{
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;

    return 0;
}
// Memory allocation - stack