#include "UkladRownanLiniowych.hh"

using namespace std;


UkladRownanLiniowych::UkladRownanLiniowych(Macierz m, Wektor wek){
wspolczynniki=m; x=wek;
}

std::ostream& operator << ( std::ostream                  &Strm,
                            const UkladRownanLiniowych    &UklRown
                          ){

    return Strm;}
