#pragma once

class Dot
{
public:
	Dot initDot(Dot* dot,int CordX, int CordY);
	Dot setDot(Dot &point);
	void printDot(Dot point);
	friend void reset(Dot& dot);//������������� �������, ���������� ��������� ����� �� ����
	
private:
	int CordX;
	int CordY;
	
	
};

