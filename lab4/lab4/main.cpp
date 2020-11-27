#include <iostream>
#include "galaxy.h"
#include "DB.h"

#define N 3

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");

	string a1; double b, c; unsigned int d;
	string a = "База данных №1";
	DB* db = new DB(&a);

	while (1) {
		int var;
		cout << "1. Добавление записи" << endl;
		cout << "2. Удаление записи" << endl;
		cout << "3. Сортировка" << endl;
		cout << "4. Вывод" << endl;
		cout << "> "; cin >> var;

		switch (var) {
		case 1:
			cout << "> "; cin >> a1; 
			cout << "> "; cin >> b; 
			cout << "> "; cin >> c; 
			cout << "> "; cin >> d;
			db->add_rec(a1, b, c, d);

			
			db->add_rec("H", 321.123, 72.1, 12000);
			db->add_rec("M", 987.123, 1.5, 123987);
			db->add_rec("L", 542.417, 50, 24120);
			

			break;
		case 2:
			db->del_rec();
			break;
		case 3:
			db->sort_DB();
			break;
		case 4:
			cout << *db;
			break;

		}
	}
}