#include<iostream>
using namespace std;
int main()
{
    int n;
    int fac = 1;
    int i = 1; 
    cout << "Factorial of ";
    cin >> n;
    while(i<=n)
    {
        fac *= i;
        i++;
    }
    cout << "Factorial is " << fac << endl;
    return 0;
}