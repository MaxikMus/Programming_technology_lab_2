#ifndef CORD_H
#define CORD_H
#include <iostream>

class Cord {

	// sub
	friend Cord operator-(const Cord& l, const Cord& r);
	friend Cord operator-(const Cord& l, const int& r);
	friend Cord operator-(const int& l, const Cord& r);

	friend Cord operator+(const int& l, const Cord& r);

	friend std::ostream& operator<< (std::ostream& out, const Cord& p);
	friend std::istream& operator>> (std::istream& in, Cord& p);

public:

	Cord(const int& x, const int& y, const int& z);
	Cord(const Cord& obj);
	explicit Cord();

	~Cord();

	// add
	Cord operator+(const Cord& r);
	Cord operator+(const int& r);

	void operator==(const Cord& r);
	void operator!=(const Cord& r);
	void operator<(const Cord& r);
	void operator<=(const Cord& r);
	void operator>(const Cord& r);
	void operator>=(const Cord& r);



private:
	int x_, y_, z_;
};

Cord operator+(const int& l, const Cord& r);

Cord operator-(const Cord& l, const int& r);
Cord operator-(const Cord& l, const Cord& r);
Cord operator-(const int& l, const Cord& r);

std::ostream& operator<< (std::ostream& out, const Cord& point);
std::istream& operator>> (std::istream& in, Cord& p);
#endif // !CORD_H
