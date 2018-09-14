//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for first and last numbers
int sumofoddnumbers(int a, int b){
	cout<<"enter the smaller odd integer"<<endl;
	cin>>a;
	cout<<"enter the larger odd integer"<<endl;
	cin>>b;
	int sum;
	for (int i=a+1; i<b ; i++) { //using loop to find sum
		if(i%2 !=0){
			sum=sum+i;
			}
		}
	cout<<"the sum is "<< sum <<endl;
	return sum;
	}
//main function
int main(){
	int a,b;
	sumofoddnumbers(a,b);
	return 0;
	}
