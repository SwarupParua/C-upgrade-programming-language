/*protected---->1.base class
				2.derive class*/

#include<iostream>
#include<conio.h>
using namespace std;
class Base{
	protected:
		int a,b;
	public:
		void show(){
			a=10;
			b=20;
			cout<<a<<" "<<b<<endl;
		}
};
class Derive:public Base
{
	public:
		void disp()
		{
			a=30;
			b=40;
			cout<<a<<" "<<b<<endl;
		}
};
main()
{
	Derive obj;
	obj.disp();
	obj.show();
}
