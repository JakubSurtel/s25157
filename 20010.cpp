#include<iostream>
using namespace std;
int a;
int i=1;
int b=1;
int main()
{
    cout<<"Podaj a:";
    cin>>a;
    do
    {
        b = b*i;
        i++;
    } while(i<=a);
    cout<<b<<endl;
    return 0;
}