#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

char znak;
int i, j, k, kod;
double a, b, c, pole, obwod, d;
string figura[3] = {"Kwadrat", "Trojkat prostokatny", "Prostokat"};
int wybor;

double kwadrat(double a)
{
    double pole(a*a);
    double obwod(4*a);
    cout << "Pole: " << pole << endl;
    cout << "Obwod: " << obwod << endl;
}

double trojkat(double a, double b)
{
    c = a*a + b*b;
    c = sqrt(c);
    double pole(a*b/2);
    double obwod(a+b+c);
    cout << "Pole: " << pole << endl;
    cout << "Obwod: " << obwod << endl;
}
double prostokat(double a, double b)
{
    double pole(a*b);
    double obwod(2*a + 2*b);
    cout << "Pole: " << pole << endl;
    cout << "Obwod: " << obwod << endl;
}

int main()
{
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    system("cls");
    for(k=0; k<3; k++)
    {
        cout << k+1 << ". "<< figura[k] << endl;
    }
    cin >> wybor;
    system("cls");
    if(wybor==1)
    {
        d = kwadrat(a);
        for(i=0; i<a; i++)
        {
            for(j=0; j<a; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(wybor==2)
    {
        d = trojkat(a, b);
        for(i=1; i<=a; i++)
        {
            for(j=1; j<=i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    else if(wybor==3)
    {
        do
        {
            d = prostokat(a, b);
            for(i=0; i<b; i++)
            {
                for(j=0; j<a; j++)
                {
                    cout << "* ";
                }
                cout << endl;
            }
            znak = getch();
            int kod = znak;
            getch();
            system("cls");
        }while(kod!=75);
    }
    else
    {
        system("cls");
        cout << "nie";
    }
}
