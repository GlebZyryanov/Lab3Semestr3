#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include "Triangle.h"
#include"Dot.h"
#include "Otrezok.h"
#include"Squaer.h"
#include"Pentagon.h"
#include"Number.h"
#include<String>
#include<iostream>
int Dot::s_count = 0;
int main()
{
	do {
		int count;
	
		printf("Choose the figure:\n1 -(Touchka)\n2 - Otrezok\n3 - Triangle\n4 - Squaere\n5 - Pentagon\n");
		printf("Demonstrate Peregruz++ - 6\nArray type String - 7\n8-lab8\n");
		scanf("%d", &count);
		switch (count)
		{
		case 1:
		{//в классе точка продемонстрированы возврат через указатель, возврат через ссылку, работа с указателем this и дружественна€ функци€ reset
			Dot touch;
			
			touch.initDot(&touch, 0, 0);
			printf("You chose the Touchka\n");
			printf("Set the coordinates of Touchka\n");
			touch.setDot(touch);
			printf("The result is:");
			touch.printDot(touch);
			reset(touch);//дружественна€ функци€, сбрасывает значение координат до нул€
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
			tr.initTriangle(&tr, 0, 0);
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
			sq.initSquaer(&sq, 0, 0);
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
			pt.initPentagon(&pt, 0, 0);
			pt.printPentagon(pt);
			printf("\nSet the coordinates of Pentagon\n");
			pt = pt.setPentagon(pt);
			printf("The coordinates of Pentagona is: ");
			pt.printPentagon(pt);

			break;
		case 6:
		{
			Number c1, c2, c3;
			c1++;//
			c2++;
			++c1;
			++c2;
			c3 = c1 + c2;
			printf("c1 = %d\n", c1);
			printf("c2 = %d\n", c2);
			printf("c3 = %d\n", c3);
			break;
		}
		case 7: 
			{//тк в моей программе изначально не было массива типа char, то привожу пример работы с массивом типа string
			//статический массив
			const int N_DAYS = 7;
			std::string daysOfWeek[N_DAYS] = { "Sunday", "Monday", "Tuesday",
			"Wednesday", "Thirsday", "Friday", "Saturday" };

			// ¬ывод массива строк на экран
			printf("Array of days\n");
			for (int i = 0; i < N_DAYS; i++)
			{
				std::cout << "Day " << i << " = " << daysOfWeek[i] << std::endl;
				
			}

			// 2. »нициализаци€ без указани€ размера массива
			std::string Numbers[]{ "One", "Two", "Three" };

			// ¬ывод массива на экран
			printf("\nArray of numbers: ");
			for (int i = 0; i < 3; i++)
				std::cout << Numbers[i] << " ";
			/// <summary>
			/// ƒинамический массив типа string 
			/// </summary>
			/// <returns></returns>
			
			std::string* AS; // указатель на тип string
			int n; // количество элементов в массиве AS

			std::cout << "\nn = ";
			std::cin >> n;
			

			AS = new std::string[n];

			//  «аполнение массива AS произвольными значени€ми
			for (int i = 0; i < n; i++)
				AS[i] = (char)('1' + i);

			//¬ывод массива AS
			std::cout << "\nArray AS:" << std::endl;
			for (int i = 0; i < n; i++) {
				std::cout << "AS[" << i << "] = " << AS[i].c_str() << std::endl;
			}
			delete[] AS;
			break;
			}
		case 8: {
			Dot f;
			f.s_getCount;
			int n = f.s_count;   
			printf("\nStatic method demo:%d\n",n);

			break;
		}
		}
		printf("\n\nDo you want to escape - ESC?\n");

	} while (_getch() != 27);

	return 0;
}
