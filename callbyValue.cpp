#include<iostream>
#include<string.h>
using namespace std;
void changeValue(int num){
	num=num+10;
	cout<<num<<endl;
}
main(){
	int num=100;
	cout<<num<<endl;
	changeValue(num);
	cout<<num;
}
