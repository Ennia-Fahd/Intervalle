#pragma once
class Tableau
{ protected :
	int taille;
	float* tab;
public:
	Tableau(int t);
	Tableau(const Tableau& T);
	Tableau& operator=(const Tableau& T);
	virtual float& operator[](int i) const;
	~Tableau();


};
