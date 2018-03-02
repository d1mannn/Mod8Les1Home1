#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <locale.h>
#include "Header.h"
using namespace std;

int TaskNumb()
{	
	setlocale(LC_ALL, "Rus");
	int task;
	cout << "Введите номер задания - ";
	cin >> task;
	return task;
}

void Greeting()
{
	char name[50], greet[] = "HELLO, ";
	cout << "Enter your name - ";
	fgets(name, 50, stdin);
	printf("%s %s", greet, name);
}

void WeAreChampions()
{
	char name[50], greet[] = "F*CK YEAH!!! WE ARE CHAMPIONS!!!";
	cout << "Write your team's name - ";
	fgets(name, 50, stdin);
	printf("%s %s", name, greet);
}

int FirstName(char *arr)
{	
	printf("Enter your first name? please - ");
	fgets(arr, 50, stdin);
	return *arr;
}

int LastName(char *arr)
{
	printf("Enter your last name? please - ");
	fgets(arr, 50, stdin);
	return *arr;
}

void Capital()
{
	char country[50], city[50];
	printf("Enter a name of your country - ");
	gets_s(country);
	printf("Enter a capital - ");
	gets_s(city);
	printf("\n%s is a capital of %s\n", city, country);
}

void CountOfChars()
{
	char name[50], count = 0;
	cout << "Write your team's name - ";
	gets_s(name);
	int length = strlen(name);
	for (int i = 0; i < length; i++)
	{
		if (name[i] != ' ')
			count++;
	}
	printf("Quantity of \'spaces\' is %d\n", count);
}

int LengthOfStr()
{	
	char text[50];
	printf("Enter a text - ");
	fgets(text, 49, stdin);
	int length = strlen(text);
	if (length % 2 == 0)
		return 0;
	else
		return 1;
}