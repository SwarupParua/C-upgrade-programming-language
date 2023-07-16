/*public---->	1.Inside class
				2.Outside class*/


#include<iostream>
#include<conio.h>
using namespace std;
//class A{
//	public:
//		int a;
//	void show()
//	{
//		a=10;
//		cout<<"Inside class : "<<a<<endl;
//	}
//};

class A{
	public:
		int a;
		void show();
};
void A::show(){
	a=45;
	cout<<"Outside class : "<<a<<endl;
}
main(){
	A obj;
	obj.show();
	obj.a=20;
	cout<<"Outside class : "<<obj.a;
}
