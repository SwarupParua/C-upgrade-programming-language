#include<iostream>
using namespace std;
main()
{
	int pwd = 1248;
	int myPwd;
	cout<<"Enter your password : ";
	cin>>myPwd;
	
	while(pwd>0)
	{
		if(pwd!=myPwd)
		{
			cout<<"Enter your password : ";
			cin>>myPwd;
		}
		else
		{
			cout<<"Unlock";
			break;
		}
	}
}
