#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include "Dot.h"

Dot::Dot() {
	CordX = 0;
	CordY = 0;
}
Dot::Dot(int Param) {
	CordX = Param;
	CordY = Param;
}
Dot::Dot(int initCordX, int initCordY) {
	
	
	CordX = initCordX;
	CordY = initCordY;
	s_count++;
	
}
Dot Dot::setDot(Dot &point) {
	scanf("%d", &CordX);
	scanf("%d", &CordY);
	
	return point;
}
void Dot::printDot(Dot point) {
	printf("(%d,%d)", (*this).CordX, (*this).CordY);//использование указателя this 
}
void reset(Dot& dot)
{
	dot.CordX = 0;
	dot.CordY = 0;
}
