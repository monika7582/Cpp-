#include<iostream>
using namespace std;
bool isprime(int num)
{
    if(num==0 || num==1)
    {
        return false;
    }
    for(int i=2; i<=num/2; ++i)
    {
       if(num%i==0)
       {
        return false;
       }
       else 
       {
        return true;
       }
    }
}
int main()
{
    int num;
    cout << "Enter a number upto which you want a list of a prime number: ";
    cin >> num;
    for(int i=1; i<num; i++)
    {
        if(isprime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}