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

	for (int q = 0; q < N; q++) {	//����� ��������� �������� �������
		cout << arr[q];
	}

	cout << "\n�������� ��������� �����" << endl;
	cout << "�������� ��� ���������:" << endl;
	cout << "> "; cin >> a;
	cout << "> "; cin >> b;
	cout << "����� ������ ���������:" << endl;
	galaxy temp1 = arr[a] + arr[b];
	cout << temp1;

	cout << "\n�������� ��������� ���������" << endl;
	cout << "�������� ��� ��������:" << endl;
	cout << "> "; cin >> a;
	cout << "> "; cin >> b;
	arr[a] == arr[b];
	
	cout << "\n�������� ��������� ����� �� ������� �������� ���������� temp2" << endl;
	galaxy temp2;
	cin >> temp2;
	
	cout << temp2;

	cout << "\n�������� ��������� ������������ �� ������� ������ ����� ������� ���������� temp2" << endl;
	cout << "�������� ��������, ������� ������ ��������:" << endl;
	cout << "> "; cin >> a;
	arr[a] = temp2;
	for (int q = 0; q < N; q++) {
		cout << arr[q];
	}
}