#include<iostream>
using namespace std;
int arms(int);
int main()
{
	int n;
	cout<<"Enter Any Number To Check If It Is Armstrong Or Not :: ";
	cin>>n;
	arms(n);
	return 0;
}
int arms(int n)
{
	int r,temp,sum=0;
	temp=n;
	while(temp>0)
	{
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if(n==sum)
		cout<<n<<" Is An Armstrong Number :)";
	else
		cout<<n<<" Is Not An Armstrong Number :(";
	return 0;
}
