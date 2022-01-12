#include "TableauBorne.h"
#include <iostream>
#include <assert.h>
TableauBorne::TableauBorne(int t, float a, float b) : Tableau(t)
{
	assert(b >= a);
	this->min = a;
	this->max = b;


}

float& TableauBorne::operator[](int i)
{    
	assert(i >= 0 && i < this->taille);
	return this->tab[i];
}

bool TableauBorne::operator()(int i, float x)
{
	if (x >= this->min && x <= this->max) {
		this->operator[](i) = x;
		return true;
	}
	return false;
}

TableauBorne::~TableauBorne()
{
	std::cout << "Classe TableauBorne est entrain de se détruire...";
}
