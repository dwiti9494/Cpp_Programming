#include <iostream>
using namespace std;

class Animal // superclass
{
public:
    void speak()
    {
        cout << "grrrr" << endl;
    }
};

class Cat : public Animal // Sub class of animal
{
public:
    void jump()
    {
        cout << "cat jumping" << endl;
    }
};

class Tiger : public Cat // subclass is direct subclass of animal, subclass of cat
{
public:
    void attackAntelope()
    {
        cout << "attacking" << endl;
    }
};

int main()
{
    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump();

    Tiger tiger;
    tiger.jump();
    tiger.speak();
    tiger.attackAntelope();

    return 0;
}