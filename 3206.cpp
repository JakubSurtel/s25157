#include<iostream>
using namespace std;

void funkcja(int a,int b)
{
    a=a*2;
    b=b+100;
    cout<<a<<endl;
    cout<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Podaj x: ";
    cin>>x;
    cout<<"Podaj y: ";
    cin>>y;
    funkcja(x,y);
    return 0;
}