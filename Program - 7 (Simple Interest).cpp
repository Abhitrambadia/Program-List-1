#include<iostream>
using namespace std;
int main()
{
	int p,t,r,si;
	cout<<"Enter The Amount :: ";
	cin>>p;
	cout<<"Enter the Rate :: ";
	cin>>r;
	cout<<"Enter The Terms of Year :: ";
	cin>>t;
	si=p*r*t/100;
	cout<<"Simple Interest ="<<si;
	return 0;
}
