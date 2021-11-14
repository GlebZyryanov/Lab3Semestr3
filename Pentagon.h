#pragma once
#include"Dot.h"

class Pentagon
{
public:
	void initPentagon(int initCordX, int initCordY);
	Pentagon setPentagon(Pentagon Pentagon);
	void printPentagon(Pentagon Pentagon);
private:
	Dot listdot_P[5];
};

