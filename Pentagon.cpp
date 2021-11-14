#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Pentagon.h"
#include "Dot.h"
void Pentagon::initPentagon(int initCordX, int initCordY) {

	for (int i = 0; i < 4; i++) {
		listdot_P[i] = listdot_P[i].initDot(initCordX, initCordY);
	}
}
Pentagon Pentagon::setPentagon(Pentagon Pentagon) {
	for (int i = 0; i < 4; i++) {
		Pentagon.listdot_P[i] = Pentagon.listdot_P[i].setDot(Pentagon.listdot_P[0]);
	}
	return Pentagon;
}
void Pentagon::printPentagon(Pentagon Pentagon) {
	for (int i = 0; i < 4; i++) {
		printf("(%d,%d) ", Pentagon.listdot_P[i], Pentagon.listdot_P[i]);

	}
}