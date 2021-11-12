#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int zmienna;
	int i=0;
	vector<int>liczby;
	cin>>zmienna;	
	liczby.push_back(zmienna);
	while(zmienna!=0)
	{
		cin>>zmienna;
		liczby.push_back(zmienna);
		i++;
	}
	for(int j=0;j<i;j++)
	{
		if(j%5==0)
		{
			cout<<endl;
			cout<<"		"<<liczby[j];
		}
		else
		{
			cout<<"		"<<liczby[j];
		}
	}
	cout<<endl;
	return 0;
}
