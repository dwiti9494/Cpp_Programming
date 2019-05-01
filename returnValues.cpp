#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. Search" << endl;
    cout << "2. View record" << endl;
    cout << "3. Quit" << endl;
}
int processSelection()
{
    cout << " Enter selection: " << endl;

    int input;
    cin >> input;
    
    return input;
}
int main()
{
    showMenu();
    int selection = processSelection();

    switch (selection)
    {
    case 1:
        cout << "Searching.." << endl;
        break;
    case 2:
        cout << "Viewing.." << endl;
        break;
    case 3:
        cout << "Quitting.." << endl;
        break;
    default:
        cout << "Please select an item from the menu." << endl;
    } 

    return 0;
}