#pragma once

class Dot
{
public:
	Dot();
	Dot(int Param);
	Dot(int CordX, int CordY);
	Dot setDot(Dot &point);
	void printDot(Dot point);
	friend void reset(Dot& dot);//дружественная функция, сбрасывает координат точки до нуля
	static int s_count;
	static int s_getCount() {//статическая переменная для подсчета количества обьектов типа точка
		return s_count;
	}

private:
	int CordX;
	int CordY;
	
	
	
};

