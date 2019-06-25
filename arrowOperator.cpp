#include <iostream>
using namespace std;

class Marks
{
    int mark;

public:
    Marks(int m)
    {
        mark = m;
    }
    void whatsYourMark()
    {
        cout << "hey i got" << mark << "marks" << endl;
    }
    Marks *operator->()
    {
        return this;
    }
};
int main()
{
    Marks dwitismark(65);
    dwitismark.whatsYourMark();
    dwitismark->whatsYourMark();

    return 0;
}