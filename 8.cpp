//Матиевский Павел
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//3
	/*
	int x, y;
	cin >> x >> y;
	if(x > 0) {
		if (y > 0) { cout << "1"; }
		else { cout << "4"; }
	}
	else {
		if (y > 0) { cout << "2"; }
		else { cout << "3"; }
	} */

	//1
	/*
	int a, b, c, np = 0, nm = 0;
	cin >> a >> b >> c;
	if (a > 0) { np++; }
	else if (a < 0) { nm++; }
	if (b > 0) { np++; }
	else if (b < 0) { nm++; }
	if (c > 0) { np++; }
	else if (c < 0) { nm++; }
	cout << np << " " << nm; */

	//2
	/*
	int x, y;
	cin >> x;
	if (x > 0) { y = 2 * x - 10; }
	else if (x == 0) { y = 0; }
	else { y = 2 * abs(x) - 1; }
	cout << y; */

	//4
	int rs, v;
	cin >> rs >> v;
	if (rs > 20 && v < 42) { cout << "Da"; }
	else { cout << "Ne"; }




	return 0;
}