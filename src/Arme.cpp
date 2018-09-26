/*
 * Arme.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: stamandnadine
 */

#include "Arme.h"

namespace MondeMagique {

Arme::Arme() {
}

Arme::Arme(int puissance, int integrite)
{
	this->puissance = puissance;
	this->integrite = integrite;
}


Arme::~Arme() {
}

} /* namespace MondeMagique */
