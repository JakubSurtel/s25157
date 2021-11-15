#include <iostream>
using namespace std;

int main()
{
	int n;
	int A[n]={};
	int suma=0;

	cout<<"Ile elemetow chcesz dodac: ";
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"Podaj element nr."<<i<<": ";
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		suma=suma+A[i];
	}
	cout<<"Suma wszystkich elementow wynosi: "<<suma<<endl;
	return 0;
}
