#include<iostream>
using namespace std;
int a,b,c;
int main()
{
	cin>>a>>b>>c;
	while(a<b)
	{
		if(a%c==0)
		{
			cout<<a++<<endl;
		}
		else
		{
			a++;
		}
	}
return 0;
}
