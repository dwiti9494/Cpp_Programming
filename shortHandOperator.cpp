#include <iostream>
using namespace std;

class Marks
{
    int mark;

public:
    Marks()
    {
        mark = 0;
    }
    Marks(int m)
    {
        mark = m;
    }
    void YourMarkPlease()
    {
        cout << "your mark is " << mark << endl;
    }
    void operator+=(int bonusmark)
    {
        mark = mark + bonusmark;
    }
    friend void operator-=(Marks &curObj, int redMark);
};
void operator-=(Marks &curObj, int redMark)
{
    curObj.mark -= redMark;
}
int main()
{
    Marks dwitismark(45);
    dwitismark.YourMarkPlease();

    int x = 20;

    dwitismark += x;
    dwitismark.YourMarkPlease();

    dwitismark -= x;
    dwitismark.YourMarkPlease();

    return 0;
}