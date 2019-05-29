#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    void walk()
    {
        cout << "animal walks" << endl;
    }
};
class Tiger : virtual public Animal{

};
class Lion : virtual public Animal{

};
class Liger : public Tiger , public Lion{

};

int main()
{
    Liger dwiti;
    dwiti.walk();
    return 0;
}