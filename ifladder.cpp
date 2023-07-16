#include<iostream>
using namespace std;

main()
{
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	if(age>=18){
		if(age>=18 && age<=59){
			cout<<"Eligible for Organizational work.";
		}
		else{
			cout<<"Age is not satisfactory as per the Organizational work.";
		}
	}
	else{
		cout<<"Considered as minor: U can't force the work.";
	}
}
