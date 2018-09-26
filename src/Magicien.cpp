/*
 * Magicien.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#include "Magicien.h"

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
	return "<Magicien><nom></nom><age></age><magie></magie></Magicien>";
}


} /* namespace MondeMagique */
