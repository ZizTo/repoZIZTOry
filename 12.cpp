//Матиевский Павел

#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	//1
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mas[i][j] = 10 * i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}*/

	//2
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			mas[i][j] = 5*(j+1);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}*/

	//3
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m];
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		for (int j = 0; j <= m; j++)
		{
			mas[i][j] = a;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}*/

	//4
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m]; int aboba[m];
	for (int i = 0; i < m; i++)
	{
		cin >> aboba[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			mas[i][j] = aboba[j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}*/

	//5
	/*
	const int n = 3;
	const int m = 5;
	int mas[n][m]; int d;
	cin >> d;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		for (int j = 0; j <= m; j++)
		{
			mas[i][j] = a + j*d;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}*/
	
	//6
/*
const int n = 3;
const int m = 5;
int mas[n][m]; int d;
cin >> d;
for (int i = 0; i < n; i++)
{
	int a;
	cin >> a;
	for (int j = 0; j <= m; j++)
	{
		if (j == 0) mas[i][j] = a;
		else mas[i][j] = mas[i][j - 1] * d;
	}
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < m; j++)
	{
		cout << mas[i][j] << " ";
	}
	cout << endl;
}*/

//7
/*
const int n = 3;
const int m = 5;
int mas[n][m]; int k;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= m; j++)
	{
		cin >> mas[i][j];
	}
}
cin >> k;
for (int j = 0; j < m; j++)
{
	cout << mas[k][j] << " ";
}
cout << endl;*/

//8
/*
const int n = 3;
const int m = 5;
int mas[n][m]; int k;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= m; j++)
	{
		cin >> mas[i][j];
	}
}
cin >> k;
for (int j = 0; j < n; j++)
{
	cout << mas[j][k] << " ";
}
cout << endl;*/

//9
/*
const int n = 3;
const int m = 5;
int mas[n][m]; int k;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= m; j++)
	{
		cin >> mas[i][j];
	}
}
cin >> k;
for (int j = 0; j < m; j+=2)
{
	cout << mas[k][j] << " ";
}
cout << endl;*/

//10
/*
const int n = 3;
const int m = 5;
int mas[n][m]; int k;
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= m; j++)
	{
		cin >> mas[i][j];
	}
}
cin >> k;
for (int j = 1; j < m; j += 2)
{
	cout << mas[k][j] << " ";
}
cout << endl;*/

//11















}