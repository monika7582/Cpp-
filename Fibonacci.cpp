#include<iostream>
using namespace std;
int main()
{
    int num;
    int n1=0,n2=1,next_term;
    cout << "Enter a number upto which you want a fibonacci series: ";
    cin >> num;
    cout << "Fibonacci Series: 0 1 ";
    for(int i=1; i<=num; i++)
    {
        next_term=n1+n2;
        cout << next_term << " ";
        n1=n2;
        n2=next_term;
    }
    return 0;
}