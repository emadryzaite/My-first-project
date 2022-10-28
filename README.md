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

Taip pat programa atlieka **veikimo greičio (spartos) analizę**. Apskačiuoja sugaištą laiką failams  nuskaityti ir suskirstyti.

VEKTORIAI

1000 - 0.001s (nuskaityti), 0s (suskirstyti)

10000 - 0.088s (nuskaityti), 0.001s (suskirstyti)

100000 -  0.472s (nuskaityti), 0.015s (suskirstyti)

1000000 -  4.695s (nuskaityti), 0.403s (suskirstyti)

10000000 -  62.893s (nuskaityti), 4.93s (suskirstyti)

LIST

1000 - 0.003s (nuskaityti), 0s (suskirstyti)

10000 - 0.021s (nuskaityti), 0.002s (suskirstyti)

100000 -  0.479s (nuskaityti), 0.012s (suskirstyti)

1000000 -  4.495s (nuskaityti), 0.664s (suskirstyti)

1000000 -  44.49s (nuskaityti), 5.684s (suskirstyti)

