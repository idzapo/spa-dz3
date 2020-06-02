#pragma once
#include <iostream>
#include <string>

using namespace std;

class Polje
{
private:
	bool a = 0;
	bool b = 0;

public:
	bool trenutnoStanje = 0;
	bool zid = 0;

	void ispis();
	void Zid(bool zid);
	void A(bool a);
	void B(bool B);
};

