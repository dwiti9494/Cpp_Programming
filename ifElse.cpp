#include <iostream>
using namespace std;

int main()
{
    cout <<  "1. \tAdd new record." << endl;
    cout <<  "2. \tDelete record." << endl;
    cout <<  "3. \tView record." << endl;
    cout <<  "4. \tSearch record." << endl;
    cout <<  "5. \tQuit." << endl;

    cout << "Enter ypur selection > " << flush;

    int value;
    cin >> value;

    if(value < 3) 
    {
        cout << "Insufficient privileges to use these menu option. " << endl;
    }
    else
{
    cout << "Privilege level sufficient. " << endl;
}
    return 0;
}