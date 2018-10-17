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
/*
	Personnage personnageSansPointeur;
	Magicien objetMagicien("LaLa", 200);
	personnageSansPointeur = (Personnage)objetMagicien;
	cout << personnageSansPointeur.exporter() << endl; // Quelle fonction ??? Personnage::exporter()

	Personnage* personnage; // instance du pointeur vers un objet personnage
	personnage = new Magicien("Lolo", 100);
	cout << personnage->exporter() << endl; // Quelle fonction ??? Magicien::exporter

	ofstream fichierMonde;
	fichierMonde.open("data/monde.xml");
	//fichierMonde << "<monde>" << personnage->exporter() << "</monde>";

	Personnage* listePersonnages[5]; // 5 pointeurs de personnages
	listePersonnages[0] = new Magicien("Loulou", 200);
	listePersonnages[1] = new Magicien("Momo", 200);
	listePersonnages[2] = new Magicien("Lulu", 200);
	listePersonnages[3] = new Magicien("Yolo", 200);
	listePersonnages[4] = new Magicien("Soso", 200);

	fichierMonde << "<monde>";
	for(int position = 0; position < 5; position++)
	{
		//fichierMonde << listePersonnages[position]->exporter();
		personnage = listePersonnages[position];
		fichierMonde << personnage->exporter();
	}
	fichierMonde << "</monde>";

	ifstream fichierPersonnages;
	fichierPersonnages.open("data/Personnages.csv");

	string ligne;
	//getline(fichierPersonnages, ligne);
	//cout << "Première ligne : " << ligne;
	unsigned int dernierePosition = 0;
	unsigned int positionPointVirgule = 0;
	while(!fichierPersonnages.eof())
	{
		getline(fichierPersonnages, ligne);
		cout << "Ligne : " << ligne << endl;

		//int trouvaille = ligne.find(";", 6);
		//cout << "test trouvaille " << trouvaille;

		dernierePosition = 0;
		do
		{
			positionPointVirgule = ligne.find(";", dernierePosition); // find retourne la position du prochain ;
			//cout << " positionPointVirgule : " << positionPointVirgule;
			string valeur = ligne.substr(dernierePosition, positionPointVirgule - dernierePosition); // substr prend la position de départ + le nombre de char
			//cout << " position : " << positionPointVirgule;
			cout << " valeur : " << valeur;
			//cout << " positionPointVirgule avant +1: " << positionPointVirgule;
			dernierePosition = positionPointVirgule+1;
			//cout << " derniere position apres +1: " << dernierePosition;
			//cout << endl;
		}
		//while(ligne.length() > dernierePosition && dernierePosition > 0);
		//while(string::npos != dernierePosition);
		while(0 != dernierePosition); // 0 car -1 de find +1 = 0

		cout << endl;

		*/

	Personnage* listePersonnages[5]; // 5 pointeurs de personnages
	listePersonnages[0] = new Magicien("Loulou", 200);
	listePersonnages[1] = new Magicien("Momo", 200);
	listePersonnages[2] = new Magicien("Lulu", 200);
	listePersonnages[3] = new Magicien("Yolo", 200);
	listePersonnages[4] = new Magicien("Soso", 200);



		while(true)
		{
			// faire un wait pour economiser les ressources
			Personnage* personnage;
			cout << "<monde>";
			for(int position = 0; position < 5; position++)
			{
				//fichierMonde << listePersonnages[position]->exporter();
				personnage = listePersonnages[position];
				cout << personnage->exporter();
			}
			cout << "</monde>";

			cout << endl;
		}


	return 0;
}

