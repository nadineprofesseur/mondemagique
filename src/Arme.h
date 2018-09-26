/*
 * Arme.h
 *
 *  Created on: 26 sept. 2018
 *      Author: stamandnadine
 */

#ifndef ARME_H_
#define ARME_H_

namespace MondeMagique {

class Arme {
public:
	Arme();
	Arme(int puissance, int integrite);
	virtual ~Arme();

	int getIntegrite() const {
		return integrite;
	}

	void setIntegrite(int integrite) {
		this->integrite = integrite;
	}

	int getPuissance() const {
		return puissance;
	}

	void setPuissance(int puissance) {
		this->puissance = puissance;
	}

protected:
	int puissance; // entre 0 et 1000
	int integrite; // entre 0 et 100
};

} /* namespace MondeMagique */

#endif /* ARME_H_ */
