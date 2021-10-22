#include<iostream>
using namespace std;
int a;
int b=1;
int i=1;
int main()
{
    cout<<"Podaj a:";
    cin>>a;
    while (i<=a)
    {
        b = b*i;
        i++;
    }
    cout<<b<<endl;
    return 0;
}