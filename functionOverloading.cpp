#include <iostream>
#include <string>

using namespace std;
void display();
void display(string);

int main()
{
    display();
    display(" Dwitzz");
    return 0;
}
void display()
{
    cout << "Hello ssup?" << endl;

}
void display(string name)
{
    cout << "Hello ssup?" << name  << endl;
}