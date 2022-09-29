#include "funkcijos.h"

int main() 
{
  vector <irasas> Stud;
  srand(time(0));
  cout << "Ar norite duomenis irasysite patys? (iveskite + jei norite, - jei ne) ";
  if(patvirtinimas()) papildoma(Stud);
  else nuskaitymas(Stud);
  vidMed(Stud);
  spausdinimas(Stud);
  Stud.clear();
}
