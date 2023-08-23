#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,k=0;
	cout<<"Enter Any Number To Check If It Is Prime Or Not :: ";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"Number Is Not Prime";
			k++;
			break;
		}
	}
	if(k==0)
	cout<<"Number Is Prime.";
	return 0;
}
