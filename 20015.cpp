#include <iostream>
using namespace std;
int x,y;
int main()
{
	
	cout<<"Podaj szerokosc(x):";
	cin>>x;
	cout<<"Podaj wysokosc(y):";
	cin>>y;
	if(x<3 || y<3)
	{
		cout<<"Podana wartosc musi byc wieksza od 3 !"<<endl;
	}
	else
	{
	for(int i=0;i<y;i++)
	{
		if(i==0 || i==y-1)
		{
			for(int j=0;j<x;j++)
			{
			cout<<"*";
			}
		}
		else
		{	for(int j=0;j<x;j++)
			{
				if(j==0 || j==x-1)
				{
					cout<<"*";
				}
				else
				{
					cout<<' ';
				}
			}
		}
		cout<<endl;
	}
	}
	return 0;
}
