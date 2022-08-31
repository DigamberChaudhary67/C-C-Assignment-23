/*
Qno6:- Write a C++ program to calculate an average of
3 numbers.
*/
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, s=0;
    float av=0;
    cout<<"Enter the any 3 number ";
    cin>>a>>b>>c;
    s = a+b+c;
    av = s/3;
    cout<<"The average of Three number is "<<av;
    cout<<endl;
    return 0;

}