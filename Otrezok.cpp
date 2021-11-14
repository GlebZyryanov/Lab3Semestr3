#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Otrezok.h"
#include "Dot.h"

void Otrezok::initOtrezok(int initCordX, int initCordY) {
	
	listdot[0] = listdot[0].initDot(initCordX, initCordY);
	listdot[1] = listdot[0].initDot(initCordX, initCordY);

}
Otrezok Otrezok::setOtrezok(Otrezok O) {
	O.listdot[0]=O.listdot[0].setDot(O.listdot[0]);
	O.listdot[1]=O.listdot[1].setDot(O.listdot[1]);
	return O;
}
void Otrezok::printOtrezok(Otrezok O)
{
	printf("(%d,%d-%d,%d)\n", O.listdot[0], O.listdot[1]);
}
