#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	int a,b;
	public:
	void input()
	{
		cout<<"Enter two numbers : ";
		cin>>a>>b;
	}
	friend class B;
};
class B
{
	int c;
	public:
	void add(A obj)
	{
		c=obj.a+obj.b;
		cout<<"Add : "<<c;
	}
};

main()
{
	A mn; B obj;
	mn.input();
	obj.add(mn);
}
