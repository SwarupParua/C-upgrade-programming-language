#include<iostream>
using namespace std;

main()
{
	int amt,tax;
	cout<<"Enter Amount : ";
	cin>>amt;
	if(amt<=100000){
		cout<<"No need to pay tax";
	}
	else if(amt>100000 && amt<=500000){
		tax=amt*10/100;
		cout<<"Tax Amount : "<<tax;
	}
	else if(amt>500000 && amt<=1000000){
		tax=amt*20/100;
		cout<<"Tax Amount : "<<tax;
	}
	else{
		tax=amt*40/100;
		cout<<"Tax Amount : "<<tax;
	}
}
