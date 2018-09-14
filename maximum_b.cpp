//include library
#include <iostream>
using namespace std;
//function to take two parameters and finds the maximum
void maximum (int& a, int& b){
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
	int maximum;
	if(a>b){
		cout<< "the maximum is "<<a<<endl;
		}
	else
	cout<< "the maximum is "<<b<<endl;
		}
// main function
int main(){
	int a,b;
	maximum(a,b);
	return 0;
	}
