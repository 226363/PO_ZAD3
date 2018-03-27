#include "Macierz.hh"
#include "rozmiar.h"
using namespace std;

Macierz::Macierz() { mac = new Wektor[ROZMIAR]; }
Macierz::Macierz(Wektor *data) {
  mac = new Wektor[ROZMIAR];
  for (int i = 0; i < ROZMIAR; i++) {
    mac[i] = data[i];
  }
}
Macierz::~Macierz() { delete[] mac; }
std::ostream &operator<<(std::ostream &Strm, const Macierz &Mac) {
  for (int i = 0; i < ROZMIAR; i++) {
    Strm << Mac.mac[i] << endl;
  }
  return Strm;
}

std::istream &operator>>(std::istream &Strm, Macierz &Mac) {
  for (int i = 0; i < ROZMIAR; i++) {
    Strm >> Mac.mac[i];
  }
  return Strm;
}
Macierz Macierz::Wyznacznik() {
  Wektor wtmp1;
  double tmp2, x;
  Macierz wynik;
  wynik[0] = mac[0];
  wtmp1 = mac[0];
  tmp2 = mac[1][0];
  x = tmp2 / wtmp1[0];
  wynik[1][0] = mac[1][0] - x * wtmp1[0];
  wynik[1][1] = mac[1][1] - x * wtmp1[1];
  wynik[1][2] = mac[1][2] - x * wtmp1[2];
  tmp2 = mac[2][0];
  x = tmp2 / wtmp1[0];
  wynik[2][0] = mac[2][0] - x * wtmp1[0];
  wynik[2][1] = mac[2][1] - x * wtmp1[1];
  wynik[2][2] = mac[2][2] - x * wtmp1[2];
  tmp2 = mac[2][1];
  x = tmp2 / wtmp1[1];
  wynik[2][1] = mac[2][1] - x * wtmp1[1];
  wynik[2][2] = mac[2][2] - x * wtmp1[2];
  return wynik;
}
