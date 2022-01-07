	#define _CRT_SECURE_NO_WARNINGS
	#include<stdio.h>
	#include "Pentagon.h"
	#include "Dot.h"

Pentagon::Pentagon( int initCordX, int initCordY) {

	for (int i = 0; i < 5; i++) {
		listdot_P[i]=Dot( initCordX, initCordY);
	}
}
Pentagon::Pentagon(int Param) {

	for (int i = 0; i < 5; i++) {
		listdot_P[i] = Dot(Param);
	}
}
Pentagon::Pentagon() {

	for (int i = 0; i < 5; i++) {
		listdot_P[i] = Dot();
	}
}
	
	Pentagon Pentagon::setPentagon(Pentagon &Pentagon) {
		for (int i = 0; i < 5; i++) {
			listdot_P[i].setDot(listdot_P[i]);
		}
		return Pentagon;
	}
	void Pentagon::printPentagon(Pentagon Pentagon) {
		for (int i = 0; i < 5; i++) {
			printf("(%d,%d) ", Pentagon.listdot_P[i], Pentagon.listdot_P[i]);

		}
	}
	