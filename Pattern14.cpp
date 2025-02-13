#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch= 'A';
    for(int i=64;i<(64+n);i++)
    {
        for(int j=i+1; j>64; j--)
        {
           cout << char(j) <<" ";
        }
        cout << endl;
    }
    return 0;
}