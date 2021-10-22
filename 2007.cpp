
#include <iostream>
using namespace std;
int lim,dziel;
int a=0;
int main()
{
	cin>>lim>>dziel;
	for (int i=1;i<=lim;i++)
	{
		if(i%dziel==0)
		{
			a=a+i;
		}
	}
	cout<<a<<endl;
return 0;
}
