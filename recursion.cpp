#include<iostream>
#include<string.h>
// num=5 ---->5!=5*4*3*2*1=120 
using namespace std;
int fact(int num){
	if(num==0){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}
main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	int r=fact(num);
	cout<<"Factorial of "<<num<<" is "<<r;
}
