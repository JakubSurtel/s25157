#include<iostream>
using namespace std;
int x;
int main()
{
    cout<<"Podaj x:";
    cin>>x;
    for(int i=x;i>0;i--)
    {
        for(int i=x;i>0;i--)
        {
            cout<<"*";
        }
        cout<<endl;
        x--;
    }
    return 0;
}