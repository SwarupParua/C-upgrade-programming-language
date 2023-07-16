#include<iostream>
#include<string.h>
using namespace std;
union emp{
	int eid;	//4 bytes
	double sal;	//8 bytes
	char ch;	//1 byte
};
main(){
	union emp e;
	e.eid=13654;
	cout<<e.eid<<endl;
	e.sal=43265;
	e.ch='A';
	cout<<e.sal<<endl<<e.ch;
}
