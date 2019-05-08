#include <iostream>
using namespace std;

void show1(int nElements, string texts[])
{
    // cout << sizeof(texts) << endl; return sizeof pointer
    for(int i=0; i<nElements; i++)
    {
        cout << texts[i] << endl;
    }
}
void show2(const int nElements, string *texts)
{
    // cout << sizeof(texts) << endl; return sizeof pointer
    for(int i=0; i<nElements; i++)
    {
        cout << texts[i] << endl;
    }
}
void show3(string (&texts)[3])
{
    // cout << sizeof(texts) << endl; return sizeof pointer
    for(int i=0; i<sizeof(texts)/sizeof(string); i++)
    {
        cout << texts[i] << endl;
    }
}
char *getMemory()
{
    char *pMem = new char[100];
    return pMem;
}

void freeMemory(char *pMem)
{
    delete [] pMem;
}
int main()
{
    string texts[] = {"apple", "orange", "banana"};
    cout << sizeof(texts) << endl;
    show3(texts);

    char *pMemory = getMemory();
    freeMemory(pMemory);

    return 0;
}