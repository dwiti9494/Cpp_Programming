#include <iostream>
using namespace std;

class Marks
{
int subjects[3];
public:
    Marks(int sub1, int sub2, int sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
    }
    int operator[] (int position)
    {
        return subjects[position];
    }
};
int main()
{
Marks dwiti(22,33,55);
cout << dwiti[0] << endl;
cout << dwiti[1] << endl;
cout << dwiti[2] << endl;
    return 0;
}