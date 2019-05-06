#include <iostream>
using namespace std;

int main()
{
    const int elements = 5;
    string texts[elements] = {"one", "two", "three", "four", "five"};
    string *pTexts = texts;

    pTexts += 3;
    cout << *pTexts << endl;

    pTexts -= 2;
    cout << *pTexts << endl;

    string *pEnd = &texts[elements];
    pTexts = &texts[0];

    while (pTexts != pEnd)
    {
        cout << *pTexts << endl;
        pTexts++;
    }
    // Set pTexts back to start.
    pTexts = &texts[0];
    long Elements = (long)(pEnd - pTexts);
    cout << Elements << endl;
    return 0;
}