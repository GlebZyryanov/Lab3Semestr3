#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Pentagon.h"
#include "Dot.h"
void Pentagon::initPentagon(Pentagon *Pentagon, int initCordX, int initCordY) {

	for (int i = 0; i < 5; i++) {
		listdot_P[i].initDot(&listdot_P[i], initCordX, initCordY);
	}
}
Pentagon Pentagon::setPentagon(Pentagon &Pentagon) {
	for (int i = 0; i < 5; i++) {
		listdot_P[i].setDot(listdot_P[i]);
	}
	return Pentagon;
}
void Pentagon::printPentagon(Pentagon Pentagon) {
	for (int i = 0; i < 4; i++) {
		printf("(%d,%d) ", Pentagon.listdot_P[i], Pentagon.listdot_P[i]);

	}
}