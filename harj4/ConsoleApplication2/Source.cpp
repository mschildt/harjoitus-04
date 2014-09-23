/* Tyˆn nimi: Harjoitus 4
	Tekij‰: Mikael Schildt
	Kuvaus teht‰v‰st‰:

	Ks. ohjelmakoodia: harj4 (omat esimerkit)

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
c) Muuta vakioden nimet niin, ett‰
MAX => MINIMI
max => MAKSIMI

Muuta ohjelmaa niin, ett‰ voit tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN v‰liss‰
*/

#include <iostream>
using namespace std;
//m‰‰ritell‰‰n vakioita
#define MINIMI 10 // vanha tapa
const int MAKSIMI = 20; // uusi, suositeltava tapa

// julkisten muuttujien m‰‰rittely
int summa;

// aliohjelmien esittely
void Laske(int, int);

void main()
{	// m‰‰ritell‰‰n paikallisia muuttujia
	int luku1 = 2;
	int luku2;
	cout << "Syˆt‰ luku: ";
	cin >> luku2;
	Laske(luku1, luku2); // kutsutaan aliohjelmaa
	if (summa > MINIMI && summa < MAKSIMI)
		cout << "Summa on 10n ja 20n v‰liss‰\n";
	else
	if (summa < MINIMI)
		cout << "Summa on pienempi kuin " << MINIMI;
	else
	// if (summa > MAKSIMI)
		cout << "Summa on suurempi kuin " << MAKSIMI;
}

// aliohjelman m‰‰ritys
void Laske(int eka, int toka)
{
	summa = eka + toka;
}