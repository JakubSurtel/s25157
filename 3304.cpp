#include<iostream>
using namespace std;

int main()
{
	float a;
	float tab[100]={};
	float x;
	float suma=0;
	float srednia;
	
	cout<<"podaj ilosc elementow: ";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cout<<"podaj "<<i+1<<" element: ";
		cin>>x;
		tab[i]=x;
	}
	for(int i=0;i<a;i++)
	{
		suma=tab[i]+suma;
	}
	//cout<<suma;
	srednia=suma/a;
	cout<<"Srednia podanych liczb wynosi: "<<srednia<<endl;
	return 0;
}
