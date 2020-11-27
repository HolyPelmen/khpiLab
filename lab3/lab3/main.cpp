#include <iostream>

using namespace std;


class B {
public:
	B(int x) { a = x; }

	void show_B() {
		cout << "B = " << a << endl;
	}
private:
	int a;
};

class D1 : public B {
public:
	D1(int x, int y) : B(y) { b = x; }

	void show_D1() {
		cout << "D1 = " << b << endl; show_B();
	}
private:
	int b;
};

class D2 : private B {
public:
	D2(int x, int y) : B(y) { c = x; }

	void show_D2() {
		cout << "D2 = " << c << endl; show_B();
	}
private:
	int c;
};

class D3 : private B {
public:
	D3(int x, int y) : B(y) { d = x; }

	void show_D3() {
		cout << "D3 = " << d << endl; show_B();
	}
private:
	int d;
};

class D4 : private D1 {
public:
	D4(int x, int y, int z) : D1(y, z) { e = x; }

	void show_D4() {
		cout << "D4 = " << e << endl; show_D1();
	}
private:
	int e;
};

class D5 : public D2, private D3 {
public:
	D5(int x, int y, int z, int i, int j) : D2(y, z), D3(i, j) { f = x; }

	void show_D5() {
		cout << "D5 = " << f << endl; show_D2(); show_D3();
	}
private:
	int f;
};


void main() {
	setlocale(LC_ALL, "Russian");

	D4 temp(1, 2, 3);
	D5 temp1(100, 200, 300, 400, 500);

	cout << "D3 temp(100, 200, 300, 400, 500);\n";
	cout << "D4 temp1(1,2,3);\n";
	cout << "\n—леду€ иерархии класса D4: \n";
	temp.show_D4();
	cout << "\n—леду€ иерархии класса D5: \n";
	temp1.show_D5();
}