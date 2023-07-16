#include<iostream>
#include<string.h>
using namespace std;

main(){
	int a=10;
	int *p=&a;	//pointer
	int **q=&p;	//poointer to pointer
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	
	cout<<q<<endl;	//address of p
	cout<<*q<<endl;	//address of a
	cout<<**q<<endl;	//value of a
	cout<<&q;	//address of q
}
