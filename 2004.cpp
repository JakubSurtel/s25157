#include<iostream>
using namespace std;
int a;
int main()
{
	cin >>a;
	if(a==2 || a==3 || a==5 || a==7)
		{
			cout<<"Jest liczbą pierwszą"<<endl;
		}
	else if(a%2==0 || a%3==0 || a%5==0 || a%7==0 || a==1 || a==0)
		{
			cout<<"Nie jest liczbą pierwszą"<<endl;
		}
	else
		{
			cout<<"Jest liczbą pierwszą"<<endl;
		}
return 0;
}

