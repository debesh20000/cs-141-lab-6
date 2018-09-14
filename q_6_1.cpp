//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for first and last numbers
int sumofevennumbers(int a, int b){
	cout<<"enter the smaller even integer"<<endl;
	cin>>a;
	cout<<"enter the larger even integer"<<endl;
	cin>>b;
	int sum;
	for (int i=a+1; i<b ; i++) { //using loop to find sum
		if(i%2==0){
			sum=sum+i;
			}
		}
	cout<<"the sum is "<< sum <<endl;
	return sum;
	}
//main function
int main(){
	int a,b;
	sumofevennumbers(a,b);
	return 0;
	}
