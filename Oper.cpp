#include "StdAfx.h"
#include "Oper.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

Oper::Oper(void)
{
}

void Oper::ACreate ()
{
	cout << "������� ��� ������" << endl;
	char name[20];
	cin >> name;
	ofstream a (name);
	a.close();
}

void Oper::AIns()
{
	system ("cls");
	cout << "������� ��� ������" << endl;
	
	FILE *archive;
	char archiveName[20];
	cin >> archiveName;
	//cin.getline(archiveName, 20);
	archive=fopen(archiveName, "a+b");

	std::vector<char> (bufer);
	bool inMenu = true;
	while (inMenu)
	{
		system ("cls");
		cout << "1) �������� ���� � �����" << endl
			<< "2) ���������� ���������� ����� � �����" << endl;
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "������� ��� �����" << endl;
			FILE *source;
			char sourceName[20];
			//cin.getline(sourceName, 20);
			cin >> sourceName;
			source = fopen (sourceName, "rb");
			fread(&bufer, 1, sizeof(source), source);
			fwrite (&bufer, 1, sizeof(source), archive);
			fclose(source);
			break;
		case 2:
			inMenu=false;
			break;
		default:
			cout << "������ ���-�� �� ��" << endl;
			break;
		}
	}
}

char* Oper::Name()
{
	cout << "������� ��� ������" << endl;
	char name [50];
	cin.getline(name, 50);
	//name = name + "x";
	char *pname;
	pname = name;
	return pname;
}
Oper::~Oper(void)
{
}
