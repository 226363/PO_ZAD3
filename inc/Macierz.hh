#ifndef MACIERZ_HH
#define MACIERZ_HH

#include "rozmiar.h"
#include "Wektor.hh"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Macierz {
  Wektor *mac;
  public:
  Macierz();
  Macierz(Wektor *data);
  ~Macierz();
  Wektor & operator [](int indeks){ return mac[indeks];}
  friend std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);
  friend std::istream& operator >> (std::istream &Strm, Macierz &Mac);
};

std::istream& operator >> (std::istream &Strm, Macierz &Mac);


std::ostream& operator << (std::ostream &Strm, const Macierz &Mac);


#endif
