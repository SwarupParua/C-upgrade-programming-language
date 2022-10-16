/* Write a program to check whether two numberes(entered by user)are equal 
    or not (0 for not equal,1 for equal)*/

#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter the value of x is :";
    cin>>x;
    cout<<"Enter the value of y is :";
    cin>>y;
    cout<<(x==y)? 1:0;
    return 0;
}