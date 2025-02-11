#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age of a person: ";
    cin >> age;
    if(age >= 18)
    {
        cout << "Eligible for voting.";
    }
    else 
    {
        cout << "Not eligible for voting.";
    }
    return 0;
}