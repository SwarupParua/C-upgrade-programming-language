#include<iostream>
#include<conio.h>
using namespace std;
class A{
	public:
		class B{	//member variable of class A
			int a,b;
			public:
			void input()	//member function of class B
			{
				cout<<"Enter two values : ";
				cin>>a>>b;
			}
			void show()
			{
				cout<<a<<" "<<b<<endl;
			}
		};
};
main()
{
	A::B obj;
	obj.input();
	obj.show();
}
