#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//Даны два целых числа: A, B. Проверить истинность высказывания:
	//«Справедливы неравенства A > 2 и B ≤ 3».
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = a > 2 && b <= 3;
	cout << res;*/

	//Даны два целых числа : A, B.Проверить истинность высказывания :
	//«Справедливы неравенства A ≥ 0 или B < −2»
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = a >= 2 || b < -2;
	cout << res; */

	//Даны три целых числа: A, B, C. 
	//Проверить истинность высказывания: 
	//«Справедливо двойное неравенство A < B < C».
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = a < b && b < c;
	cout << res; */

	//Даны три целых числа: A, B, C. 
	//Проверить истинность высказывания: 
	//«Число B находится между числами A и C».
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = a < b&& b < c;
	cout << res; */

	//Даны два целых числа: A, B. 
	//Проверить истинность высказывания:
	//«Каждое из чисел A и B нечетное».
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = a % 2 != 0 && b % 2 != 0;
	cout << res; */

	//Даны два целых числа: A, B. 
	//Проверить истинность высказывания:
	//«Хотя бы одно из чисел A и B нечетное».
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = a % 2 != 0 || b % 2 != 0;
	cout << res;*/

	//10. Даны два целых числа : A, B.
	//Проверить истинность высказывания : 
	//«Ровно одно из чисел A и B нечетное».
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = (a % 2 != 0 && b & 2 == 0) || (b % 2 != 0 && a & 2 == 0);
	cout << res;*/

	//11. Даны два целых числа: A, B. 
	//Проверить истинность высказывания: 
	//«Числа A и B имеют одинаковую четность».
	/*
	int a, b; bool res;
	cin >> a; cin >> b;
	res = a % 2 == b % 2;
	cout << res; */

	//12. Даны три целых числа : A, B, C.
	//Проверить истинность высказывания : 
	//«Каждое из чисел A, B, C положительное».
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = a >= 0 && b >= 0 && c >= 0;
	cout << res; */

	//13. Даны три целых числа: A, B, C. 
	//Проверить истинность высказывания: 
	//«Хотя бы одно из чисел A, B, C положительное».
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = a >= 0 || b >= 0 || c >= 0;
	cout << res; */

	//14. Даны три целых числа: A, B, C. 
	//Проверить истинность высказывания: 
	//«Ровно одно из чисел A, B, C положительное»
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = (a >= 0 && b < 0 && c < 0) || (a < 0 && b >= 0 && c < 0) || (a < 0 && b < 0 && c >= 0);
	cout << res; */

	//15. Даны три целых числа: A, B, C. 
	//Проверить истинность высказывания: 
	//«Ровно два из чисел A, B, C являются положительными».
	/*
	int a, b, c; bool res;
	cin >> a; cin >> b; cin >> c;
	res = (a >= 0 && b >= 0 && c < 0) || (a < 0 && b >= 0 && c >= 0) || (a >= 0 && b < 0 && c >= 0);
	cout << res; */
	
//16. Дано целое положительное число.
//Проверить истинность высказывания : 
//«Данное число является четным двузначным».
/*
int a; bool res;
cin >> a;
res = a / 10 != 0 && a % 2 == 0;
cout << res; */

//17. Дано целое положительное число. 
//Проверить истинность высказывания: 
//«Данное число является нечетным трехзначным».
/*
int a; bool res;
cin >> a;
res = a / 100 != 0 && a / 100 < 10 && a % 2 != 0;
cout << res; */

//18. Проверить истинность высказывания: «Среди трех данных целых
//чисел есть хотя бы одна пара совпадающих»
/*
int a, b, c; bool res;
cin >> a; cin >> b; cin >> c;
res = a == b || c == b || c == a;
cout << res; */

//19. Проверить истинность высказывания: «Среди трех данных целых
//чисел есть хотя бы одна пара взаимно противоположных».
/*
int a, b, c; bool res;
cin >> a; cin >> b; cin >> c;
res = a == -b || c == -b || c == -a;
cout << res; */

//20. Дано трехзначное число.Проверить истинность высказывания :
//«Все цифры данного числа различны».
/*
int ch, a, b, c; bool res;
cin >> ch;
a = ch / 100;
b = ch / 10 - a * 10;
c = ch - a * 100 - b * 10;
res = a != b && c != b && c != a;
cout << res; */

//21. Дано трехзначное число. Проверить истинность высказывания:
//«Цифры данного числа образуют возрастающую последовательность».
/*
int ch, a, b, c; bool res;
cin >> ch;
a = ch / 100;
b = ch / 10 - a * 10;
c = ch - a * 100 - b * 10;
res = a < b && b < c;
cout << res; */

//22. Дано трехзначное число.Проверить истинность высказывания :
//«Цифры данного числа образуют возрастающую 
//или убывающую последовательность».
/*
int ch, a, b, c; bool res;
cin >> ch;
a = ch / 100;
b = ch / 10 - a * 10;
c = ch - a * 100 - b * 10;
res = (a < b && b < c) || (a > b && b > c);
cout << res; */

//23. Дано четырехзначное число. Проверить истинность 
//высказывания: «Данное число читается одинаково 
//слева направо и справа налево».
/*
int ch, a, b, c, d; bool res;
cin >> ch;
a = ch / 1000;
b = ch / 100 - a * 10;
c = ch / 10 - a * 1000 - b * 100;
d = ch - a * 1000 - b * 100 - c*10;
res = a * 1000 + b * 100 + c * 10 + d || d * 1000 + c * 100 + b * 10 + a;
cout << res; */

//25
//Даны числа x, y. Проверить истинность высказывания: «Точка с
//координатами (x, y) лежит во второй координатной четверти».
/*
int x, y; bool res;
cin >> x >> y;
res = x < 0 and y > 0;
cout << res; */
}
