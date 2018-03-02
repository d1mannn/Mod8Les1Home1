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
				/*1.	Составить программу, которая:
				a.запрашивает имя человека и повторяет его на экране;
				b.запрашивает имя человека и повторяет его на экране с приветствием.*/
				Greeting();
			} break;

			case 2:
			{
				//2.	Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".
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
				/*4.	Составить программу, которая запрашивает название государства и его столицы,
					а затем выводит сообщение : "Столица государства ... — город ..." (на месте многоточий должны быть выведены соответствующие значения).*/
				Capital();
			} break;

			case 5:
			{
				//5.	Дано название футбольного клуба.Определить количество символов в нем.
				CountOfChars();
			} break;

			case 6:
			{
				//6.	Дано название города.Определить, четно или нет количество символов в нем
				int res = LengthOfStr();
				if (res == 1)
					cout << "Quantity of numbers is even" << endl;
				else
					cout << "Quantity of numbers isn't even" << endl;
			}
		}
	} while (task > 0);
}