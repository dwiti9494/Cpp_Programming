#include <iostream>
#include <string>

using namespace std;

class Human
{
public:
    string name ;
    void introduce();
};

void Human :: introduce()
{
    cout << Human :: name << endl;
}
int main()
{
    Human dwiti;
    dwiti.name = "dwiti";
    dwiti.introduce();
    return 0;
}