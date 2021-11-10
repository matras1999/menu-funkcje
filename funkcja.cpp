#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
void liniowa()
{
    int a , b ,msc0;
    cout << "Program do obliczania miejsca zerowych funkcji liniowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    msc0 = (-b)/a;

    cout << "Miejsce zerowe jest rowne: " << msc0 << endl;

}
void kwadratowa()
{
    int a , b ,c ,msc1,msc0,delta;
    cout << "Program do obliczania miejsc zerowych funkcji kwadratowej." << endl;
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >>c;
    delta = (b*b)-4*a*c;
    msc0=(-b-sqrt(delta))/2*a;
    msc1=(-b+sqrt(delta))/2*a;
    if(delta<0)
    {
        cout << "Brak miejsc zerowych!";

    }
    if (delta==0)
    {
        cout << "Funkcja ma jedno miejsce zerowe jakim jest: " << -b/2*a << endl;

    }

    else
    {
        cout << "Miejsca zerowe funkcji to: " << msc0 << " ," << msc1;
    }

}
void kanoniczna()
{
    double p,q,a,msc0,msc1;
    cout << "Program do obliczania miejsc zerowych funkcji w postaci kanonicznej."<<endl;
    cout << "Podaj p: " <<  endl; cin >> p;
    cout << "Podaj q: " <<endl; cin >> q;
    cout << "Podaj a: " << endl; cin >>a;
    if((-q/a)<0)
    {
        cout << "Funcja nie ma miejsc zerowych" << endl;
    }
    else
    {
        msc0=p+sqrt(-q/a);
        msc1=p-sqrt(-q/a);
        cout << "Pierwsze miejsce zerowe to: " << msc0 << endl;
        cout << "Drugie miejsce zerowe to: " << msc1<< endl;
    }
}
int main()

{
    int x = 0;
    while(x>3 || x<1)
    {
    cout<<"MENU"<<endl;
    cout<<"1.Funkca liniowa"<<endl;
    cout<<"2.Funkcja kwadratowa"<<endl;
    cout<<"3. Funkcja w postaci kanonicznej" <<endl;
    cout<<"Wybieram : ";
    cin>>x;
    system("cls");
     }

    switch (x)
    {
       case 1:
           liniowa();
            break;
       case 2:
           kwadratowa();
           break;
       case 3:
           kanoniczna();

         break;
           }


    system("PAUSE");
    return EXIT_SUCCESS;




    return 0;
}
