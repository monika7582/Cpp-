#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    if(a<b){
        cout <<"a is minimum." <<endl;
    }
    else {
        cout << "b is minimum."<< endl;
    }
    return 0;
}