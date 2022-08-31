/*
Qno10:- Write a C++ program to add all the
numbers of an array of size 10.
*/

#include<iostream>
using namespace std;
int main()
{
    int n[10],i,s=0;
    cout<<"Enter the any 10 number ";
    for ( i = 0; i<10; i++)
    {
        cin>>n[i];
    }
    for ( i = 0; i < 10; i++)
    {
        s = s + n[i];
    }
    cout<<"The sum of 10 number is "<<s;
    cout<<endl;
    return 0;
    
    
}