//include library
#include <iostream>
using namespace std;
//function to take two parameters and returns the sum
int sum (int a, int b){
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
	int sum;
	sum=a+b;
	cout<<"the sum is "<< sum <<endl;
	return sum;
	}
// main function
int main(){
	int a,b;
	sum(a,b);
	return 0;
	}
