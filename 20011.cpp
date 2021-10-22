#include<iostream>
using namespace std;
int x,y;
int main()
{
    cout<<"Podaj szerokosc:";
    cin>>x;
    cout<<"Podaj wysokosc:";
    cin>>y;
    for (int i = 0; i < y; i++)
    {
        for (int i = 0; i < x; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}