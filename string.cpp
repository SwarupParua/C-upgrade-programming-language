#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str[]="Swarup";
	char str2[]="Swarup";
	//cout<<strlen(str)<<endl;
	//cout<<strrev(str)<<endl;
	//strcpy(str2,str);
	//strcat(str,str2);
	int value = strcmp(str,str2);
	if(value==0){
		cout<<"String r equal";
	}
	else{
		cout<<"String are not equal";
	}
	cout<<value;
}
