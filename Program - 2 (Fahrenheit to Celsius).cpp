#include<iostream>
using namespace std;
int main()
{
	float f,c;
	cout<<"Enter The Temperature In Fahrenheit :: ";
	cin>>f;
	c=((f-32)*5)/9;
	cout<<"Temperature In Celsius :: "<<c;
	return 0;
}
