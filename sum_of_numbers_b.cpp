//include library
#include <iostream>
using namespace std;
//function to ask user and sum the numbers
void sum (int& a, int& b){
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
	int sum;
	sum=a+b;
	cout<<"the sum is "<< sum <<endl;
	}
// main function
int main(){
	int a,b;
	sum(a,b);
	return 0;
	}
