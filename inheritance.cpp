#include<iostream>
using namespace std;

class Father{
	protected:
	string surname="Kushwaha";
};
class son1:Father{
	string name="Akhilesh";
	public:
	void show(){
		cout<<name<<" "<<surname<<endl;
	}
};
class son2:Father{
	string name="Ankush";
	public:
	void disp(){
		cout<<name<<" "<<surname<<endl;
	}
};
main(){
	son1 s1;
	s1.show();
	son2 s2;
	s2.disp();
}
