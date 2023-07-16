#include<iostream>
using namespace std;
main()
{
	char value;
	int num1,num2;
	cout<<"Enter First number : ";
	cin>>num1;
	cout<<"What you want : ";
	cin>>value;
	cout<<"Enter Second number : ";
	cin>>num2;
	switch(value){
		case '+': cout<<"Addition : "<<num1+num2;
		break;
		case '-': cout<<"Subtraction : "<<num1-num2;
		break;
		case '*': cout<<"Multiplication : "<<num1*num2;
		break;
		case '/': cout<<"Division : "<<num1/num2;
		break;
		case '%': cout<<"Modulation : "<<num1%num2;
		break;
		default: cout<<"Invalid choice"; 
	}
}
