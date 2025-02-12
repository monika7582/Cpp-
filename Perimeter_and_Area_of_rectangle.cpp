#include<iostream>
using namespace std;
int main()
{
    float l,b;
    cout << "Enter length and breadth : ";
    cin >> l >> b;
    float peri = 2*(l+b);
    float area = l*b;
    cout << "Perimeter of a rectangle = " << peri << " and Area of a rectangle = " << area;
    return 0;
}