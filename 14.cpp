//Матиевский Павел
#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	//1
	/*
	srand(time(0));
	const int n = 5; const int m = 5;
	int k; int s = 0;
	int mat[n][m];
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = rand() % 41 - 20;
			if (j == k-1)
			cout << mat [i][j] << " ";
			{
				s += mat[i][j];
			}
		}
		cout << endl;
	}
	cout << s;*/

	//2
	/*
	srand(time(0));
	const int n = 5; const int m = 5;
	int k; int s = 1;
	int mat[n][m];
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[i][j] = rand() % 9 + 1;
			cout << mat[i][j] << " ";
			if (i == k - 1)
			{
				s *= mat[i][j];
			}
		}
		cout << endl;
	}
	cout << s;*/

	//3
	/*
	srand(time(0));
	const int n = 5;
	int s = 0;
	int mat[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = rand() % 61 - 30;
			cout << mat[i][j] << " ";
			if (i == j && mat[i][j] > 0)
			{
				s += 1;
			}
		}
		cout << endl;
	}
	cout << s; */

	//4 
	srand(time(0));
	const int n = 5;
	int s = 0;
	int mat[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = rand() % 81 - 40;
			cout << mat[i][j] << " ";
			if (n == i+j+1 && mat[i][j] % 2 != 0)
			{
				s += 1;
			}
		}
		cout << endl;
	}
	cout << s;

}