#include "funkcijos_list.h"

void vidMed(list<irasas> &Stud) {
  cout << "Ar norite skaiciuoti vidurki, jei ne bus skaiciuojama mediana? (iveskite + jei norite, - jei ne) ";
  long dydis = Stud.size();
  if (patvirtinimas()) {
     std::list<irasas>::iterator it;
        for (it = Stud.begin(); it != Stud.end(); ++it){
        {
        it->galut = galutinis(vidurkis(it->paz), it->egzas);
        }  
    }
    }
    else
    {
        std::list<irasas>::iterator it;
        for (it = Stud.begin(); it != Stud.end(); ++it){
        {
        it->galut = galutinis(mediana(it->paz), it->egzas);
        }  
    }
  }
}

void nuskaitymas(list<irasas> &Stud, string failas) {
  stringstream buffer;
  ifstream objektinis;
  pradzia = std::chrono::steady_clock::now();
  try {
    objektinis.open(failas);
    if (!objektinis)
      throw 1;
    buffer << objektinis.rdbuf();
    objektinis.close();
    string eil;
    getline(buffer, eil);

    while (getline(buffer, eil)) {

      irasas St;
      stringstream objektinis(eil);
      objektinis >> St.pavarde >> St.vardas;
      int p;
      while (objektinis >> p) {
        if (p > 10 || p < 1)
          throw 2;
        else
          St.paz.push_back(p);
      }
      if (St.paz.size() == 0)
        throw 3;
      St.paz.pop_back();
      St.egzas = p;
      St.galut = 0;
      Stud.push_back(St);
      St.paz.clear();
    }
  } catch (int e) {
    switch (e) {
    case 1:
      cout << "Failas neegzistuoja/negali buti atidarytas." << endl;
      break;
    case 2:
      cout << "Pazymys turi buti intervale [1 - 10]." << endl;
      break;
    case 3:
      cout << "Neteisinga ivestis." << endl;
      break;
    default:
      cout << "Sistemos klaida." << endl;
      break;
    }

    exit(0);
  }
  double pabaiga = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - pradzia).count() / 1000.0;
  cout << endl <<"Sugaistas laikas duomenims nuskaityti: " << pabaiga << " s" << endl << endl;
}
void papildoma(list<irasas> &Stud) {
  irasas St;

  do {
    St.vardas = vardIrasymas("Varda");
    St.pavarde = vardIrasymas("Pavarde");
    cout << "Ar norite patys irasyti, jei ne bus sugeneruoti? (iveskite + jei "
            "norite, - jei ne) ";
    if (patvirtinimas()) {
      cout << "Norite irasyti kiek pazymiu bus? (iveskite + jei norite, - jei "
              "ne) ";
      if (patvirtinimas()) {
        int n = skIrasymas(" kiek pazymiu", false);
        for (int j = 0; j < n; j++) {
          St.paz.push_back(skIrasymas("pazymi", true));
        }
      } else {
        do {
          St.paz.push_back(skIrasymas("pazymi", true));
          cout << "Ar vesite dar pazymi? (iveskite + jei norite, - jei ne) ";
        } while (patvirtinimas());
      }
    } else {
      int n = skIrasymas("kiek pazymiu", false);
      for (int j = 0; j < n; j++)
        St.paz.push_back(atsitiktiniai());
      cout << "Sugeneruoti: ";
      for (int j = 0; j < n - 1; j++)
        cout << St.paz[j] << ",";
      cout << St.paz[n - 1] << "." << endl;
    }
    cout << "Egzamino bala suvesite patys, jei ne bus sugeneruotas? (iveskite "
            "+ jei norite, - jei ne) ";
    if (patvirtinimas()) {
      St.egzas = skIrasymas("egzamino pazymi", true);
    } else {
      St.egzas = atsitiktiniai();
      cout << "Sugeneruotas egzamino balas: " << St.egzas << endl;
    }
    St.galut = 0;
    Stud.push_back(St);
    St.paz.clear();
    cout << "Ar vesie dar studento duomenu? (iveskite + jei norite, - jei ne) ";

  } while (patvirtinimas());
}
bool patvirtinimas() {
  bool tiesa = true;
  bool pazym = true;
  string tn;
  do {
    cin >> tn;
    if (tn.length() == 1 && (tolower(tn[0]) == '+' || tolower(tn[0]) == '-')) {
      pazym = true;
      if (tolower(tn[0]) == '+')
        tiesa = true;
      else
        tiesa = false;
    } else {
      cout << "Irasykite dar karta ";
      pazym = false;
    }
  } while (!pazym);
  return tiesa;
}
bool vardInfo(string skai) {
  bool teisingas = true;
  for (int i = 0; i < skai.length(); i++) {
    if (isalpha(skai[i]) == false) {
      teisingas = false;
      cout << "Neturi buti skaiciu " << endl;
      break;
    } else
      teisingas = true;
  }
  return teisingas;
}
string vardIrasymas(string irasymas) {
  string skai;
  do {
    cout << "Iveskite studento " << irasymas << ":";
    cin >> skai;
  } while (!vardInfo(skai));
  return skai;
}
bool skaiInfo(string pazym) {
  bool teisingas = true;
  for (int i = 0; i < pazym.length(); i++) {
    if (!isdigit(pazym[i]) || stoi(pazym) == 0) {
      teisingas = false;
      cout << "turi buti daugiau uz 0 " << endl;
      break;
    }
  }
  return teisingas;
}
bool skInfo(string pazym) {
  bool teisingas = true;
  for (int i = 0; i < pazym.length(); i++) {
    if (!isdigit(pazym[i])) {
      teisingas = false;
      cout << "Turi buti tik skaiciai " << endl;
      break;
    } else if (teisingas == true && (stoi(pazym) < 1 || stoi(pazym) > 10)) {
      teisingas = false;
      cout << "skaicius turi buti nuo 1 iki 10 " << endl;
    }
  }
  return teisingas;
}

int skIrasymas(string irasymas, bool negalut) {
  string skai;
  bool pazym;
  do {
    cout << "Irasykite " << irasymas << ":";
    cin >> skai;
    if (negalut)
      pazym = skInfo(skai);
    else
      pazym = skaiInfo(skai);
  } while (!pazym);
  int skaicius = stoi(skai);
  return skaicius;
}

int suma(vector<int> paz) { return accumulate(paz.begin(), paz.end(), 0); }
float vidurkis(vector<int> paz) {
  int n = paz.size();
  float vid = suma(paz) / n;
  return vid;
}
float mediana(vector<int> paz) {
  float median;
  int n = paz.size();

  sort(paz.begin(), paz.end());

  if (n / 2 == 0)
    median = (paz[n / 2] + paz[n / 2 + 1]) / 2;
  else
    median = paz[n / 2];
  return median;
}
float galutinis(float sum, int egzas) {
  float galut = float(0.4 * sum) + 0.6 * egzas;
  return galut;
}
int atsitiktiniai() {
  int p;
  p = 1 + rand() % ((10 + 1) - 1);
  return p;
}
int pavardTvark(list<irasas> Stud) {
  int max = 0;
long int t = Stud.size();
  std::list<irasas>::iterator it;
 for (it = Stud.begin(); it != Stud.end(); ++it){
    {
        if(it->pavarde.length() > max)
        max = it->pavarde.length();
    }  
    } 

    return max;
}
int vardTvark(list<irasas> Stud) {
  int max = 0;
  long int t = Stud.size();
    std::list<irasas>::iterator it;
    for (it = Stud.begin(); it != Stud.end(); ++it){
    {
        if(it->vardas.length() > max)
        max = it->vardas.length();
    }
    }

    return max;
}
void rikiavimas(list<irasas> &Stud) {
 Stud.sort(lyginimasPavard());
}


void spausdinimas(list<irasas> Stud, string failas) {
  rikiavimas(Stud);
  ofstream out (failas); 
  long int t = Stud.size();
  string pnktr = "";
  int maxvardas = vardTvark(Stud);
  int maxpavarde = pavardTvark(Stud);
  pnktr.append(maxpavarde + maxvardas + 50, '-');
  out << left << setw(maxvardas + 15) << "Vardas" << setw(maxpavarde + 15)
       << "Pavarde"
       << " Galutinis balas" << endl;
  out << pnktr << endl;
  for (long int i = 0; i < t; i++) {
    out << left  << setw(maxvardas + 10) << Stud.back().vardas << setw(maxpavarde + 10) << Stud.back().pavarde<< fixed << setprecision(2) << Stud.back().galut << endl;
        Stud.pop_back();
    }
  
    
  }
int pasirinkimas()
{
    cout << "Kuri faila norite naudoti? (1 - 5)" << endl;
    cout << "1 - studentai1000.txt; " << endl << "2 - studentai10000.txt;" << endl << "3 - studentai100000.txt;" 
    << endl << "4 - studentai1000000.txt;" << endl << "5 - studentai10000000.txt;" << endl;
    int skaicius = skIrasymas();
    return skaicius;
}


bool skGenTikrinimas(string pazym) 
{
    bool teisingas = true;

    for (int i = 0; i < pazym.length(); i++) 
    {
        if (!isdigit(pazym[i]))
        {
            teisingas = false;
            cout << "Klaida! Turite ivesti skaiciu" << endl;
            break;
        }
        else if (teisingas == true && (stoi(pazym) < 1 || stoi(pazym) > 5))
        {
            teisingas = false;
            cout << "Klaida! Skaicius turi buti is intervalo [1-5]" << endl;
        }
        
    }

    return teisingas;
}

int skIrasymas()
{
    string skai;
    bool pazym;
    do 
    {
        cout << "Iveskite skaiciu: ";
        cin >> skai;
        pazym = skGenTikrinimas(skai);
    } while (!pazym);

    int skaicius = stoi(skai);

    return skaicius;
}

void generavimas(int sk, string &failas)
{
    long n;
    if(sk == 1) n = 1000;
    else if(sk == 2) n = 10000;
    else if(sk == 3) n = 100000;
    else if(sk == 4) n = 1000000;
    else if(sk == 5) n = 10000000;

    failas = "studentai" + to_string(n) + ".txt";
    

    ofstream out(failas);
    out << "Pavarde" << setw(20) << "Vardas" << setw(13);
    for (int i = 0; i < 10; i++) out << "ND" + to_string(i + 1) << setw(8);
    out << "Egzas" << endl;

    for(long int i = 0; i < n; i++)
    {
        out << "Pavarde" + to_string(i + 1);
        out << setw(20) << "Vardas" + to_string(i + 1) << setw(10);
        for(int j = 0; j <= 10; j++) out << atsitiktiniai() <<setw(8);
        out << endl;
    }

    out.close();  
    

}
void skirstymas1(list <irasas> &Stud, list <irasas> &Vargsiukai, list <irasas> &Kietiakai)
{
  pradzia = std::chrono::steady_clock::now();

  copy_if(Stud.begin(), Stud.end(), back_inserter(Kietiakai), [](irasas const& Stud) {return Stud.galut >= 5;});
  copy_if(Stud.begin(), Stud.end(), back_inserter(Vargsiukai), [](irasas const& Stud) {return Stud.galut <= 5;});



double pabaiga = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - pradzia).count() / 1000.0;
    cout << endl <<"Sugaistas laikas studentams suskirstyti(1): " << pabaiga << " s" << endl << endl;  

}

void skirstymas2(list <irasas> &Stud, list <irasas> &Kietiakai)
{
  pradzia = std::chrono::steady_clock::now();
  
  auto it = stable_partition(Stud.begin(), Stud.end(), [](irasas const& Stud) {return Stud.galut < 5;});
  Kietiakai.assign(it, Stud.end());
  Stud.erase(it, Stud.end());
    
double pabaiga = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - pradzia).count() / 1000.0;
    cout << endl <<"Sugaistas laikas studentams suskirstyti(2): " << pabaiga << " s" << endl << endl;  

}



void skirstymas3(list <irasas> &Stud, list <irasas> &Kietiakai)
{
    long int n = Stud.size();
     pradzia = std::chrono::steady_clock::now();

    copy_if(Stud.begin(), Stud.end(), back_inserter(Kietiakai), [](irasas const& Stud) {return Stud.galut >= 5;});
    Stud.resize(Stud.size()- Kietiakai.size());
  
    double pabaiga = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - pradzia).count() / 1000.0;
    cout << endl <<"Sugaistas laikas studentams suskirstyti: " << pabaiga << " s" << endl << endl;  
}

