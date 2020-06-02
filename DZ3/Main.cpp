#include <iostream>
#include <string>
#include <thread>
#include "Polje.h"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

int main()
{
	int ax;
	int ay;
	int bx;
	int by;
	int x, y;

	cout << "A redak: ";
	cin >> ay;
	ay--;

	cout << "A stupac: ";
	cin >> ax;
	ax--;

	cout << "B redak: ";
	cin >> by;
	by--;

	cout << "B stupac: ";
	cin >> bx;
	bx--;

	system("cls");

	Polje polje[40][20];

	polje[ax][ay].A(true);
	polje[bx][by].B(true);

	for (int i = 0; i < 9; i++)
	{
		polje[15][i].Zid(true);

	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			polje[j][i].ispis();
		}
		cout << endl;
	}

	x = ax;
	y = ay;

	polje[x][y].trenutnoStanje = true;

	do
	{
		if (x < bx)
		{
			if (polje[x + 1][y].zid)
			{
				polje[x][y].trenutnoStanje = false;
				y++;
				polje[x][y].trenutnoStanje = true;
			}
			else
			{
				polje[x][y].trenutnoStanje = false;
				x++;
				polje[x][y].trenutnoStanje = true;
			}
		}

		else if (x > bx)
		{
			if (polje[x - 1][y].zid)
			{
				polje[x][y].trenutnoStanje = false;
				y++;
				polje[x][y].trenutnoStanje = true;
			}
			else
			{
				polje[x][y].trenutnoStanje = false;
				x--;
				polje[x][y].trenutnoStanje = true;
			}
		}

		else if (y > by)
		{
			polje[x][y].trenutnoStanje = false;
			y--;
			polje[x][y].trenutnoStanje = true;

		}

		else if (y < by)
		{
			polje[x][y].trenutnoStanje = false;
			y++;
			polje[x][y].trenutnoStanje = true;

		}

		sleep_for(milliseconds(100));
		system("cls");

		for (int i = 0; i < 20; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				polje[j][i].ispis();
			}
			cout << endl;
		}

	} while (x != bx || y != by);

	return 0;
}
