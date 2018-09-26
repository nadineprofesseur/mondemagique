/*
 * Personnage.h
 *
 *  Created on: 24 sept. 2018
 *      Author: stamandnadine
 */

#ifndef PERSONNAGE_H_
#define PERSONNAGE_H_
#include <iostream>
#include "Arme.h"
#include <vector>
using namespace std;

namespace MondeMagique {

class Personnage {
public:
	Personnage();
	Personnage(string nom);
	Personnage(string nom, int age);

	virtual ~Personnage();

	virtual string exporter();

	int getAge() const {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}

	const Arme& getArme() const {
		return arme;
	}

	void setArme(const Arme& arme) {
		this->arme = arme;
	}

	void ajouterArme(Arme * nouvelleArme);

protected:
	string nom;
	int age;
	Arme arme;
	vector<Arme *> armesSecondaires; // les listes utilisent des pointeurs pour pouvoir stocker des objets derives de taille differentes
	// sinon l'objet stocke dans la liste sera cast… en objet parent (Arme) et perdra ses attributs derives - sa memoire supplementaire

};

} /* namespace MondeMagique */

#endif /* PERSONNAGE_H_ */
