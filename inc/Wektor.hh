#ifndef WEKTOR_HH
#define WEKTOR_HH

#include "rozmiar.h"
#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
class Wektor {
  int rozmiar;
  double *v;

  public:
    Wektor ();
    Wektor (int r, double *data);
    ~ Wektor();
    void Write();
    Wektor operator = (const Wektor &W);
    friend std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);
    friend std::istream& operator >> (std::istream &Strm, Wektor &Wek);
    friend Wektor operator + (const Wektor &w1, const Wektor &w2);
    friend Wektor operator - (const Wektor &w1, const Wektor &w2);
    friend Wektor operator * (const Wektor &w1, const Wektor &w2);
    friend Wektor operator * (const Wektor &w1, const double &l);
    friend Wektor operator / (const Wektor &w1, const double &l);
};

  Wektor operator + (const Wektor &w1, const Wektor &w2);
  Wektor operator - (const Wektor &w1, const Wektor &w2);
  Wektor operator * (const Wektor &w1, const Wektor &w2);
  Wektor operator * (const Wektor &w1, const double &l);
  Wektor operator / (const Wektor &w1, const double &l);
/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::istream& operator >> (std::istream &Strm, Wektor &Wek);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt
 */
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek);

#endif
