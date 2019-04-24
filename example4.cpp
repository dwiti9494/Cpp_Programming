#include <iostream>
using namespace std;

int main()
{
    int numberCats = 5;
    int numberDogs = 7;

    cout << "Number of cats : " << numberCats << endl;
    cout << "Number of dogs : " << numberDogs << endl;

    cout << "Total number of animals : " << numberCats + numberDogs << endl;
    
    cout << "New dog accquired! " << endl;
    numberDogs = numberDogs + 1;
    cout << "New number of dogs : " << numberDogs << endl;
    
    
    
    return 0;
}