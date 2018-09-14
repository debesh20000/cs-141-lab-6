//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for character
void lowerCase(char& ch){
	cout<<"Enter a character "<< endl; 
	cin>>ch;
	ch=ch+32;// using rule of ASCII code that lowercase code = uppercase code +32 
	cout<<"Entered character in lowercase: "<<ch<<endl;
	}
void upperCase(char ch){
	cout<<"Enter a character "<< endl; 
	cin>>ch;
	ch=ch-32;// using rule of ASCII code that uppercase code = lowercase code -32 
	cout<<"Entered character in uppercase: "<<ch<<endl;
	}
int main(){
	char ch;
	if (ch<97){
		lowerCase(ch);
		}
	else{
		upperCase(ch);
		}
	return 0;
	}
