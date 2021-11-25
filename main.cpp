#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include "Triangle.h"
#include"Dot.h"
#include "Otrezok.h"
#include"Squaer.h"
#include"Pentagon.h"
#include"Number.h"
int main()
{
	do {
		int count;
		
		printf("Choose the figure:\n1 -(Touchka)\n2 - Otrezok\n3 - Triangle\n4 - Squaere\n5 - Pentagon\n");
		printf("Demonstrate Peregruz++ - 6\nDemonstrate peregruz + - 7\n");
		scanf("%d", &count);
		switch (count)
		{
		case 1:
		{
			Dot touch;
			touch.initDot(&touch, 0, 0);
			printf("You chose the Touchka\n");
			printf("Set the coordinates of Touchka\n");
			touch.setDot(touch);
			printf("The result is:");
			touch.printDot(touch);
			reset(touch);//дружественная функция, сбрасывает значение координат до нуля
			printf("\nThe result after reset is:");
			touch.printDot(touch);
			break;
		}
		case 2:
		{
			printf("Your chose is Otrezok\n");
			Otrezok otr{};
			otr.initOtrezok(&otr, 0, 0);
			printf("Example: ");
			otr.printOtrezok(otr);
			printf("\nSet the coordinates of Otrezok\n");
			otr = otr.setOtrezok(otr);
			printf("The coordinates of Otrezok is: ");
			otr.printOtrezok(otr);

			break;
		}
		case 3:
			printf("Your chose is Triangle\n");
			Triangle tr;
			printf("Example: ");
			tr.initTriangle(&tr,0, 0);
			tr.printTriangle(tr);
			printf("\nSet the coordinates of Triangle\n");
			tr = tr.setTriangle(tr);
			printf("The coordinates of Triangle is: ");
			tr.printTriangle(tr);
			break;
		case 4:
			printf("Your chose is Squaer\n");
			Squaer sq;
			printf("Example: ");
			sq.initSquaer(&sq,0, 0);
			sq.printSquaer(sq);
			printf("\nSet the coordinates of Squaer\n");
			sq = sq.setSquaer(sq);
			printf("The coordinates of Squaer is: ");
			sq.printSquaer(sq);
			break;
		case 5:
			printf("Your chose is Pentagon\n");
			Pentagon pt;
			printf("Example: ");
			pt.initPentagon(&pt,0, 0);
			pt.printPentagon(pt);
			printf("\nSet the coordinates of Pentagon\n");
			pt = pt.setPentagon(pt);
			printf("The coordinates of Pentagona is: ");
			pt.printPentagon(pt);

			break;
		case 6:
			Number c1, c2;
			printf("%d , ", c1);
			printf("%d", c2);
			++c1;//префиксная перегрузка унарного оператора ++
			++c2;
			++c2;
			printf("\n%d , ", c1);
			printf("%d", c2);
			c1++;//постфиксная перегрузка унарного оператора ++
			c2++;
			c2++;
			printf("\n%d , ", c1);
			printf("%d", c2);
			break;

		}
		printf("\n\nDo you want to escape - ESC?\n");

	} while (_getch() != 27);

	return 0;
}
