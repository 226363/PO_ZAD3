#include "UkladRownanLiniowych.hh"

using namespace std;

UkladRownanLiniowych::UkladRownanLiniowych(Macierz m, Wektor wek) {
  wspolczynniki = m;
  x = wek;
}
UkladRownanLiniowych::UkladRownanLiniowych(){
  Macierz wspolczynniki;
  Wektor x;
}
std::ostream &operator<<(std::ostream &Strm,
                         const UkladRownanLiniowych &UklRown) {
  Strm << UklRown.wspolczynniki << UklRown.x;
  return Strm;
}
std::istream &operator>>(std::istream &Strm, UkladRownanLiniowych &UklRown){
  Strm>>UklRown.wspolczynniki>>UklRown.x;
  return Strm;
}
