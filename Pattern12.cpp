#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int num=1;
        for(int j=i+1; j>0; j--)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}