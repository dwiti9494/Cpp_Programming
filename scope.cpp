#include <iostream>
using namespace std;
void display();
int x = 100;


int main()
{
    cout << x << endl;
    display();
    return 0;
}
void display()
{
    {
        int p = 25;
    }
    cout << x << endl;
}