#pragma once
#include"Dot.h"
class Triangle
	{
	public:
		void initTriangle(int initCordX, int initCordY);
		Triangle setTriangle(Triangle Triangle);
		void printTriangle(Triangle Triangle);
	private:
		Dot listdot_T[3];

	};


