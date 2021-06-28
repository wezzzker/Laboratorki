/*#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	const int len = 10;
	int mas[len] = { 1,22,34,56,13,14,9,44,7,15 };
	cout << "Статический массив: " << endl;
	for (int i = 0; i < len; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Новый массив: " << endl;
	for (int i = 0; i < len; i++) {
		if (mas[i] % 2 == 0)
			 mas[i] = 0;
	}
	for (int i = 0; i < len; i++) {
		cout << mas[i] << " ";
	}
}
*/

/*
#include <stdio.h> 
#include <stdlib.h> 
#include <string> 
#include <iostream>
using namespace std;
int main(void)
{
	string aim;
	string str;
	do
	{
		cout << "vvedite simbol" << endl;
		cin >> aim;
	} while (aim.length() > 1);
	do
	{
		cout << "vvedite string" << endl;
		cin >> str;
	} while (str.length() < 2);
	if (str.find(aim) + 1 > 0)
		cout << "dayyii simbol pod nomerom " << str.find(aim) + 1;
	else
		cout << "dannogo simbol net v stroce";
}
*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int mas[3][3];
	cout << "Введите значения элементов массива: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "mas[" << i << "][" << j << "] = ";
			cin >> mas[i][j];
		}
	}
	cout << endl << "Готовый массив:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	int d;
	d = mas[0][0] * mas[1][1] * mas[2][2] + mas[0][1] * mas[1][2] * mas[2][0] + mas[0][2] * mas[1][0] *
		mas[2][1] - mas[0][2] * mas[1][1] * mas[2][0] - mas[0][0] * mas[1][2] * mas[2][1] - mas[0][1] * mas[1][0]
		* mas[2][2];
	cout << endl << endl << "Определитель матрицы = " << d;
}