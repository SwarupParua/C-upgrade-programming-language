#include<iostream>
using namespace std;
int b=20;	//global variable
main()
{
	int	a;	//local variable
	static int c =30;
	cout<<"Enter a number :";
	cin>>a;
	cout<<"Value of b is : "<<b<<endl;
	cout<<"Value of c is : "<<c;
}
