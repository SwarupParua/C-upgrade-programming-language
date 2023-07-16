#include<iostream>
#include<string.h>
using namespace std;
void changeValue(int *p){	//*p=123456 =100
	*p=*p+100;	//*p=100+100=200
	cout<<"Pointer value : "<<*p<<endl;	//*p=200
}
main(){
	int num;
	cout<<"Enter value : ";
	cin>>num;	//num=100
	cout<<"Original value : "<<num<<endl;	//num=100
	changeValue(&num);
	cout<<"New Value : "<<num<<endl;	//num=200
}
