#pragma once

class Dot
{
public:
	Dot initDot(Dot* dot,int CordX, int CordY);
	Dot setDot(Dot &point);
	void printDot(Dot point);
	
private:
	int CordX;
	int CordY;
	
	
};

