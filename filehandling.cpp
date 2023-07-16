#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

main(){
	ofstream onFile;string str;
	onFile.open("C:\\Users\\Swarup Parua\\OneDrive\\Desktop.txt");
	cout<<"File Created sucessfully";
	onFile.close();
}
