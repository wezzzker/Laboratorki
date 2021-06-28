#include <iostream>
using namespace std;
const int N = 4;
void zadanie1() {
	int chislo, t;
	do {
		cout << "введите пятизначное число ";
		cin >> chislo;
	} while (chislo < 10000 || chislo > 100000);

	while (chislo != 0) {
		t = chislo % 10;
		chislo /= 10;
		cout << t << endl;
	}

}
void zadanie2() {
	char a;
	cout << "введите символ ";
	cin >> a;
	a = a - 32;
	cout << a << endl;
}
void zadanie3() {
	int array[N];
	int sr = 0;
	cout << "введите массив из 4 чисел: ";
	for (int i = 0; i < N; i++)
		cin >> array[i];
	for (int i = 0; i < N; i++) {
		sr += array[i];
	}
	cout << "среднее арифметическое = " << sr / 4 << endl;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание 1:" << endl;
	zadanie1();
	cout << "Задание 2:" << endl;
	zadanie2();
	cout << "Задание 3:" << endl;
	zadanie3();
}