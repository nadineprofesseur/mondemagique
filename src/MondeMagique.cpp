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

		//int trouvaille = ligne.find(";", 6);
		//cout << "test trouvaille " << trouvaille;

		unsigned int dernierePosition = 0;
		int limite = 0;
		do
		{
			limite++;
			unsigned int positionPointVirgule = ligne.find(";", dernierePosition); // find retourne la position du prochain ;
			cout << " positionPointVirgule : " << positionPointVirgule;
			string valeur = ligne.substr(dernierePosition, positionPointVirgule - dernierePosition); // substr prend la position de départ + le nombre de char
			cout << " position : " << positionPointVirgule;
			cout << " valeur : " << valeur;
			cout << " positionPointVirgule avant +1: " << positionPointVirgule;
			dernierePosition = positionPointVirgule+1;
			cout << " derniere position apres +1: " << dernierePosition;
			cout << endl;
		}
		//while(ligne.length() > dernierePosition && dernierePosition < 1000 && limite < 10);
		//while(string::npos != dernierePosition && limite < 10); // ne marche pas a cause de bug dans find()
		while(0 != dernierePosition && limite < 10); // 0 car -1 de find +1 = 0

		cout << endl;
	}

	return 0;
}
