#include <iostream>
#include <string>
#include <vector>
#include "transport.h"

using namespace std;

vector<Transport> arr(5);

void sort() {
	Transport temp;
	for (int i = 0; i < 5; i++) {
		for (int j = i+1; j < 5; j++) {
			if (arr[i].getprice() > arr[j].getprice()) {
				temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
			}
		}
	}
}

void show() {
	for (int i = 0; i < 5; i++) {
		cout << "| " << arr[i].getprice() << " | " << arr[i].getnum() << " | " << arr[i].getrent() << " | " << arr[i].getname() << " |\n";
	}
}

void main() {
	setlocale(LC_ALL, "Russian");

	bool q = 0;
	double temp_price, temp_rent; int temp_num; string temp_name;
	while (1) {
		int var;
		int k, l;
		cout << "1. Добавить записи\n";
		cout << "2. Сортировать базу\n";
		cout << "3. Вывести базу\n";
		cout << "4. Изменить поле\n";
		cout << "> "; cin >> var;

		switch (var) {
		case 1:
			arr[0] = Transport(9.99, 20, 57.25, "Reno");
			arr[1] = Transport(5.99, 30, 21, "Paul");
			arr[2] = Transport(19.99, 2, 99, "BMW");
			arr[3] = Transport(1.99, 100, 42.10, "Lounge");
			arr[4] = Transport(3.99, 12, 80.50, "Mercury");
			q = 1;
			break;
		case 2:
			if (q == 0) cout << "В базе нет данных";
			else sort();
			break;
		case 3:
			if (q == 0) cout << "В базе нет данных";
			else show();
			break;
		case 4:
			cout << "Выберите номер строки:\n"; cout << "> "; cin >> k;
			Transport* temp = new Transport;
			temp = &arr[k-1];
			cout << "Выберите поле:\n"; cout << "1. Цена проезда\n"; cout << "2. Кол-во единиц в автопарке\n"; cout << "3. Рентабельность\n"; cout << "4. Название транспорта\n";
			cin >> l;
			switch (l) {
			case 1:
				cout << "Введите новую цену проезда > "; cin >> temp_price; temp->setprice(temp_price);
				break;
			case 2:
				cout << "Введите новое кол-во > "; cin >> temp_num; temp->setnum(temp_num);
				break;
			case 3:
				cout << "Введите новую рентабельность > "; cin >> temp_rent; temp->setrent(temp_rent);
				break;
			case 4:
				cout << "Введите новое имя > "; getline(cin, temp_name); temp->setname(temp_name);
				break;
			default:
				cout << "Выбранного варианта не существует\n"; break;
			}
		}
	}
}