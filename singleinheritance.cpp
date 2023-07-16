#include<iostream>
using namespace std;
class Base{
	int a,b;
	public:
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void show(){
			cout<<"a : "<<a<<" "<<"b : "<<b<<endl;
		}
};
class Derive:public Base{
	private:
		int m,n;
	public:
		void getdata(){
			cout<<"Enter m : ";
			cin>>m;
			cout<<"Enter n : ";
			cin>>n;
		}
		void display(){
			cout<<"m : "<<m<<" "<<"n : "<<n<<endl;
		}
};

main()
{
	Base obj;
	Derive obj2;
	obj.input();
	obj.show();
	obj2.input();
	obj2.show();
	obj2.getdata();
	obj2.display();
}
