#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"
using namespace std;

int main()
{
//cout << endl << " Start programu " << endl << endl;
UkladRownanLiniowych ikl;
Macierz wynik;
cin>>ikl;
cout<<ikl;
wynik=ikl.getMacierzUklad().Wyznacznik();
cout<<wynik;
return 0;
}
