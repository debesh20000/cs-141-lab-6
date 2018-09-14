//include library
#include <iostream>
using namespace std;
//function to take two parameters and equations for sum, maximum and minimum
void sum (int& a, int& b){//enter the number and add them
	cout<<"enter the two numbers"<<endl;
	cin>>a;
	cin>>b;
	int sum;
	sum=a+b;
	cout<<"the sum is "<< sum <<endl;
	}
void maximum (int a, int b){//enter the number and find their maximum
	cout<<"enter the two numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>b){
		cout<< "the maximum is "<<a<<endl;
		}
	else
	cout<< "the maximum is "<<b<<endl;
	}
void minimum (int a, int b){//enter the number and find their minimum
	cout<<"enter the two numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>b){
		cout<< "the minimum is "<<b<<endl;
		}
	else
	cout<< "the minimum is "<<a<<endl;
	}
// main function
int main(){
	int a,b,c;
	cout<<" please choose 1 for sum, 2 for finding maximum, 3 for finding minimum"<<endl; 
	cin>>c;
	if(c==1){
		sum (a,b);
		}
	else if(c==2){
		maximum (a,b);
		}
	else
	minimum (a,b);
	
return 0;
}
