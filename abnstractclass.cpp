#include<iostream>
#include<conio.h>
using namespace std;

class A{
	public:
		virtual void show()=0;
		void disp()
		{
			cout<<"Hi I am base class";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"Hi I am derive class";
		}
};
main()
{
	A *p; B ob;
	p=&ob;
	p->show();
	p->disp();
}
