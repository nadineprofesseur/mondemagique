//============================================================================
// Name        : MondeMagique.cpp
// Author      : Nadine
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
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

	ifstream fichierPersonnages;
	fichierPersonnages.open("data/Personnages.csv");

	string ligne;
	//getline(fichierPersonnages, ligne);
	//cout << "Première ligne : " << ligne;
	while(!fichierPersonnages.eof())
	{
		getline(fichierPersonnages, ligne);
		cout << "Ligne : " << ligne << endl;
	}

	return 0;
}
