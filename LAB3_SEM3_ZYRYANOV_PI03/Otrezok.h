#pragma once
#include "Dot.h"
class Otrezok
{
public:
	Otrezok();
	Otrezok(int Param);
	Otrezok(int initCordX, int initCordY);
	Otrezok setOtrezok(Otrezok &O);
	void printOtrezok(Otrezok O);
private:
	Dot listdot[2];
};


