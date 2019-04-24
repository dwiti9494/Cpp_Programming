#include <iostream>
using namespace std;

int main()
{
    string text1 = "Hello this is a string. ";
    string text2 = "It stores character in sequence of bytes.";
    string text3= text1 + text2;

    cout << text1 << text2 << endl;
    cout << text3 << endl;
    
    return 0;
}