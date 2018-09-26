/*
 * Magicien.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#include "Magicien.h"
#include <sstream>

namespace MondeMagique {

Magicien::Magicien() {
}
Magicien::Magicien(string nom, int magie) : Personnage(nom)
{
	this->magie = magie;
}
Magicien::Magicien(string nom, int magie, int age) : Personnage(nom, age)
{
	this->magie = magie;
}

Magicien::~Magicien() {
}


string Magicien::exporter()
{
	stringstream xml;
	xml << "<Magicien><nom></nom><age></age><magie></magie></Magicien>";
	return xml.str();
}


} /* namespace MondeMagique */
