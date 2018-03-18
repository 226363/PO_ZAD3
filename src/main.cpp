#include <iostream>
#include "Wektor.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"
using namespace std;

int main()
{
  //double tablica[] = {2,3,4};
  //UkladRownanLiniowych   UklRown;   // To tylko przykladowe definicje zmiennej
  Wektor W1, W2, W;
 cin >> W1;
 cin >>W2;
 W=W1/5;
 cout<<W;
 Wektor tab[]={W,W1,W2};
 Macierz K (tab);
 cout <<endl<<endl;
 cout << K;
 cin >> K;
 cout<<K;
//cout << endl << " Start programu " << endl << endl;
}
