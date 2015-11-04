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
	cout << "Введите имя архива" << endl;
	char name[20];
	cin >> name;
	ofstream a (name);
	a.close();
}

void Oper::AIns()
{
	system ("cls");
	cout << "Введите имя архива" << endl;
	
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
		cout << "1) Засунуть файл в архив" << endl
			<< "2) Прекратить засовывать файлы в архив" << endl;
		int a;
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "Введите имя файла" << endl;
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
			cout << "Нажато что-то не то" << endl;
			break;
		}
	}
}

char* Oper::Name()
{
	cout << "Введите имя архива" << endl;
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
