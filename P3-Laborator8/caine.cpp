#include "caine.h"

void CCaine::citire_caine() {
	cout << "\nIntroduceti datele cainelui:" << endl;
	cout << "Nume:" << endl;
	cin >> nume;
	cout << "Inaltime:" << endl;
	cin >> inaltime;
	cout << "Greutate:" << endl;
	cin >> greutate;
	cout << "Varsta:" << endl;
	cin >> varsta;
	cout << "Culoare:" << endl;
	cin >> culoare;
}

void CCaine::afisare_caine() {
	cout << nume << " " << inaltime << " " << greutate << " " << varsta << " " << culoare;
}
