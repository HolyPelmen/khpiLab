#include <iostream>
#include "galaxy.h"

#define N 3

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	int a, b;
	galaxy arr[N] = {
		galaxy('O', 32, 0.02, 55000),
		galaxy('F', 1.25, 2.9, 110000),
		galaxy('M', 0.2, 73.2, 220000)
	};

	for (int q = 0; q < N; q++) {	//Вывод начальных значений классов
		cout << arr[q];
	}

	cout << "\nПроверка оператора суммы" << endl;
	cout << "Выберите два слагаемых:" << endl;
	cout << "> "; cin >> a;
	cout << "> "; cin >> b;
	cout << "Сумма данных слагаемых:" << endl;
	galaxy temp1 = arr[a] + arr[b];
	cout << temp1;

	cout << "\nПроверка оператора сравнения" << endl;
	cout << "Выберите два значения:" << endl;
	cout << "> "; cin >> a;
	cout << "> "; cin >> b;
	arr[a] == arr[b];
	
	cout << "\nПроверка оператора ввода на примере создания переменной temp2" << endl;
	galaxy temp2;
	cin >> temp2;
	
	cout << temp2;

	cout << "\nПроверка оператора присваивания на примере замены члена таблицы переменной temp2" << endl;
	cout << "Выберите значение, которое хотите заменить:" << endl;
	cout << "> "; cin >> a;
	arr[a] = temp2;
	for (int q = 0; q < N; q++) {
		cout << arr[q];
	}
}