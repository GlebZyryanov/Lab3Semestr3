#pragma once

class Dot
{
public:
	Dot initDot(Dot* dot,int CordX, int CordY);
	Dot setDot(Dot &point);
	void printDot(Dot point);
	friend void reset(Dot& dot);//������������� �������, ���������� ��������� ����� �� ����
	static int s_count;
	static int s_getCount() {//����������� ���������� ��� �������� ���������� �������� ���� �����
		return s_count;
	}

private:
	int CordX;
	int CordY;
	
	
	
};

