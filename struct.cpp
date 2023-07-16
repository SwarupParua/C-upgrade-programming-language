#include<iostream>
#include<string.h>
using namespace std;
struct emp{
	string name;//8 bytes
	int id;//4bytes
	double salary;//8bytes
};
main(){
	struct emp e;
	e.name="Swarup Parua";
	e.id=148657;
	e.salary=278569;
	cout<<e.name<<endl;
	cout<<e.id<<endl;
	cout<<e.salary<<endl;
	cout<<sizeof(emp);
}
