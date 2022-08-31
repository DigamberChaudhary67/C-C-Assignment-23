/*
Qno5:- Write a C++ program to calculate the volume of a cuboid.
*/
#include<iostream>
using namespace std;
int main()
{
    int l, b, h, volcuboid=0;
    cout<<"Enter the Length, Breadth and Height ";
    cin>>l>>b>>h;
    volcuboid = l * b * h;
    cout<<"The colume of cuboid is "<<volcuboid<<endl;
    return 0;
}