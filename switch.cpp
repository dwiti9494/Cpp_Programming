#include <iostream>
using namespace std;

int main()
{
    int value = 4;

    switch (value)
    {
    case 4:
        cout << "Value is 4" << endl;

    case 5:
        cout << "Value is 5" << endl;
        break;
    case 6:
        cout << "Value is 6" << endl;
        break;
    default:
        cout << "Unrecognized value." << endl;
    }
    return 0;
}