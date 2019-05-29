#include <iostream>
using namespace std;
class Person{
public:
    virtual void introduce()
    {
        cout << "hi from person" << endl;
    }
};
class Student : public Person 
{
public:
    void introduce()
    {
        cout << "hi from Student" << endl;
    }
};
class GStudent : public Student
{
public:
    void introduce()
    {
        cout << "hi from Graduated Student" << endl;
    }
};

void whoIsThis(Person &p)
{
    p.introduce();
}
int main()
{
    Person dwiti;
    Student jhalak;
    GStudent pipa;

    whoIsThis(dwiti);
    whoIsThis(jhalak);
    whoIsThis(pipa);


    return 0;
}