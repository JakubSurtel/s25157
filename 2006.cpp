#include <iostream>
using namespace std;
int x,y,a;
int main()
{
	cout<<"Ile liczb chesz porównać?:";
	cin>>a;
	for(int i=0;i<a;i++)
	{
	cin>>x>>y;
	if(x==y)
		{
			cout<<x<<"=="<<y<<endl;
		}
	else if(x>y)
		{
			cout<<x<<">"<<y<<endl;
		}
	else
		{
			cout<<x<<"<"<<y<<endl;
		}
	}
	return 0;
}
