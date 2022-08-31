/*
Qno9:- Write a C++ program to find the maximum of two number.
*/

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the any two number ";
    cin>>a>>b;
    if(a>b)
        cout<<a <<" is the maximum number";
    else
        cout<<b <<" is the maximum number";
    return 0;
}