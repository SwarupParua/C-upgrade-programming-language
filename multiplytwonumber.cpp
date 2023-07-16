#include<iostream>
using namespace std;
class multi{
	int a,b,c;
	public:
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void process(){
			c=a*b;
		}
		void show(){
			cout<<"Multiplication : "<<c;
		}
};
main(){
	multi obj;
	obj.input();
	obj.process();
	obj.show();
}
