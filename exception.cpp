#include<iostream>
#include<string.h>
#include<stdexcept>
using namespace std;

main(){
	double bal = 1000.0;
	try{
		double amt;
		//deposit
		cout<<"Enter Deposit Amount : ";
		cin>>amt;
		if(amt<=0){
			throw invalid_argument("Invalid Deposit Amount :");
		}
		bal=bal+amt;
		cout<<"Available Amount : "<<bal<<endl;
		//Withdrawl		
		cout<<"Enter Withdrawl Amount : ";
		cin>>amt;
		if(amt<=0){
			throw invalid_argument("Invalid Withdrawl Amount :");
		}
		if(amt>bal){
			throw runtime_error("Insufficient Fund:");
		}
		bal=bal-amt;
		cout<<"Available Amount : "<<bal;
	}
	catch(exception& e){
		cout<<e.what();
	}
}
