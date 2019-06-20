#include <iostream>
using namespace std;

class Marks
{

    int mark;

public:
    Marks(int m)
    {
        cout << "constructor is called " << endl;

        mark = m;
    }
    void whatsYourMark()

    {
        cout << "hey i got" << mark << "marks" << endl;
    }
    Marks operator()(int mk)
    {
        mark = mk;
        cout << "operator function is called" << endl;
        return *this;
    }
};
int main()
{
    Marks dwitismark(85);
    dwitismark.whatsYourMark();
    return 0;
}