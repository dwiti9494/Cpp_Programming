#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fValue = 767.123456;

    cout << "Size of float : " << sizeof(float) << endl;
    cout <<setprecision(20) << fixed << fValue << endl;
   
    double dValue = 767.123456;
    cout << setprecision(20) << fixed << dValue << endl;

    long double lValue = 767.123456123456;
    cout << setprecision(20) << fixed << lValue << endl;
    cout << "Size of long double: " << sizeof(lValue)  << endl;
    return 0; 
}