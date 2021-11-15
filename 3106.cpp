#include<iostream>
using namespace std;

int main()
{
	int n;
	int A[n]={};
	int x;

	cout<<"Podaj rozmiar tablicy: ";
	cin>>n;
	cout<<"Podaj liczbe ktora chcesz znalezc w tablicy: ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		A[i]=rand() % 100;
	}

	for(int i=0;i<n;i++)
	{
		if(A[i]=x)
		{
			cout<<"Znaleziono liczbe pod indeksem nr."<<i;
		}
		else
		{
			cout<<"-1";
		}
	}
	return 0;
}
