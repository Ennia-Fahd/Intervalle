#pragma once
#include "Tableau.h"
class TableauBorne : public Tableau
{
private:
	float min, max;

public:
	TableauBorne(int t, float a, float b);
	float& operator[](int i);
	bool operator()(int i, float x);
	~TableauBorne();


};
