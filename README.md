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

Taip pat programa atlieka **veikimo greičio (spartos) analizę**. Apskačiuoja sugaištą laiką failams sugeneruoti, nuskaityti, suskirstyti ir išvesti.
1000 - 0.012s (sugeneruoti), 0.001s (nuskaityti), 0s (suskirstyti), 0.017s (isvesti)
10000 - 0.253s (sugeneruoti), 0.088s (nuskaityti), 0.001s (suskirstyti), 0.0369s (isvesti)
100000 - 2.753s (sugeneruoti), 0.472s (nuskaityti), 0.015s (suskirstyti), 1.797s (isvesti)
1000000 - 29.16s (sugeneruoti), 4.695s (nuskaityti), 0.403s (suskirstyti), 13.447s (isvesti)

