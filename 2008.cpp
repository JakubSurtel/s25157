#include <iostream>
using namespace std;
int a;
int b=1;
int main()
{
    cout<<"Podaj a:";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        b=b*i;
    }
    cout<<b<<endl;
    return 0;
}