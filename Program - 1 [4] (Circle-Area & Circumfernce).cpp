#include<iostream>
using namespace std;
int main()
{
	int r,dia;
	float circum,area;
	cout<<"Enter The Radius Of Circle :: ";
	cin>>r;
	dia=2*r;
	circum=2*3.14*r;
	area=2*r*r;
	cout<<"Diameter Of The Circle Will Be      :: "<<dia<<endl;
	cout<<"Circumference Of The Circle Will Be :: "<<circum<<endl;
	cout<<"Area Of The Circle Will Be          :: "<<area<<endl;
	return 0;
}
