#include <iostream>
using namespace std;
int main()
{
    float r;
    float PI=3.14;
    cout << "Enter radius of a circle: ";
    cin >> r;
    float circum = 2*PI*r;
    float area = PI*r*r;
    cout << "Circumference of a circle = " << circum << " and Area of a circle = " << area;
    return 0;
}