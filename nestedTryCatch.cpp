#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw "a charcter exception";
        }
        catch (const char *e)
        {
            cout << "character type in inner block --> " << e << endl;
            cout << "rethrow the exception" << endl;
            throw;
        }
    }
    catch (const char *e)
    {
        cout << "character type in outer block --> " << e << endl;
    }
    catch (...)
    {
        cout << "unexpected exception type in outer block --> " << endl;
    }

    return 0;
}