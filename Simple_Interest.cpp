#include <iostream>
using namespace std;
int main()
{
    int P,R,T,SI;
    cout << "Enter Principle(P): ";
    cin >> P;
    cout << "Enter Rate(R):";
    cin >> R;
    cout << "Enter Time(T):";
    cin >> T;
    SI = (P * R * T)/ 100;
    cout << "Simple Interest (SI) = " << SI << endl;
    return 0;
}