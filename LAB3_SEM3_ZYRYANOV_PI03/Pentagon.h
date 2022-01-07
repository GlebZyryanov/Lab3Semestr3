#pragma once
#include"Dot.h"

class Pentagon
{
public:
	Pentagon();
	Pentagon(int Param);
	Pentagon(int initCordX, int initCordY);
	Pentagon setPentagon(Pentagon &Pentagon);
	void printPentagon(Pentagon Pentagon);
private:
	Dot listdot_P[5];
};

