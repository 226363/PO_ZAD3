#include "UkladRownanLiniowych.hh"

using namespace std;

UkladRownanLiniowych::UkladRownanLiniowych(Macierz m, Wektor wek) {
  wspolczynniki = m;
  x = wek;
}
UkladRownanLiniowych::UkladRownanLiniowych() {
  Macierz wspolczynniki;
  Wektor x;
}
std::ostream &operator<<(std::ostream &Strm,
                         const UkladRownanLiniowych &UklRown) {
  Strm << UklRown.wspolczynniki << UklRown.x;
  return Strm;
}
std::istream &operator>>(std::istream &Strm, UkladRownanLiniowych &UklRown) {
  Strm >> UklRown.wspolczynniki >> UklRown.x;
  return Strm;
}
Wektor UkladRownanLiniowych::Rozwiazanie() {
  Macierz a = wspolczynniki.Wyznacznik();
  Wektor rozwiazanie;
  rozwiazanie[0] = x[0] / a[0][0];
  rozwiazanie[1] = (x[1] - rozwiazanie[0] * a[0][1]) / a[1][1];
  rozwiazanie[2] =
      (x[2] - rozwiazanie[0] * a[0][2] - rozwiazanie[1] * a[1][2]) / a[2][2];
  return rozwiazanie;
}
