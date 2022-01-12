#include "Tableau.h"
#include <iostream>
#include <assert.h>
Tableau::Tableau(int t)
{
	this->tab = new float[t];
	this->taille = t;
}

Tableau::Tableau(const Tableau& T)
{
	this->tab = new float[T.taille];
	this->taille = T.taille;
	for (int i=0;i<this->taille; i++) {
		this->tab[i] = T.tab[i];
	}
}



Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		this->taille = T.taille;
		delete this->tab;
		this->tab = nullptr;
		this->tab = new float[T.taille];
		for (int i = 0; i < T.taille; i++) {
			this->tab[i] = T.tab[i];
		}
	}
	return *this;
}

float& Tableau::operator[](int i) const
{
	assert(i >= 0 && i < this->taille);
		return this->tab[i];

}

Tableau::~Tableau()
{
	delete this->tab;
	std::cout << "La classe Tableau est entrain de se détruire...";
}
