//include library
#include <iostream>
using namespace std;
//function to take two parameters and returns the minimum
int minimum (int a, int b){
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
	if(a>b){
		cout<< "the minimum is "<<b<<endl;
		}
	else
	cout<< "the minimum is "<<a<<endl;
	return minimum;
	}
// main function
int main(){
	int a,b;
	minimum(a,b);
	return 0;
	}
