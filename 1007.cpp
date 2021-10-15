#include <iostream>
using namespace std;
int x;
main()
{
	cin>>x;
	if(x>0)
		{
			cout<<"Liczba jest dodatnia";
		}
	else if(x<0)
		{
			cout<<"liczba jest ujemna";
		}
	else
		{
			cout<<"liczba jest zerem";
		}
	return 0;
}
