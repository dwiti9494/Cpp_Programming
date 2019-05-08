#include <iostream>
using namespace std;

class Animal
{
private:
    string name;
public:
    Animal()     // constructor
    {
        cout << "Animal created." << endl;
    }
    Animal(const Animal& other):   // copy constructor
        name(other.name)
        {
            cout << "Animal created by copying." <<endl;
        }
        ~Animal()    // destructor
        {
            cout << "Destructor called" << endl;
        }
        void setName(string name)  // Set name method
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
    Animal *pCat1 = new Animal();
    pCat1->setName("Freddy");
    pCat1->speak();
    delete pCat1;

    cout << sizeof(pCat1) << endl;
    return 0;
}