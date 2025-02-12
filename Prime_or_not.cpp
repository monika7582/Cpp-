#include <iostream>
using namespace std;
int main()
{
    int num;
    bool is_prime= true;
    cout << "Enter a positive number: ";
    cin >> num;
    if(num==0 || num==1)
    {
        is_prime=false;
    }
    for(int i=2;i<=num/2;++i)
    {
        if(num%i==0)
        {
            is_prime=false;
            break;
        }
    }
    if(is_prime)
    {
        cout << num << " is a prime number."<<endl;
    }
    else
    {
        cout << "Not a prime number."<<endl;
    }
    return 0;
}