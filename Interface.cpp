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
		cout << "���������" << endl
		<< "����:" << endl
		<< "1) ������� �����" << endl
		<< "2) �������� ����� � �����" << endl
		<< "3) ������� �� ������" << endl
		<< "4) �����" << endl;

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
			cout << "�������� ����" << endl;
			system ("pause");
			break;
		}
	}
}


Interface::~Interface(void)
{
}
