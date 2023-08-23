#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	cout<<"Enter Any Five Positive Or Negative Numbers In Array :: "<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Negative Elements In Array Are :: "<<endl;
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		cout<<a[i]<<endl;
	}
	return 0;
}
