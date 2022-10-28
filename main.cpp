#include "funkcijos.h"

int main() {
  vector<irasas> Stud;
  vector<irasas> Kietiakai;
  string failas = "";
  srand(time(0));

  cout << "Ar norite duomenis ivesti patys (kitu atveju duomenys bus "
          "nuskaityti is failo)? (+/-) ";
  if (patvirtinimas())
    papildoma(Stud);
  else{
  generavimas(pasirinkimas(), failas);
  nuskaitymas(Stud, failas);
  }
  vidMed(Stud);
  skirstymas(Stud, Kietiakai);
  spausdinimas(Stud, "vargsiukai.txt");
  spausdinimas(Kietiakai, "kietiakai.txt");
  Stud.clear();
  Kietiakai.clear();
}
