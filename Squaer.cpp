#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Squaer.h"
#include "Dot.h"
void Squaer::initSquaer(int initCordX, int initCordY) {

	for (int i = 0; i < 4; i++) {
		listdot_S[i] = listdot_S[i].initDot(initCordX, initCordY);
	}
}
Squaer Squaer::setSquaer(Squaer Squaer) {
	for (int i = 0; i < 4; i++) {
		Squaer.listdot_S[i] = Squaer.listdot_S[i].setDot(Squaer.listdot_S[0]);
	}
	return Squaer;
}
void Squaer::printSquaer(Squaer Squaer) {
	for (int i = 0; i < 4; i++) {
		printf("(%d,%d) ", Squaer.listdot_S[i], Squaer.listdot_S[i]);

	}
}
