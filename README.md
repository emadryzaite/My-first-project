**Studentų galutinio balo skaičiuoklė**

Ši programa yra sukurta skaičiuoti studentų galutinį balą naudojant formulę

<img width="378" alt="Screenshot 2022-09-29 at 23 15 54" src="https://user-images.githubusercontent.com/113093671/193133329-ea2db47d-80bd-4c3c-97f2-0d676d135a3d.png">


taip pat galima naudoti ir medianą vietoj vidurkio.

**Naudotojas gali pasirinkti duomenų įvedima dvėjais būdais:**

-rankiniu būdu

-sugeneruoti naują failą (1000, 10 000, 100 000, 1000 000, 10 000 000 įrašų)

**Rezultatas atrodo šitaip:**

<img width="473" alt="Screenshot 2022-09-29 at 23 16 15" src="https://user-images.githubusercontent.com/113093671/193133426-d861005c-bb6d-4ce1-81fd-57ee26cd497a.png">

Duomenis yra surušiuoti pagal pavardes.

Programos naudotojas turi įrašyti duomenis:

-Vardą ir pavardę

-Namų darbų rezultatus (10-balėje sistemoje)

-Egzamino rezultatą (10-balėje sistemoje)

Taip pat programos naudotojas gali pasirinkti ar namų darbų/egzamino vertinimą įrašys pats, ar kad būtų sugeneruotas.

**Programa surūšiuoja studentus** į "Kietiakai" jei jų galutinis balas >= 5.0, ir į "Vargsiukai" jei jų galutinis balas < 5.0. Tuomet yra išvedami du atskiri failai : kietiakai.txt ir vargsiukai.txt.

Naudojami du konteineriai:

-Vector

-List

Taip pat programa atlieka **veikimo greičio (spartos) analizę 3 būdais**. Apskačiuoja sugaištą laiką failams  nuskaityti ir suskirstyti.

VEKTORIAI

1 STRATEGIJA

1000 - 0.006s (nuskaityti), 0s (suskirstyti)

10000 - 0.028s (nuskaityti), 0.002s (suskirstyti)

100000 -  0.228s (nuskaityti), 0.017s (suskirstyti)

1000000 -  4.695s (nuskaityti), 0.403s (suskirstyti)

10000000 -  25.862s (nuskaityti), 1.099s (suskirstyti)

2 STRATEGIJA

1000 - 0.001s (nuskaityti), 0s (suskirstyti)

10000 - 0.028s (nuskaityti), 0.0s (suskirstyti)

100000 -  0.287s (nuskaityti), 0.008s (suskirstyti)

1000000 -  2.98s (nuskaityti), 0.098s (suskirstyti)

10000000 -  24.62s (nuskaityti), 0.94s (suskirstyti)

3 STRATEGIJA

1000 - 0.007s (nuskaityti), 0s (suskirstyti)

10000 - 0.025s (nuskaityti), 0.001s (suskirstyti)

100000 -  0.239s (nuskaityti), 0.006s (suskirstyti)

1000000 -  2.451s (nuskaityti), 0.064s (suskirstyti)

10000000 -  44.49s (nuskaityti), 5.684s (suskirstyti)

LIST

| fd | s | s | s | s |
|----|---|---|---|---|
| 1  | 1 | 1 | 1 | 1 |
|    |   |   |   |   |
|    |   |   |   |   |



1 STRATEGIJA

1000 - 0.002s (nuskaityti), 0s (suskirstyti)

10000 - 0.027s (nuskaityti), 0.0s (suskirstyti)

100000 -  0.238s (nuskaityti), 0.007s (suskirstyti)

1000000 -  3.043s (nuskaityti), 0.076s (suskirstyti)

10000000 -  32.232s (nuskaityti), 1.946s (suskirstyti)

2 STRATEGIJA

1000 - 0.003s (nuskaityti), 0s (suskirstyti)

10000 - 0.028s (nuskaityti), 0.001s (suskirstyti)

100000 -  0.3s (nuskaityti), 0.018s (suskirstyti)

1000000 -  3.016s (nuskaityti), 0.162s (suskirstyti)

10000000 -  25.065s (nuskaityti), 1.948s (suskirstyti)

3 STRATEGIJA

1000 - 0.002s (nuskaityti), 0s (suskirstyti)

10000 - 0.8 (nuskaityti), 0.001s (suskirstyti)

100000 -  0.303s (nuskaityti), 0.013s (suskirstyti)

1000000 -  3.02s (nuskaityti), 0.123s (suskirstyti)

10000000 -  35.332s (nuskaityti), 2.74s (suskirstyti)

