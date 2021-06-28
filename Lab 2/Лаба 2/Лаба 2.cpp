
#include <iostream>
#include <string>

using namespace std;
void zadanie1() {
	string string1;
	cout << "Введите строку" << endl;
	getline(cin, string1);
	int count = 1;

	for (int i = 0; i < string1.length(); i++) {
		if (string1[i] == string1[i + 1])
			count++;
		else {
			cout << (int)string1[i] << count;
			count = 1;
		}
	}
	cout << endl;
}

void zadanie2() {
	int N;
	cout << "Введите размер массива: ";
	cin >> N;
	int* sortmas = new int[N];
	int count = 0;  //
	for (int i = 0; i < N; i++)
		cin >> sortmas[i];
	for (int i = 0; i < N; i++) {
		for (int j = i; j > 0 && sortmas[j - 1] > sortmas[j]; j--)
			swap(sortmas[j - 1], sortmas[j]);
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < N; i++)
		cout << sortmas[i] << " ";
	cout << endl;
}

void zadanie3() {
	string str1, str2, str3;
	int pos;
	cout << "Введите строку: ";
	getline(cin, str1);
	cout << "Какую подстроку искать?: ";
	getline(cin, str2);
	cout << "Заменить на: ";
	getline(cin, str3);

	while ((pos = str1.find(str2, 0)) != string::npos)
		str1.replace(pos, str2.length(), str3);
	cout << "Строка после замены: " << str1;

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