#include <iostream>
#include <stdio.h>
#include <locale.h>
#include "Header.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int task;
	do
	{
		task = TaskNumb();
		cin.get();
		switch (task)
		{
			case 1:
			{
				/*1.	��������� ���������, �������:
				a.����������� ��� �������� � ��������� ��� �� ������;
				b.����������� ��� �������� � ��������� ��� �� ������ � ������������.*/
				Greeting();
			} break;

			case 2:
			{
				//2.	��������� ���������, ������� ����������� �������� ���������� ������� � ��������� ��� �� ������ �� ������� "� ��� �������!".
				WeAreChampions();
			} break;

			case 3:
			{
				char name[50], surname[50];
				FirstName(name);
				LastName(surname);
				printf("Nice to meet you, %s %s\n", name, surname);
			} break;

			case 4:
			{
				/*4.	��������� ���������, ������� ����������� �������� ����������� � ��� �������,
					� ����� ������� ��������� : "������� ����������� ... � ����� ..." (�� ����� ���������� ������ ���� �������� ��������������� ��������).*/
				Capital();
			} break;

			case 5:
			{
				//5.	���� �������� ����������� �����.���������� ���������� �������� � ���.
				CountOfChars();
			} break;

			case 6:
			{
				//6.	���� �������� ������.����������, ����� ��� ��� ���������� �������� � ���
				int res = LengthOfStr();
				if (res == 1)
					cout << "Quantity of numbers is even" << endl;
				else
					cout << "Quantity of numbers isn't even" << endl;
			}
		}
	} while (task > 0);
}