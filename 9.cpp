//Матиевский Павел
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	/*
	int i = 2;
	while (i<=100)
	{
		cout << i << " ";
		i+=2;
	} */

	/*
	int a, i = 1;
	cin >> a;
	while (i * i <= a)
	{
		cout << i * i << " ";
		i++;
	}*/ 

	/*
	int a, i = 2;
	cin >> a;
	while (a % i != 0)
	{
		i++;
	}
	cout << i;*/

	/*
	int a, i = 1;
	cin >> a;
	while (i <= a)
	{
		if (a % i == 0) { cout << i << " "; }
		i++;
	}*/

	/*
	int i = 2, n;
	cin >> n;
	while (i < n)
	{
		cout << i << " ";
		i *= 2;
	}*/

	/*
	double k, rst = 0; int d = 0, orst;
	cin >> k >> orst;
	while (rst < orst) {
		rst += k;
		k *= 1.1;
		d++;
	}
	cout << d;*/

	int a, i = 10;
	cin >> a;
	while (a != 0)
	{
		cout << a % 10 << " ";
		a /= 10;
	}











	return 0;
}