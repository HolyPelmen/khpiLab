#include <iostream>
#include "galaxy.h"
#include "DB.h"

void DB::add_rec(std::string a, double b, double c, unsigned int n)
{
	if (col >= 12) return;
	else col++;
	rows[col-1] = new galaxy(a, b, c, n);
	sorted = 0;
}

void DB::del_rec()
{
	if (col <= 0) return;
	delete  rows[col - 1];
	col--;
}

void DB::sort_DB()
{
	std::string a, b;
	galaxy* temp;
	for (int i = 0; i < col; i++) {
		for (int j = i + 1; j < col; j++) {
			a = rows[i]->getclass();
			b = rows[j]->getclass();
			if (a > b) {
				temp = rows[i];
				rows[i] = rows[j];
				rows[j] = temp;
			}
		}
	}
	sorted = 1;
}

std::ostream& operator<<(std::ostream& stream, DB& o1)
{
	stream << o1.name << std::endl;
	if (o1.sorted == 0) stream << "Таблица не отсортирована.\n";
	else stream << "Таблица отсортирована.\n";
	if (!o1.col) stream << "Таблица пуста.\n";
	else {
		for (int i = 0; i < o1.col; i++) {
			stream << *o1.rows[i];
		}
	}
	return stream;
}
