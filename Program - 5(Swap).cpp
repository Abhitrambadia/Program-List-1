#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Value For a :: ";
	cin>>a;
	cout<<"Enter Value For b :: ";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"Value Of a After Swapping Is :: "<<a<<endl;
	cout<<"Value Of b After Swapping Is :: "<<b<<endl;
	return 0;
}
