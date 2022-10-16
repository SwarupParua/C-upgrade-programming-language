/* Write a c++ program to take length and breadth of a rectangle and print
    it's area */

#include<iostream>
using namespace std;

int main()
{
    int length,breadth,Area;
    cout<<"The length of a rectangle is :";
    cin>>length;
    cout<<"The breadth of a rectangle is :";
    cin>>breadth;
    Area=length*breadth;
    cout<<"Area of the rectangle is :"<<Area<<endl;
    return 0;
}