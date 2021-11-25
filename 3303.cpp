#include<iostream>
#include<math.h> //M_PI - liczba pi
using namespace std;

int main()
{
    int exit;
    int wybor;
    int a,b,h,r;
    float pole;
    do
    {
        cout<<"Pole jakiej figury chcesz obliczyc? 1-Trojkat 2-Prostokat 3-Kolo 4-Trapez 5-Szescian 6-WYJSCIE :";
        cin>>wybor;
        switch (wybor)
        {
        case 1:
            cout<<"Podaj a: ";
            cin>>a;
            cout<<"Podaj h:";
            cin>>h;
            pole=a*h/2;
            cout<<pole<<endl;
            break;
        case 2:
            cout<<"Podaj a:";
            cin>>a;
            cout<<"Podaj b:";
            cin>>b;
            pole=a*b;
            cout<<pole<<endl;
            break;
        case 3:
            cout<<"Podaj r: ";
            cin>>r;
            pole=M_PI*r*r;
            cout<<pole<<endl;
            break;
        case 4:
            cout<<"Podaj a: ";
            cin>>a;
            cout<<"Podaj b: ";
            cin>>b;
            cout<<"Podaj h: ";
            cin>>h;
            pole=(a+b)*h/2;
            cout<<pole<<endl;
            break;
        case 5:
            cout<<"Podaj a: ";
            cin>>a;
            pole=6*((a*a)^(1/2)/4);
            cout<<pole<<endl;
            break;
        case 6:
            break;
        }
        cout<<"Czy chcesz kontynuować?(0/1): ";
        cin>>exit;
    } while (exit==1);
    
    return 0;
}