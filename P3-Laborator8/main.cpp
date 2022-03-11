#include "caineCuPete.h"

int main() {

	CCaine* caine;
	caine = new CCaine;

	caine->citire_caine();
	caine->afisare_caine();

	CCaineFaraPete* caine_fara_pete;
	caine_fara_pete = new CCaineFaraPete;

	caine_fara_pete->citire_caine();
	caine_fara_pete->afisare_caine();

	CCaineCuPete* caine_cu_pete;
	caine_cu_pete = new CCaineCuPete;

	caine_cu_pete->citire_caine();
	caine_cu_pete->afisare_caine();

	caine = caine_cu_pete;
	caine->afisare_caine();

	return 0;
}

