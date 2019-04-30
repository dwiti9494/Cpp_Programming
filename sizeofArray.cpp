#include <iostream>
using namespace std;

int main()
{
    int value[] = { 4, 7, 5, 6};
    cout << sizeof(value) << endl;
    cout << sizeof(int) << endl;

    for(unsigned int i=0; i<sizeof(value)/sizeof(int); i++)
    {
        cout << value[i] << " " << flush;
    }
    cout << endl;

    return 0;
}