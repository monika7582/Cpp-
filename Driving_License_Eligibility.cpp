#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age of a person: ";
    cin >> age;
    if(age >= 18)
    {
        cout << "Eligible for getting driving license.";
    }
    else 
    {
        cout << "Not eligible for getting driving license.";
    }
    return 0;
}