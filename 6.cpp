//Павел Матиевский

#include <iostream>
#include <cmath>

using namespace std;
int main() {
	//34
	/*
	int x, y;
	cin >> x >> y;
	if ((x + y) % 2 == 0) { cout << "Chernoe"; }
	else { cout << "Beloe"; } */

	//35
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if ((x1 + y1) % 2 == (x2 + y2) % 2) { cout << "odinakovoe"; }
	else { cout << "ne odinakovoe"; } */

	//36
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if (x1 == x2 || y1 == y2) { cout << "Mozhet"; }
	else { cout << "ne mozhet"; }*/

	//37
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if ((x2 <= (x1 + 1) && x2 >= (x1 - 1)) && (y2 <= (y1 + 1) && y2 >= (y1 - 1)))
	{
		cout << "Mozhet";
	}
	else { cout << "ne mozhet"; }*/

	//38
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if (abs(x1 - x2) == abs(y1 - y2)) { cout << "Mozhet"; }
	else { cout << "Mozhet"; }*/

	//39
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if ((abs(x1 - x2) == abs(y1 - y2)) || x1 == x2 || y1 == y2) { cout << "Mozhet"; }
	else { cout << "Ne mozhet"; }*/

	//40
	/*
	int x1, y1, x2, y2;
	cin >> x1 >> y2 >> x2 >> y2;
	if ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(y1 - y2) == 2 && abs(x1 - x2) == 1))
	{
		cout << "Mozhet";
	}
	else { cout << "ne moxhet"; }*/

	//28
	/*
	int g;
	cin >> g;
	if ((g % 400 == 0) || ((g % 4 == 0) && !(g % 100 == 0))) { cout << "Vesokosni"; }
	else { cout << "ne vesokosni"; }*/

	//27
	/*
	int x;
	cin >> x;
	if (x < 0) { cout << 0; }
	else if (x % 2) { cout << 1; }
	else { cout << -1; }*/

	//29
	/*
	int x;
	cin >> x;
	if (x == 0) { cout << "Nulevoe chislo"; }
	else {
		if (x > 0) { cout << "Polozhitelnoe "; }
		else { cout << "Otricatelnoe "; }

		if (x % 2 == 0) { cout << "chetnoe"; }
		else { cout << "nechetnoe"; }
	} */

	//30
	/*
	int x;
	cin >> x;
	if (x % 2 == 0) { cout << "chetnoe "; }
	else { cout << "nechetnoe "; }

	if (x / 100 != 0) { cout << "trehznchnoe"; }
	else if (x / 10 == 0) { cout << "odnoznachnoe"; }
	else { cout << "dvuznacnoe"; }*/

	//1
	/*
	int x;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Ponedelnik";
		break;
	case 2:
		cout << "Vtornik";
		break;
	case 3:
		cout << "Sreda";
		break;
	case 4:
		cout << "Chetverg";
		break;
	case 5:
		cout << "Piatnica";
		break;
	case 6: 
		cout << "Subbota";
		break;
	case 7:
		cout << "Voskresenie";
	default:
		break;
	} */

	//2




	return 0;
}