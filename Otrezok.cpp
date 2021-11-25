#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Otrezok.h"
#include "Dot.h"

void Otrezok::initOtrezok(Otrezok *O, int initCordX, int initCordY) {
	
	for (int i = 0; i < 2; i++) {
		listdot[i].initDot(&listdot[i], initCordX, initCordY);
	}
}
Otrezok Otrezok::setOtrezok(Otrezok &O) {
	
	for (int i = 0; i < 2; i++) {
		listdot[i].setDot(listdot[i]);
	}
	return O;
}
void Otrezok::printOtrezok(Otrezok O)
{
	printf("(%d,%d-%d,%d)\n", O.listdot[0], O.listdot[1]);
}
