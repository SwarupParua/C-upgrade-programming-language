#include<iostream>
using namespace std;

main()
{
	string signal;
	cout<<"Enter Signal value : ";
	cin>>signal;
	if(signal=="red")
	{
		cout<<"Don't go! plz stop."<<endl;
	}
	if(signal=="green")
	{
		cout<<"The signal is green now! you may go now.";
	}
}
