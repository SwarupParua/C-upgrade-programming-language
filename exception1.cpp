#include<iostream>
#include<string.h>
#include<stdexcept>
using namespace std;
 
main(){
	int a,b;
	cout<<"Enter the value of a is : ";
	cin>>a;
	cout<<"Enter the value of b is : ";
	cin>>b;
	try{
 		if(b==0){
 			throw runtime_error("Inavalid division");
		}
		int c=a/b;
		cout<<"Result is : "<<c<<endl;
	}
	catch(exception& e){
		cout<<e.what();
	}
}
