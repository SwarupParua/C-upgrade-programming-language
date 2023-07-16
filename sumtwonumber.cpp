#include<iostream>
using namespace std;
class add{
	int a,b,c;
	public:
		void input(){
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b ;
		}
		void sum(){
			c=a+b;
		}
		void show(){
			cout<<"Sum : "<<c;
		}
};
main(){
	add obj;
	
	obj.input();
	obj.sum();
	obj.show();
}
