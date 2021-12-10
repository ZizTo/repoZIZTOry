#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

const int n = 3;
char** pol = new char*[n];
bool hodit = 0; char endg = '0'; int hod = 1;
bool playnew = true;
int Xw = 0; int Ow = 0; int nich = 0;


void postroika();

void proverka();

int main() {
	srand(time(0));
	while (playnew) {
		for (int i = 0; i < n; i++)
		{
			pol[i] = new char[n];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				pol[i][j] = '-';
			}
		}

		postroika();

		while (endg == '0' && hod < 10)
		{
			int id1; int id2;
			cin >> id1 >> id2;
			if (hodit == 0 && pol[id1 - 1][id2 - 1] == '-') pol[id1 - 1][id2 - 1] = 'X';
			if (hodit == 1 && pol[id1 - 1][id2 - 1] == '-') pol[id1 - 1][id2 - 1] = 'O';
			hod++;
			if (hodit == 1) hodit = 0;
			else if (hodit == 0) hodit = 1;
			postroika();
			proverka();
		}

		cout << endl;

		if (endg == '0') {
			cout << "nichia"; nich++;
		}
		else if (endg == 'X') {
			cout << "X win!"; Xw++;
		}
		else if (endg == 'O') {
			cout << "O win!"; Ow++;
		}

		cout << Xw << '-' << nich << '-' << Ow;
		cin >> playnew;
	}
}

void postroika() {
	cout << " ";
	for (int i = 0; i < n * 4 + 1; i++)
	{
		cout << "-";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << " | " << pol[i][j];
		}
		cout << " |" << endl << " ";
		for (int j = 0; j < n * 4 + 1; j++)
		{
			cout << "-";
		}
		cout << endl;
	}
}

void proverka() {
	for (int i = 0; i < n; i++)
	{
		if (pol[i][0] == 'X' && pol[i][1] == 'X' && pol[i][2] == 'X') endg = 'X';
		if (pol[i][0] == 'O' && pol[i][1] == 'O' && pol[i][2] == 'O') endg = 'O';
		if (pol[0][i] == 'X' && pol[1][i] == 'X' && pol[2][i] == 'X') endg = 'X';
		if (pol[0][i] == 'O' && pol[1][i] == 'O' && pol[2][i] == 'O') endg = 'O';
	}
	if (pol[0][0] == 'X' && pol[1][1] == 'X' && pol[2][2] == 'X') endg = 'X';
	if (pol[0][0] == 'O' && pol[1][1] == 'O' && pol[2][2] == 'O') endg = 'O';
	if (pol[0][2] == 'X' && pol[1][1] == 'X' && pol[2][0] == 'X') endg = 'X';
	if (pol[0][2] == 'O' && pol[1][1] == 'O' && pol[2][0] == 'O') endg = 'O';
}

