#include "Polje.h"

void Polje::ispis()
{
	if (zid)
	{
		cout << "|";
	}
	else if (a)
	{
		cout << "A";
	}
	else if (trenutnoStanje)
	{
		cout << "X";
	}
	else if (b)
	{
		cout << "B";
	}
	else
	{
		cout << "-";
	}
}

void Polje::Zid(bool zid)
{
	this->zid = zid;
}

void Polje::A(bool a)
{
	this->a = a;
}

void Polje::B(bool b)
{
	this->b = b;
}