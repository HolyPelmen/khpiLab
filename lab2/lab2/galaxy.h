#pragma once
class galaxy
{
public:
	galaxy() {};
	galaxy(char a, double b, double c, unsigned int n) {
		cl = a;	mas = b; per = c; num = n;
	}

	void setclass(std::string&);
	std::string getclass();

	void setmas(double&);
	double getmas();

	void setper(double&);
	double getper();

	void setnum(unsigned int&);
	int getnum();

	galaxy operator=(galaxy& d1);

	friend galaxy operator+(const galaxy& d1, const galaxy& d2);
	friend void operator==(const galaxy& d1, const galaxy& d2);
	//friend void operator=(const galaxy& d1, const galaxy& d2);

	friend std::ostream& operator<<(std::ostream& stream, galaxy& o1);
	friend std::istream& operator>>(std::istream& stream, galaxy& o1);
private:
	std::string cl;
	double mas;
	double per;
	unsigned int num;
};

