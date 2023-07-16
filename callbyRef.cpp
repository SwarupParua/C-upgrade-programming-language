#include<iostream>
#include<string.h>
using namespace std;
main(){
	int a=100;
	cout<<a<<endl;
	int &ref=a;
	cout<<ref<<endl;
	ref=ref+100;
	cout<<a<<endl;
}
