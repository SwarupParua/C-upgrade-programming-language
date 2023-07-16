#include<iostream>
using namespace std;

main()
{
	string weather;
	cout<<"Enter the weather condition : ";
	cin>>weather;
	if(weather=="raining")
	{
		cout<<"Need an umbrella to go out.";
	}
	else
	{
		cout<<"No Need Umbrella! U may go.";
	}
}
