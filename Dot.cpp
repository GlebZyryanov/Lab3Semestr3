#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include "Dot.h"

Dot Dot::initDot(Dot *dot,int initCordX, int initCordY) {//возврат значений по адресу
	
	
	(*dot).CordX = initCordX;
	(*dot).CordY = initCordY;

	return *dot;
}
Dot Dot::setDot(Dot &point) {//возврат по ссылке
	scanf("%d", &CordX);
	scanf("%d", &CordY);
	
	return point;
}
void Dot::printDot(Dot point) {
	printf("(%d,%d)", (*this).CordX, (*this).CordY);//использование указателя this 
}
