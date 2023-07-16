#include<iostream>
using namespace std;
namespace first{
	void show(){
		cout<<"Swarup";
	}
}
namespace second{
	void show(){
		cout<<"Kuntal";
	}
}
main()
{
	second::show();
}
