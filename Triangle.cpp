#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Triangle.h"
#include "Dot.h"
void Triangle::initTriangle(int initCordX, int initCordY) {
	
		for (int i = 0; i < 3; i++) {
			listdot_T[i] = listdot_T[i].initDot(initCordX, initCordY);
		}
}	
Triangle Triangle::setTriangle(Triangle Triangle) {
	for (int i = 0; i < 3; i++) {
		Triangle.listdot_T[i] = Triangle.listdot_T[i].setDot(Triangle.listdot_T[0]);
	}
	return Triangle;
	}
void Triangle::printTriangle(Triangle Triangle) {
	for (int i = 0; i < 3; i++) {
		printf("(%d,%d) ", Triangle.listdot_T[i], Triangle.listdot_T[i]);

	}
	}

