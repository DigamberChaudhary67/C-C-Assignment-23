/*
Qno8:- Write a C++ program to swap values of two int variable
without using third variable.
*/

#include<iostream>
using namespace std;
int main()
{
    int first, second;
    cout<<"Enter the any two number ";
    cin>>first>>second;
    first = first + second;
    second = first -second;
    first = first - second;
    cout<<"The swaped number is "<<first << " " <<second;
    cout<<endl;
    return 0;
}