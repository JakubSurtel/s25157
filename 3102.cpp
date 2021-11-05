#include <iostream>
using namespace std;

int main()
{
int n;
int A[n]={};
int start;
	cout<<"Podaj n:";
	cin>>n;
	cout<<"Podaj start:";
	cin>>start;

	for(int i=0;i<n;i++)
	{
		A[i]=start;
		cout<<A[i]<<endl;
		start=start+1;
	}
return 0;
}
