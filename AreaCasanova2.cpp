#include<iostream>
using namespace std;
#define pi 31416
float AreaCasanova(float);
int main()
{
	float a,r;
	cout<<"Ingrese el radio:";
	cin>>r;
	a=AreaCasanova(r);
	cout<<"El area es:";
	cout<<a;
	return(0);
}
float AreaCasanova(float x)
{
	return pi*x*x;
}
