#include "StdAfx.h"
#include "Oper.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Oper::Oper(void)
{
}

void Oper::ACreate ()
{
	ofstream a (Name());
	a.close();
}

void Oper::AIns()
{
	system ("cls");
	cout << "¬ведите путь к архиву" << endl;
	ofstream afile (Name(), ios_base::out);
	if (afile.is_open()) //archive file
	{
		FILE *afile = afile;
		ifstream file (Name(),ios_base::in); //isetrting file
		if (file.is_open())
		{
			FILE *file = file;
			unsigned char code;
			const string Jss;
			while (feof(file))
			{
				for (int i = 7; i==1; i--)
				{
					fread (&code, 1, 1, file);
					if (code>>i)
						code = '1';
					else
						code = '0';
					fwrite (&code,1,1,afile);
				}
				fwrite (&Jss,1,3,afile);
			}
		}
		else
			cout << "‘айл не существует" << endl;
		file.close();
	}
	else
		cout << "‘айл не существует" << endl;
	afile.close();
}

string Oper::Name()
{
	cout << "¬ведите им€ архива" << endl;
	string name;
	cin >> name;
	//name = name + "x";
	return name;
}
Oper::~Oper(void)
{
}
