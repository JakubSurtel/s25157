#include <iostream>
using namespace std;
int x,y;
main()
{
	cin>>x>>y;
	if(x==y)
		{
			cout<<x<<"=="<<y;
		}
	else if(x>y)
		{
			cout<<x<<">"<<y;
		}
	else
		{
			cout<<x<<"<"<<y;
		}
	return 0;
}
