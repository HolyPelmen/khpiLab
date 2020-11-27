#pragma once
class DB
{
public:
	DB(std::string* q) { name = *q; col = 0; sorted = 0; }
	~DB() { if (col) for (int i = 0; i < col; i++) delete rows[i]; }
	void add_rec(std::string a, double b, double c, unsigned int n);
	void del_rec();
	void sort_DB();

	friend std::ostream& operator<<(std::ostream& stream, DB& temp);
private:
	std::string name;
	galaxy* rows[12];
	int col;
	bool sorted;
};

