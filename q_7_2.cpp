//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for character
int lowerCase(char a){
	char ch;
	cout<<"Enter a character in lowercase: "<< endl; 
	cin>>ch;
	ch=ch-32;// using rule of ASCII code that lowercase code = uppercase code +32 
	cout<<"Entered character in uppercase: "<<ch<<endl;
	return ch;
	}
//main function
int main(){
	char a;
	lowerCase(a);
	return 0;
	}
