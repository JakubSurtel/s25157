#include<iostream>
using namespace std;

void max2(int a, int b)
{
    cout<<"Podaj pierwsza liczbe:";
    cin>>a;
    cout<<"Podaj druga liczbe:";
    cin>>b;

    if(a>b)
    {
        cout<<a;
    }
    else
    {
        cout<<b;
    }
}

void max3(int a,int b,int c)
{
    cout<<"Podaj pierwsza liczbe: ";
    cin>>a;
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    cout<<"Podaj trzecia liczbe: ";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<a;
    }
    else if(b>a && b>c)
    {
        cout<<b;
    }
    else
    {
        cout<<c;
    }
}



int main()
{
    int x,y,z;
    cout<<"FUNKCJA NR 1"<<endl;
    max2(x,y);
    cout<<"FUNKCJA NR 2"<<endl;
    max3(x,y,z);
    return 0;
}