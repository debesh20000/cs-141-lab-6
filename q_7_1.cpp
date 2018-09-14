//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for character
int upperCase(char a){
	char ch;
	cout<<"Enter a character in lowercase: "<< endl; 
	cin>>ch;
	ch=ch-32;// using rule of ASCII code that uppercase code = lowercase code -32 
	cout<<"Entered character in uppercase: "<<ch<<endl;
	return ch;
	}
//main function
int main(){
	char a;
	upperCase(a);
	return 0;
	}

