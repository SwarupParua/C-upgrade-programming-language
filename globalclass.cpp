#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	protected:
	int a,b;
	public:
		void input()
		{
			cout<<"Enter the value of a is : ";
			cin>>a;
			cout<<"Enter the value of b is : ";
			cin>>b;
		}
		void show()
		{
			cout<<a<<" "<<b<<endl;
		}
};
class B:public A
{
	public:
		void disp()
		{
			cout<<a<<" "<<b<<endl;
		}
};
main()
{
	//A obj;
	B obj2;
	obj2.input();
	obj2.show();
	obj2.disp();
}
