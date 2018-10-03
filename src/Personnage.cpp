/*
 * Personnage.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#include "Personnage.h"
#include <sstream>

namespace MondeMagique {

Personnage::Personnage() {
	this->age = 0;
	this->nom = "Inconnu";
}
Personnage::Personnage(string nom) {
	this->age = 0;
	this->nom = nom; // TODO verifier cette chaine
}
Personnage::Personnage(string nom, int age) {
	this->age = age;
	this->nom = nom;
}

Personnage::~Personnage() {
}

string Personnage::exporter()
{
	stringstream xml;
	xml << "<Personnage><nom>"<< this->nom <<"</nom><age>"<<this->age<<"</age></Personnage>";
	return xml.str();
}
void Personnage::ajouterArme(Arme* nouvelleArme)
{
	this->armesSecondaires.push_back(nouvelleArme);
}


} /* namespace MondeMagique */
