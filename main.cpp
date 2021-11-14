#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include "Triangle.h"
#include"Dot.h"
#include "Otrezok.h"
int main()
{
	do {
		int count;
		printf("Choose the figure:\n1 -(Touchka)\n2 - Otrezok\n3 - Triangle\n4 - Squaere\n5 - Pentagon\n");
		scanf("%d", &count);
		switch (count)
		{
		case 1:
			printf("Your chose is Dot\n");
			Dot dot;
		
			printf("Example: ");
			dot = dot.initDot(0, 0);
			dot.printDot(dot);
			printf("\nSet the coordinates of touchka\n");
			dot = dot.setDot(dot);
			printf("The coordinates of Touchka is: ");
			dot.printDot(dot);
			break;
		
		case 2:
			printf("Your chose is Otrezok\n");
		
			printf("Example: ");

	
			printf("\nSet the coordinates of Otrezok\n");
	
			printf("The coordinates of Otrezok is: ");

			break;
		case 3:
			printf("Your chose is Triangle\n");
			
			printf("Example: ");
			
			printf("\nSet the coordinates of Triangle\n");
			
			printf("The coordinates of Triangle is: ");
			
			break;
		case 4:
			printf("Your chose is Squaer\n");
		
			printf("Example: ");
		
		
			printf("\nSet the coordinates of Squaer\n");
	
			printf("The coordinates of Squaer is: ");
	
			break;
		case 5:
			printf("Your chose is Pentagon\n");

			printf("Example: ");
	

			printf("\nSet the coordinates of Pentagon\n");

			printf("The coordinates of Pentagona is: ");
	

			break;

		}
		printf("\n\nDo you want to escape - ESC?\n");

	} while (_getch() != 27);

	return 0;
}
