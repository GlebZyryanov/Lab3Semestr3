#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Dot.h"

Dot Dot::initDot(int initCordX, int initCordY) {
	Dot dot;
	dot.CordX = initCordX;
	dot.CordY = initCordY;
	return dot;
}
Dot Dot::setDot(Dot point) {
	scanf("%d", &point.CordX);
	scanf("%d", &point.CordY);
	
	return point;
}
void Dot::printDot(Dot point) {
	printf("(%d,%d)", point.CordX, point.CordY);
}
