#include "Wektor.hh"
#include "rozmiar.h"
using namespace std;

Wektor::Wektor(){
  rozmiar=ROZMIAR;  //important
  v=new double [rozmiar];
}
Wektor::Wektor(int r, double *data){  //Recently I dont't use it
  rozmiar=r;
  v = new double[rozmiar];
  for (int i=0; i<rozmiar; i++){
    v[i]=data[i];
  }
}

Wektor::~Wektor(){
  delete []v;
}
//////////////
std::ostream& operator << (std::ostream &Strm, const Wektor &Wek){
  for(int i=0; i<Wek.rozmiar; i++){
    Strm<<Wek.v[i]<<" ";
  }
  return Strm;
}

void Wektor::Write(){
      for(int i=0; i<rozmiar; i++){
        cout<<v[i]<<" ";
      }
    }
    /////////////////////////////

std::istream& operator >> (std::istream &Strm, Wektor &Wek){
// cout<<"cos";
for(int i=0; i<ROZMIAR; i++){
    Strm >> Wek.v[i];
  }
  return Strm;
}
