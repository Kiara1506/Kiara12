// Programa: Suma.cpp
// Autor: Kiara Casanova
// Fecha: 2023-09-14
// Descricion: Suma de dos numeros
#include<iostream>
using namespace std;
float x,y,z;
int ingreso()
{
	cout<<"ingrese x :";cin>>x;
	cout<<"ingrese y :";cin>>y;
	return(0);
}
int salida()
{
	cout<<"la suma de"<<x<<"+"<<y<<"="<<z<<endl;
	return(0);
}
int main()
{
	ingreso();
	z=x+y;
	salida();
	return(0);
}
