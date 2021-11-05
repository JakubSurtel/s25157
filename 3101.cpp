#include <iostream>
using namespace std;
const int m=100;
int tab[m];
int main()
{
	int n;
	cout<<"Podaj n:";
	cin>>n;
	if(n>100)
	{
		cout<<"Podaj liczbe mniejsza od 100";
	}
	else
	{
	int tab[n]={ };
	for(int i=0;i<n;i++)
	{
		cout<<tab[i];
	}
		cout<<endl;
	}
return 0;
}
