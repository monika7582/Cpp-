#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin>> a;
    cout << "Enter b:";
    cin >>b;
    if(a>b)
    {
        cout <<"a is largest."<<endl;
    }
    else {
        cout << "b is largest."<< endl;
    }
    return 0;
}