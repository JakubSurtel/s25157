// V=1/3pi*H(r*r+rR+R*R) (r<R)    M_PI - stała pi
// PROGRAM OBLICZAJĄCY OBJĘTOŚĆ STOŻKA ŚCIĘTEGO !
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int r,R,H;
	float V;
	int exit;
	do
	{
		cout<<"Podaj promien podstawy(r): ";
		cin>>r;
		cout<<"Podaj promien wierzchołka(R): ";
		cin>>R;
		cout<<"Podaj wysokosc(H): ";
		cin>>H;
		V = M_PI*1/3*H*(r*r+r*R+R*R);
		cout<<"Objetosc wynosi :"<<V<<endl;
		cout<<"Czy chcesz wyjsc 1/0: ";
		cin>>exit;
	}
	while(exit==0);
return 0;
}
