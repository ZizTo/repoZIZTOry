// Матиевский Павел

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//		 Дано целое число A. 
	//Проверить истинность высказывания: 
	//«Число A является положительным».
	/*int a;
	bool res;
	cin >> a;
	res = a > 0;
	cout << res << endl;*/

	//		Дано целое число A. 
	//Проверить истинность высказывания: 
	//«Число A является нечетным».
	int a; bool res;
	cin >> a;
	res = (a % 2) != 0;
	cout << res << endl;

	return 0;
}