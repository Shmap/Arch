#include "StdAfx.h"
#include "Interface.h"
#include "Oper.h"
#include <iostream>

using namespace std;

Interface::Interface(void)
{
	system ("cls");
	setlocale(LC_ALL, "rus");

	bool inMenu = true;
	Oper p;
	while (inMenu == true)
	{
		cout << "Архиватор" << endl
		<< "Меню:" << endl
		<< "1) Создать архив" << endl
		<< "2) Добавить файлы в архив" << endl
		<< "3) Извлечь из архива" << endl
		<< "4) Выход" << endl;

		int a;
		cin >> a;
		switch (a)
		{
		case (1):
			p.ACreate();
			break;
		case (2):
			p.AIns();
			break;
		case (4):
			inMenu = false;
			break;
			
		default: 
			cout << "Неверный ввод" << endl;
			system ("pause");
			break;
		}
	}
}


Interface::~Interface(void)
{
}
