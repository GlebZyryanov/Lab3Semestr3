#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Otrezok.h"
#include "Dot.h"


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
Otrezok::Otrezok( int initCordX, int initCordY) {

	for (int i = 0; i < 2; i++) {
		listdot[i] = Dot(initCordX, initCordY);
	}
}
Otrezok::Otrezok() {
	for (int i = 0; i < 2; i++) {
		listdot[i] = Dot();
	}
}
Otrezok::Otrezok(int Param) {
	for (int i = 0; i < 2; i++) {
		listdot[i] = Dot(Param);
	}
}
