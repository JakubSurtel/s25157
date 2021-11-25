#include <iostream>
using namespace std;
int x=0;
char granica1()
{
	return 73;
}

char granica2()
{
	return 45;
}

void granica3()
{
	for(int i=0;i<3;i++)
	{
		cout<<granica2();
	}
}

void func()
{
	for(int i=0;i<3;i++)
	{
	        cout<<"*";
	}
}
void func2()
{
	for(int i=0;i<3;i++)
	{
		cout<<" ";
	}
}
void linia(int a)
{
	while(x<6)
	{
	        if(a==0)
	        {
	                 granica3();
	                 x++;
	                linia(0);
	        } 
	        if(a==1)
	        {
	                func();
	                x++;
	                linia(2);
	        }
	        if(a==2)
	        {
	                func2();
	                x++;
	                linia(1);
	        }
	}
}
int main()
{
	for(int i=0;i<10;i++)
	{
	        if(i==0 || i==9)
	        {
		cout<<granica2();
		linia(0);
		cout<<granica2();
		cout<<endl;
		x=0;
		}
	        if(i==1 || i==2 || i==5 || i==6)
		{
		cout<<granica1();
		linia(1);
		cout<<granica1();
		cout<<endl;
		x=0;
		}
	        if(i==3 || i==4 || i==7 || i==8)
		{
		cout<<granica1();
		linia(2);
		cout<<granica1();
		cout<<endl;
		x=0;
		}
	}
	return 0;
}