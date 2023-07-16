#include<iostream>
#include<conio.h>
using namespace std;

void fun()
{
	class A
	{
		private:
			int a,b,c;
		public:
			void show()
			{
				cout<<"Enter the value of a is : ";
				cin>>a;
				cout<<"Enter the value of b is : ";
				cin>>b;
				c=a+b;
				cout<<"Sum of a and b is : "<<c;
			}
	};
	A obj;
	obj.show();
}
main()
{
	fun();
}
