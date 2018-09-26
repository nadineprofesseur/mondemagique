/*
 * Magicien.h
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#ifndef MAGICIEN_H_
#define MAGICIEN_H_

#include "Personnage.h"

namespace MondeMagique {

class Magicien: public Personnage {
public:
	Magicien();
	Magicien(string nom, int magie);
	Magicien(string nom, int magie, int age);
	virtual ~Magicien();
	string exporter();

	int getMagie() const {
		return magie;
	}

	void setMagie(int magie) {
		this->magie = magie;
	}

protected:
	int magie;
};

} /* namespace MondeMagique */

#endif /* MAGICIEN_H_ */
