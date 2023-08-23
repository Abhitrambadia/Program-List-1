#include<iostream>
using namespace std;
int plm(int);
int main()
{
	int n;
	cout<<"Enter Any Number To Check If It Is Palindrome Or Not :: ";
	cin>>n;
	plm(n);
	return 0;
}
int plm(int n)
{
	int temp,r,rev=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(rev==temp)
		 cout<<rev<<" Is A Palindrome Number.";
	else
		 cout<<rev<<" Is Not A Palindrome Number.";
	return 0;
}
