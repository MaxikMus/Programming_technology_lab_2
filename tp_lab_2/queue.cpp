#include "queue.h"

// push
void Queue::operator ++(int) {
	int num;
	std::cout << "Enter number: ";
	num = getData<int>();

	if (isEmpty()) {
		last_ = init(num);
		first_ = last_;
	}
	else {
		last_ = addElem(last_, num);
	}
}
// pop
int Queue::operator --(int) {
	unit* temp;
	int x;
	x = first_->value;
	temp = first_;
	first_ = first_->next;
	delete[] temp;
	return x;
}

void Queue::operator ++() {
	int min = getFirstPtr()->value;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		i->value++;
	}
}

void Queue::operator --() {
	int min = getFirstPtr()->value;
	for (unit* i = getFirstPtr(); i != nullptr; i = i->next) {
		i->value--;
	}
}

bool Queue::operator !() {
	return isEmpty();
}

bool Queue::isEmpty() {
	return first_ == nullptr;
}

unit* Queue::addElem(unit* elem, int num) {
	unit* temp = new unit[1];
	elem->next = temp;
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

unit* Queue::init(int num) {
	unit* temp = new unit[1];
	temp->value = num;
	temp->next = nullptr;
	return temp;
}

unit* Queue::getFirstPtr() {
	return first_;
}
unit* Queue::getLastPtr() {
	return last_;
}


Queue::Queue() {
	first_ = nullptr;
	last_ = nullptr;
}