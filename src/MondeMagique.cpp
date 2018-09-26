//============================================================================
// Name        : MondeMagique.cpp
// Author      : Nadine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Personnage.h"
#include "Magicien.h"

using namespace std;
using namespace MondeMagique;

int main() {
	cout << "Bonjour" << endl; // prints !!!Hello World!!!

	Personnage personnageSansPointeur;
	Magicien objetMagicien("LaLa", 200);
	personnageSansPointeur = (Personnage)objetMagicien;
	cout << personnageSansPointeur.exporter() << endl; // Quelle fonction ??? Personnage::exporter()

	Personnage* personnage; // instance du pointeur vers un objet personnage
	personnage = new Magicien("Lolo", 100);
	cout << personnage->exporter() << endl; // Quelle fonction ??? Magicien::exporter

	return 0;
}
