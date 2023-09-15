//titulo del programa:resta y comparacion
//nombre del programa: saldo.cpp
//autor:Kiara Casanova
//fecha creacion:2023-09-11
//descriptor: resta de dos numeros y presenta el saldo
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cin>>a>>b;
	c=a-b;
		if(c<0)
		{
			cout<<"Negativo";
		} else{
			cout<<"Positivo";
		}
	return 0
		;
}
