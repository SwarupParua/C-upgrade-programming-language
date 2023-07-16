#include<iostream>
#include<typeinfo>
using namespace std;
main()
{
	int a=10;
	double b=3.14;
	char c='A';
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	cout<<typeid(c).name()<<endl;
	
	//implicit typecasting
	double a2=a;
	cout<<a<<endl;
	int b2=b;
	cout<<b2<<endl;
	
	//Explicit typecasting
	double a5=(double)a;
	cout<<a5<<endl;
	int b5=(int)b;
	cout<<b5<<endl;
}
