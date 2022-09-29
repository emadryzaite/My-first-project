#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
#include <numeric>
#include <stdio.h>     
#include <stdlib.h>    
#include <time.h> 
#include <fstream>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string; 
using std::stoi;
using std::setw;
using std::setprecision;
using std::sort;
using std::vector;
using std::left;
using std::fixed;
using std::ifstream;
using std::stringstream; 

struct irasas
{
  string vardas;
  string pavarde;
  vector <int> paz;
  int egzas;
  float galut;
};

void nuskaitymas(vector <irasas> &Stud);
bool vardInfo(string skai);
string vardIrasymas(string irasymas);
bool skaiInfo(string pazym);
bool skInfo(string pazym);
int skIrasymas(string irasymas, bool);
int suma(vector <int> paz);
float vidurkis(vector <int> paz);
float mediana(vector <int> paz);
void vidMed(vector <irasas> &Stud);
float galutinis(float, int egzas);
int atsitiktiniai();
int pavardTvarka(vector <irasas> Stud);
int vardTvarka(vector <irasas> Stud);
void spausdinimas(vector <irasas> Stud);
void papildoma(vector <irasas> &Stud);
bool patvirtinimas();
void rikiavimas (vector <irasas> &Stud);
bool pavardLyginimas(irasas &a, irasas &b);
