/* Write a program to calculate the sum of digits of 3 digit number .*/

#include<iostream>
using namespace std;

int main()
{
    int n,first,second,third,sum;
    cout<<"Enter a three digit number :";
    cin>>n;
    first=n/100;
    n=n%100;
    second=n/10;
    third=n%10;
    sum=first+second+third;
    cout<<"Sum of three digits is :"<<sum<<endl;
    return 0;
}