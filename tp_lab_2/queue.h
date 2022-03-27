#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>


struct unit {
	int value;
	unit* next;
};

class Queue {
public:
	Queue();
	//~Queue ();

	//void push(int num);//+
	void operator ++(int);

	//int pop();//+
	int operator --(int);

	// инкримент для всех элементов
	void operator ++();

	// декримент для всех элементов
	void operator --();

	// isEmpty;
	bool operator !();


	unit* getFirstPtr();
	unit* getLastPtr();

protected:
	bool isEmpty();//+
	unit* addElem(unit* elem, int num);
	unit* init(int num);

private:
	unit* first_;
	unit* last_;
};

template <typename T>
T getData() {
	T temp;
	std::cin >> temp;
	while (std::cin.fail() || std::cin.get() != '\n') {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin.sync();
		std::cout << "Enter again: ";
		std::cin >> temp;
	}
	return temp;
}
#endif
