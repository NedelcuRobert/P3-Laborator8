#include "caineCuPete.h"

void CCaineCuPete::citire_caine() {
	CCaine::citire_caine();
	cout << "Numar pete:" << endl;
	cin >> numar_pete;
}

void CCaineCuPete::afisare_caine() {
	CCaine::afisare_caine();
	cout << " " << numar_pete << endl;
}
