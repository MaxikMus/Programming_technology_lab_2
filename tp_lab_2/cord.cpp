#include "cord.h"

Cord::Cord(const int& x, const int& y, const int& z) {
	x_ = x;
	y_ = y;
	z_ = z;
}

Cord::Cord(const Cord& obj) {
	x_ = obj.x_;
	y_ = obj.y_;
	z_ = obj.z_;
}

Cord::Cord() {
	x_ = 0;
	y_ = 0;
	z_ = 0;
}

Cord operator-(const Cord& l, const Cord& r) {
	return Cord(l.x_ - r.x_, l.y_ - r.y_, l.z_ - r.z_);
}

Cord operator-(const Cord& l, const int& r) {
	return Cord(l.x_ - r, l.y_ - r, l.z_ - r);
}

Cord operator-(const int& l, const Cord& r) {
	return Cord(l - r.x_, l - r.y_, l - r.z_);
}

Cord operator+(const int& l, const Cord& r) {
	return Cord(l + r.x_, l + r.y_, l + r.z_);
}

void Cord::operator==(const Cord& r) {
	std::cout << "x1 == x2 - " << ((x_ == r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 == y2 - " << ((y_ == r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 == z2 - " << ((z_ == r.z_) ? "True" : "False") << std::endl;
}

void Cord::operator!=(const Cord& r) {
	std::cout << "x1 != x2 - " << ((x_ != r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 != y2 - " << ((y_ != r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 != z2 - " << ((z_ != r.z_) ? "True" : "False") << std::endl;


}

void Cord::operator<(const Cord& r) {
	std::cout << "x1 < x2 - " << ((x_ < r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 < y2 - " << ((y_ < r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 < z2 - " << ((z_ < r.z_) ? "True" : "False") << std::endl;

}

void Cord::operator<=(const Cord& r) {
	std::cout << "x1 <= x2 - " << ((x_ <= r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 <= y2 - " << ((y_ <= r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 <= z2 - " << ((z_ <= r.z_) ? "True" : "False") << std::endl;

}

void Cord::operator>(const Cord& r) {
	std::cout << "x1 > x2 - " << ((x_ > r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 > y2 - " << ((y_ > r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 > z2 - " << ((z_ > r.z_) ? "True" : "False") << std::endl;

}

void Cord::operator>=(const Cord& r) {
	std::cout << "x1 >= x2 - " << ((x_ >= r.x_) ? "True" : "False") << std::endl;
	std::cout << "y1 >= y2 - " << ((y_ >= r.y_) ? "True" : "False") << std::endl;
	std::cout << "z1 >= z2 - " << ((z_ >= r.z_) ? "True" : "False") << std::endl;

}

Cord Cord::operator+(const Cord& r) {
	return Cord(x_ + r.x_, y_ + r.y_, z_ + r.z_);
}

Cord Cord::operator+(const int& r) {
	return Cord(x_ + r, y_ + r, z_ + r);
}

std::ostream& operator<< (std::ostream& out, const Cord& p) {
	out << "Point(" << p.x_ << ", " << p.y_ << ", " << p.z_ << ")" << std::endl;
	return out;
}

std::istream& operator>> (std::istream& in, Cord& p) {
	in >> p.x_ >> p.y_ >> p.z_;

	if (!in) {
		p = Cord();
	}
	return in;
}

Cord::~Cord() {

}
