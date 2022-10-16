// Write a C++ program to swap two numbers with the help of a third variable

#include <iostream>
using namespace std;

int main()
{
 int n1,n2,temp;

 cout<<"The value of n1 is :";
 cin>>n1;
 cout<<"The value of n2 is :";
 cin>>n2;

 cout << " Before swapping the n1 value is : "<< n1<<"\n"; 
 cout << " Before swapping the n2 value is : "<< n2<<"\n"; 
 temp=n1;
 n1=n2;
 n2=temp;

 cout << " After swapping the n1 value is : "<< n1 <<"\n" ; 
 cout << " After swapping the n2 value is : "<< n2 <<"\n" ; 
}