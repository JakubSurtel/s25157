#include<iostream>
using namespace std;
int x;
int main()
{
    cout<<"Podaj x:";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}