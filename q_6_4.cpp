//include library
#include <iostream>
#include <math.h>
using namespace std;
//creating user defined function to ask for first and last numbers
int sumofsquareofevennumbers(int a, int b){
	cout<<"enter the smaller odd integer"<<endl;
	cin>>a;
	cout<<"enter the larger odd integer"<<endl;
	cin>>b;
	int sum;
	int i=a+1;
	while (i<b ) { //using while loop to find sum
		if(i%2 ==0){
			sum=sum+(i*i);
			
			}
		i++;
		}
	cout<<"the sum is "<< sum <<endl;
	return sum;
	}
//main function
int main(){
	int a,b;
	sumofsquareofevennumbers(a,b);
	return 0;
	}
