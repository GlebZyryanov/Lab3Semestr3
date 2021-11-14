#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include "Triangle.h"
#include"Dot.h"
#include "Otrezok.h"
#include"Squaer.h"
#include"Pentagon.h"
int main()
{
	do {
		int count;
		printf("Choose the figure:\n1 -(Touchka)\n2 - Otrezok\n3 - Triangle\n4 - Squaere\n5 - Pentagon\n");
		scanf("%d", &count);
		switch (count)
		{
		case 1:
		{
			Dot* arr = new Dot[3];//динамический массив обьектов
			printf("Your chose is Touchka\n");
			printf("Example: ");
			arr[0] = arr[0].initDot(0, 0);
			arr[0].printDot(arr[0]);
			for (int i = 0; i < 3; i++) {
				arr[i] = arr[i].initDot(0, 0);
	
				printf("\nSet the coordinates of Touchka\n");
				arr[i] = arr[i].setDot(arr[i]);
				printf("The coordinates of Touchka is: ");
				arr[i].printDot(arr[i]);
			}
			delete[] arr;
			break;
		}
		case 2:
		{
			printf("Your chose is Otrezok\n");
			Otrezok* otr = new Otrezok;
			printf("Example: ");
			otr->initOtrezok(0, 0);
			otr->printOtrezok(*otr);

			printf("\nSet the coordinates of Otrezok\n");
			*otr = otr->setOtrezok(*otr);
			printf("The coordinates of Otrezok is: ");
			otr->printOtrezok(*otr);
			delete otr;
			break;
		}
		case 3:
			printf("Your chose is Triangle\n");
			Triangle tr;
			printf("Example: ");
			tr.initTriangle(0, 0);
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
			sq.initSquaer(0, 0);
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
			pt.initPentagon(0, 0);
			pt.printPentagon(pt);
			printf("\nSet the coordinates of Pentagon\n");
			pt = pt.setPentagon(pt);
			printf("The coordinates of Pentagona is: ");
			pt.printPentagon(pt);

			break;

		}
		printf("\n\nDo you want to escape - ESC?\n");

	} while (_getch() != 27);

	return 0;
}
