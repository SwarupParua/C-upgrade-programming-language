/* Design a calculator to perform basic arithmatic operation(+,*,-,/)*/

#include<iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<<"Enter the value of n1 is :";
    cin>>n1;
    cout<<"Enter the value of n2 is :";
    cin>>n2;
    cout<<"Sum ="<<n1+n2<<"\n";
    cout<<"Difference ="<<n1-n2<<"\n";
    cout<<"Multiplication ="<<n1*n2<<"\n";
    cout<<"Division ="<<n1/n2<<endl;
    return 0;
    
}