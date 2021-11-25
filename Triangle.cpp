#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Triangle.h"
#include "Dot.h"
void Triangle::initTriangle(Triangle *Triangle,int initCordX, int initCordY) {
	
		for (int i = 0; i < 3; i++) {
			listdot_T[i].initDot(&listdot_T[i], initCordX, initCordY);
		}
}	
Triangle Triangle::setTriangle(Triangle &Triangle) {
	for (int i = 0; i < 3; i++) {
		listdot_T[i].setDot(listdot_T[i]);
	}
	return Triangle;
	}
void Triangle::printTriangle(Triangle Triangle) {
	for (int i = 0; i < 3; i++) {
		printf("(%d,%d) ", Triangle.listdot_T[i], Triangle.listdot_T[i]);

	}
	}
	
