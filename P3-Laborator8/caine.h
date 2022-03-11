#include <iostream>
#include <string>

using namespace std;

class CCaine
{
private:
	string nume;
	float inaltime;
	float greutate;
	int varsta;
	string culoare;
public:
	virtual void citire_caine();
	virtual void afisare_caine();
};

