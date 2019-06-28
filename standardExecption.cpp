#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    int a = 10, b = 1, c;
    try {
        if(b == 0)
            throw runtime_error("divide by zero error");

        c = a/b;

        cout << c << endl;
    }catch(runtime_error &error){

        cout << "exception accured" << endl;
        cout << error.what();
    }

    return 0;
}