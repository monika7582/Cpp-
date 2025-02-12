#include<iostream>
using namespace std;
int main()
{
    int m1,m2,m3,m4,m5;
    cout <<"Enter your marks in Physics: ";
    cin >> m1;
    cout <<"Enter your marks in Chemistry: ";
    cin >> m2;
    cout <<"Enter your marks in Biology: ";
    cin >> m3;
    cout <<"Enter your marks in Mathematics: ";
    cin >> m4;
    cout <<"Enter your marks in English: ";
    cin >> m5;
    int perc = ((m1+m2+m3+m4+m5)/5);
    if(perc>=90)
    {
        cout << "Grade A+ " << perc <<"%";
    }
    else if(perc>=80)
    {
        cout << "Grade A " << perc <<"%";
    }
    else if(perc>=70)
    {
        cout << "Grade B " << perc <<"%";
    }
    else if(perc>=60)
    {
        cout << "Grade C " << perc <<"%";
    }
    else if(perc>=50)
    {
        cout << "Grade D " << perc <<"%";
    }
    else if(perc>=40)
    {
        cout << "Grade E " << perc <<"%";
    }
    else 
    {
        cout << "Fail " << perc <<"%";
    }
}