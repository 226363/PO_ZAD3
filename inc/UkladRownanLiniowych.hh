#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH
#include "rozmiar.h"
#include "Macierz.hh"
#include "Wektor.hh"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class UkladRownanLiniowych {
  Macierz wspolczynniki;
  Wektor x;
  public:
  UkladRownanLiniowych();
  UkladRownanLiniowych(Macierz m, Wektor x);
  const Macierz getWspolczynniki();
  const Wektor getX();
};



std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych &UklRown);


std::ostream& operator << ( std::ostream                  &Strm,
                            const UkladRownanLiniowych    &UklRown
                          );


#endif
