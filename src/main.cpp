#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"



using namespace std;

/*
 * Tu definiujemy pozostale funkcje.
 * Lepiej jednak stworzyc dodatkowy modul
 * i tam je umiescic. Ten przyklad pokazuje
 * jedynie absolutne minimum.
 */


int main()
{
  //double tablica[] = {2,3,4};
  //UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
  Wektor W1, W2, W;
 cin >> W1;
 cout << W1<<endl;
 cin >>W2;
 cout << W2<<endl;
 W=W1/5;
 cout << W1/5<<endl;
 cout << W;
  //cout << endl << " Start programu " << endl << endl;
}
