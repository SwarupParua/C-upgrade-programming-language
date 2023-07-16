#include<iostream>
using namespace std;

main(){
	int a[5];
	cout<<"Enter array element : ";
	for(int i=0;i<5;++i){
		cin>>a[i];
	}
	for(int i=4;i>=0;--i){
		cout<<a[i]<<endl;
	}
}
