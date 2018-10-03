/*
 * Magicien.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#include "Magicien.h"
#include "BouleDeFeu.h"
#include <sstream>

namespace MondeMagique {

Magicien::Magicien() {
	this->arme = new BouleDeFeu(); // new retourne un type pointeur
}
Magicien::Magicien(string nom, int magie) : Personnage(nom)
{
	this->magie = magie;
	this->arme = new BouleDeFeu(); // new retourne un type pointeur
}
Magicien::Magicien(string nom, int magie, int age) : Personnage(nom, age)
{
	this->magie = magie;
	this->arme = new BouleDeFeu(); // new retourne un type pointeur
}

Magicien::~Magicien() {
	delete this->arme; // liberer la memoire
	// REGLE : un delete pour un new - si possible au meme niveau
}


string Magicien::exporter()
{
	stringstream xml;
	xml << "<Magicien><nom>" << this->nom << "</nom><age>"<< this->age << "</age><magie>" << this->magie << "</magie></Magicien>";
	return xml.str();
}


} /* namespace MondeMagique */
