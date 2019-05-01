#include <iostream>
using namespace std;

int main()
{
    cout << "1. Hey jhalak, its me!" << endl;
    cout << "2. Come home soon." << endl;
    cout << "3. Dont be too late." << endl;
    cout << "4. Otherwise no food. " << endl;

    cout << " Please select anyone > " << flush;
    int value;
    cin >> value;

    if(value <3)
    {
        cout << "More love, good life." << endl;
    }
    else 
    {
        cout << " Insufficient love and care. " << endl;
    }

    return 0;
}