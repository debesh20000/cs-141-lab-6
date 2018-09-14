//include library
#include <iostream>
using namespace std;
//function to take two parameters and finds the minimum
void minimum (int& a, int& b){
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
	int minimum;
	if(a>b){
		cout<< "the minimum is "<<b<<endl;
		}
	else
	cout<< "the minimum is "<<a<<endl;
		}
// main function
int main(){
	int a,b;
	minimum(a,b);
	return 0;
	}
