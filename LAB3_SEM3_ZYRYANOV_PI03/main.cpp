#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include "Triangle.h"
#include"Dot.h"
#include "Otrezok.h"
#include"Squaer.h"
#include"Pentagon.h"
#include"Number.h"
#include "SomeClass.h"
#include<String>
#include<iostream>
int Dot::s_count = 0;
int main()
{

	do {
		int count;

		printf("1 - lab9\nelse - previous labs\n");
		
			scanf("%d", &count);
			if (count == 1) {
				Dot dot;//�� ��������� ���������� ����������� ()
				printf("\nDEFAULT CONSTRUCTER: ");
				dot.printDot(dot);
				Dot* dotdinam = new Dot(22);//������������ ������ 
				printf("\nDinamicObject+oneParametrConstructer: ");
				dotdinam->printDot(*dotdinam);
				Dot static dotstatic(11, 11);
				printf("\nStaticOblect+twoParamConstruct: ");
				dotstatic.printDot(dotstatic);//����������� ������

				Otrezok otrezok;//�� ��������� ���������� ����������� ()
				printf("\nDEFAULT CONSTRUCTER: ");
				otrezok.printOtrezok(otrezok);
				Otrezok* otrezokdinam = new Otrezok(22);//������������ ������ 
				printf("\nDinamicObject+oneParametrConstructer: ");
				otrezokdinam->printOtrezok(*otrezokdinam);
				Otrezok static otrezokstatic(11, 11);
				printf("\nStaticOblect+twoParamConstruct: ");
				otrezokstatic.printOtrezok(otrezokstatic);//����������� ������

				Triangle triangle;//�� ��������� ���������� ����������� ()
				printf("\nDEFAULT CONSTRUCTER: ");
				triangle.printTriangle(triangle);
				Triangle* triangledinam = new Triangle(22);//������������ ������ 
				printf("\nDinamicObject+oneParametrConstructer: ");
				triangledinam->printTriangle(*triangledinam);
				Triangle static trianglestatic(11, 11);
				printf("\nStaticOblect+twoParamConstruct: ");
				trianglestatic.printTriangle(trianglestatic);//����������� ������

				Squaer squaer;//�� ��������� ���������� ����������� ()
				printf("\nDEFAULT CONSTRUCTER: ");
				squaer.printSquaer(squaer);
				Squaer* squaerdinam = new Squaer(22);//������������ ������ 
				printf("\nDinamicObject+oneParametrConstructer: ");
				squaerdinam->printSquaer(*squaerdinam);
				Squaer static squaerstatic(11, 11);
				printf("\nStaticOblect+twoParamConstruct: ");
				squaerstatic.printSquaer(squaerstatic);//����������� ������

				Pentagon pentagon;//�� ��������� ���������� ����������� ()
				printf("\nDEFAULT CONSTRUCTER: ");
				pentagon.printPentagon(pentagon);
				Pentagon* pentagondinam = new Pentagon(22);//������������ ������ 
				printf("\nDinamicObject+oneParametrConstructer: ");
				pentagondinam->printPentagon(*pentagondinam);
				Pentagon  static pentagonstatic(11, 11);
				printf("\nStaticOblect+twoParamConstruct: ");
				pentagonstatic.printPentagon(pentagonstatic);//����������� ������
				//������������ ������������ ����������� � ��������� ������
				setlocale(LC_ALL, "rus");
				SomeClass S("lab9");
				SomeClass s2 = S;
				std::cout << S.getString() << '\n';



			}
		
			else {
				int flag;
				try {//����� try catche ������������ ��� ��������, ���� ���� ������ 8 � ������ 1, ��
					scanf("%d", &flag);
					if (flag > 8 || flag<1) {
						throw 123;//throw ���������� ����������, �� ��������� ������ ����� try � �������� � ���������� ���� catch-�����
					}
					if (flag == 1)
					{

						//� ������ ����� ������������������ ������� ����� ���������, ������� ����� ������, ������ � ���������� this � ������������� ������� reset
						Dot touch;
						printf("You chose the Touchka\n");
						printf("Set the coordinates of Touchka\n");
						touch.setDot(touch);
						printf("The result is:");
						touch.printDot(touch);
						reset(touch);//������������� �������, ���������� �������� ��������� �� ����
						printf("\nThe result after reset is:");
						touch.printDot(touch);
					}

					if (flag == 2) {

						printf("Your chose is Otrezok\n");
						Otrezok otr{};


						printf("Example: ");
						otr.printOtrezok(otr);
						printf("\nSet the coordinates of Otrezok\n");
						otr = otr.setOtrezok(otr);
						printf("The coordinates of Otrezok is: ");
						otr.printOtrezok(otr);


					}
					if (flag == 3) {
						printf("Your chose is Triangle\n");
						Triangle tr;
						printf("Example: ");

						tr.printTriangle(tr);
						printf("\nSet the coordinates of Triangle\n");
						tr = tr.setTriangle(tr);
						printf("The coordinates of Triangle is: ");
						tr.printTriangle(tr);
					}
					if (flag == 4) {
						printf("Your chose is Squaer\n");
						Squaer sq;
						printf("Example: ");

						sq.printSquaer(sq);
						printf("\nSet the coordinates of Squaer\n");
						sq = sq.setSquaer(sq);
						printf("The coordinates of Squaer is: ");
						sq.printSquaer(sq);
					}
					if (flag == 5) {
						printf("Your chose is Pentagon\n");
						Pentagon pt;
						printf("Example: ");

						pt.printPentagon(pt);
						printf("\nSet the coordinates of Pentagon\n");
						pt = pt.setPentagon(pt);
						printf("The coordinates of Pentagona is: ");
						pt.printPentagon(pt);

					}
					if (flag == 6) {

						Number c1, c2, c3;
						c1++;//
						c2++;
						++c1;
						++c2;
						c3 = c1 + c2;
						printf("c1 = %d\n", c1);
						printf("c2 = %d\n", c2);
						printf("c3 = %d\n", c3);
					}

					if (flag == 7) {
						//�� � ���� ��������� ���������� �� ���� ������� ���� char, �� ������� ������ ������ � �������� ���� string
						//����������� ������
						const int N_DAYS = 7;
						std::string daysOfWeek[N_DAYS] = { "Sunday", "Monday", "Tuesday",
						"Wednesday", "Thirsday", "Friday", "Saturday" };

						// ����� ������� ����� �� �����
						printf("Array of days\n");
						for (int i = 0; i < N_DAYS; i++)
						{
							std::cout << "Day " << i << " = " << daysOfWeek[i] << std::endl;

						}

						// 2. ������������� ��� �������� ������� �������
						std::string Numbers[]{ "One", "Two", "Three" };

						// ����� ������� �� �����
						printf("\nArray of numbers: ");
						for (int i = 0; i < 3; i++)
							std::cout << Numbers[i] << " ";
						/// <summary>
						/// ������������ ������ ���� string
						/// </summary>
						/// <returns></returns>

						std::string* AS; // ��������� �� ��� string
						int n; // ���������� ��������� � ������� AS

						std::cout << "\nn = ";
						std::cin >> n;


						AS = new std::string[n];

						//  ���������� ������� AS ������������� ����������
						for (int i = 0; i < n; i++)
							AS[i] = (char)('1' + i);

						//����� ������� AS
						std::cout << "\nArray AS:" << std::endl;
						for (int i = 0; i < n; i++) {
							std::cout << "AS[" << i << "] = " << AS[i].c_str() << std::endl;
						}
						delete[] AS;
					}

					if (flag == 8) {
						Dot f;
						f.s_getCount;
						int n = f.s_count;
						printf("\nStatic method demo:%d\n", n);

						break;

					}
				}
		
				/// catch-���� � ������������ ����, ������� ��, ��� ���������  throw � �������� ���� ���. 
				//���� ���� ������ ������������� ��������������� ��� try-������. ������� ��� �� ������ �� ���������.
				//���� � try - ����� ���������� �� ��������������, catch - ���� �� ���������.��������� ��� �������.
			
				catch (int i) {//
					cout << "Error " << i << " The flag isnt range !" << endl;
				}

			}
			printf("\n\nDo you want to escape - ESC?\n");
		

	} while (_getch() != 27);

	return 0;
}

