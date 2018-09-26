/*
 * BouleDeFeu.h
 *
 *  Created on: 26 sept. 2018
 *      Author: stamandnadine
 */

#ifndef BOULEDEFEU_H_
#define BOULEDEFEU_H_

#include "Arme.h"

namespace MondeMagique {

class BouleDeFeu: public Arme {
public:
	BouleDeFeu();
	BouleDeFeu(int puissance);
	virtual ~BouleDeFeu();
};

} /* namespace MondeMagique */

#endif /* BOULEDEFEU_H_ */
