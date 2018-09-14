//include library
#include <iostream>
using namespace std;
//function that obtains data from user and returns a value for unitcst, units and taxRt
void func1(int& u, int& c, int& r)
	{
	cout <<"enter the value for units"<<endl;
	cin>> u;
	cout <<"enter the value for unit cost"<<endl;
	cin>>c;
	cout <<"enter the value for tax rate"<<endl;
	cin>>r;
	}
//function to recieve values for u,c,r and calculate sales tax and total due
void func2(int u, int c, int r, int& st, int& totdue)
	{
	//calculate sales tax(st) and total due(totdue)
	st =u*c*r;
	totdue = st + (c*u);
	}
void func3(int u, int c, int r, int st, int totdue)
	{
	cout <<"units "<<u<<endl;
	cout <<"unit costs "<<c<<endl;
	cout <<"tax rate "<<r<<endl;
	cout <<"sales tax "<<st<<endl;
	cout <<"total due is "<<totdue<<endl;
	}
//main function
int main()
	{
	int u,c,r,st,totdue;
	func1(u,c,r);
	func2(u,c,r,st,totdue);
	func3(u,c,r,st,totdue);
	cout<<"bye"<<endl;
	return 0;
	}
