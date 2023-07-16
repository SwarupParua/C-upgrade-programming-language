#include<iostream>
#include<string.h>
using namespace std;
#define PI 3.14
#define Square(r) ((r)*(r))
main(){
	int r;
	cout<<"Enter a radius : ";
	cin>>r;	//r=2
	double area = PI*Square(r);
	cout<<"Area of Circle : "<<area;
	//cout<<PI;
}
