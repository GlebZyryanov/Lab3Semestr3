#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Squaer.h"
#include "Dot.h"
void Squaer::initSquaer(Squaer* sqauer,int initCordX, int initCordY) {

	for (int i = 0; i < 4; i++) {
		listdot_S[i].initDot(&listdot_S[i], initCordX, initCordY);
	}
}
Squaer Squaer::setSquaer(Squaer &Squaer) {
	for (int i = 0; i < 4; i++) {
		listdot_S[i].setDot(listdot_S[i]);
	}
	return Squaer;
}
void Squaer::printSquaer(Squaer Squaer) {
	for (int i = 0; i < 4; i++) {
		printf("(%d,%d) ", Squaer.listdot_S[i], Squaer.listdot_S[i]);

	}
}
