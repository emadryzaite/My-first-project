#include "funkcijos.h"

int main() {
  vector<irasas> Stud;
  vector<irasas> Vargsiukai;
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
  skirstymas(Stud, Vargsiukai, Kietiakai);
  spausdinimas(Vargsiukai, "vargsiukai.txt");
  spausdinimas(Kietiakai, "kietiakai.txt");
  Stud.clear();
  Vargsiukai.clear();
  Kietiakai.clear();
}
