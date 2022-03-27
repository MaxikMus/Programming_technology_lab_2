#include "queue.h"
#include "cord.h"
#include <Windows.h>
#include <iostream>


void cord();
void queue();

int main() {
	short choice;
	while (true) {
		std::cout << "1. Queue\n" << "2. Cord\n" << "3. Exit\n" << "Your choice: ";
		choice = getData<short>();
		switch (choice)
		{
		case 1:
			std::cout << "1" << std::endl;
			queue();
			break;
		case 2:
			std::cout << "2" << std::endl;
			cord();
			break;
		case 3:
			std::cout << "3" << std::endl;
			return 1;
			break;
		default:
			std::cout << "Enter again!!!" << std::endl;
			break;
		}
	}
}

void queue() {
	short choice;
	Queue q;
	do {
		system("cls");
		if (!q) {
			std::cout << "Queue is empty\n" << std::endl;
		}
		else {
			std::cout << "Queue: " << std::endl;
			for (unit* i = q.getFirstPtr(); i != nullptr; i = i->next) {
				std::cout << i->value << "\t";
			}
			std::cout << "\n" << std::endl;
		}
		std::cout << "Select action:\n" << "1. Push\n" << "2. Pop\n" << 
			"3. Inc\n" << "4. Dec\n" << "Your choice: ";
		choice = getData<short>();
		switch (choice)
		{
		case 1:
			q++;
			break;
		case 2:
			if (!q) {
				std::cout << "Queue is empty" << std::endl;
			}
			else {
				std::cout << q--;
			}
			break;
		case 3:
			++q;
			break;
		case 4:
			--q;
			break;
		default:
			break;
		}
		std::cout << "\n1. Countinue\n2. Exit" << std::endl;
		choice = getData<short>();
		if (choice == 2) break;
	} while (true);
	
}

void cord() {
	short choice;
	unsigned int count = 3;
	int num = 0;
	Cord* p;
	p = new Cord[count];
	do {
		system("cls");
		for (size_t i = 0; i < count; i++) {
			std::cout << i + 1 << ". ";
			std::cout << *(p + i);
		}
		std::cout << "Select action:\n" << "1. Plus\n" << "2. Minus\n" << "3. Cout\n" <<
			"4. Cin\n" << "5. Compare\n" << "Your choice: ";
		choice = getData<short>();
		switch (choice)
		{
		case 1:
		{
			int a, b, c;
			std::cout << "a = b + c" << std::endl;
			std::cout << "Select point a" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			if (choice < 4 && choice > 0) {
				a = choice;
				std::cout << "Select point b" << std::endl;
				std::cout << "Your choice: ";
				choice = getData<short>();
				b = choice;

				std::cout << "1. Num\n2.Point?" << std::endl;
				choice = getData<short>();
				if (choice == 1) {
					std::cout << "Enter num: ";
					c = getData<int>();
					*(p + a - 1) = *(p + b - 1) + c;
				}
				else if (choice == 2) {
					std::cout << "Select point c" << std::endl;
					std::cout << "Your choice: ";
					choice = getData<short>();
					c = choice;
					*(p + a - 1) = *(p + b - 1) + *(p + c - 1);
				}
				
			}
			else {
				std::cout << "No" << std::endl;
			}
		}
			break;
		case 2: 
		{
			int a, b, c;
			std::cout << "a = b - c" << std::endl;
			std::cout << "Select point a" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			if (choice < 4 && choice > 0) {
				a = choice;
				std::cout << "Select point b" << std::endl;
				std::cout << "Your choice: ";
				choice = getData<short>();
				b = choice;

				std::cout << "1. Num\n2.Point?" << std::endl;
				choice = getData<short>();
				if (choice == 1) {
					std::cout << "Enter num: ";
					c = getData<int>();
					*(p + a - 1) = *(p + b - 1) - c;
				}
				else if (choice == 2) {
					std::cout << "Select point c" << std::endl;
					std::cout << "Your choice: ";
					choice = getData<short>();
					c = choice;
					*(p + a - 1) = *(p + b - 1) - *(p + c - 1);
				}

			}
			else {
				std::cout << "No" << std::endl;
			}
		}
			break;
		case 3:
			std::cout << *p;
			break;
		case 4:
			std::cout << "Select Point:" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			if (choice < 4 && choice > 0) {
				std::cin >> *(p + choice - 1);
			}
			else {
				std::cout << "No" << std::endl;
			}
			break;
		case 5:
		{
			int a, b;
			std::cout << "Select first point" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			a = choice;
			std::cout << "Select second point" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			b = choice;
			std::cout << "Select com\n" << "1. <\n" << "2. <=\n" << "3. >\n" << 
				"4. >=\n" << "5. ==\n" << "6. !=\n" << std::endl;
			std::cout << "Your choice: ";
			choice = getData<short>();
			switch (choice)
			{
			case 1:
				*(p + a - 1) < *(p + b - 1);
				break;
			case 2:
				*(p + a - 1) <= *(p + b - 1);
				break;
			case 3:
				*(p + a - 1) > *(p + b - 1);
				break;
			case 4:
				*(p + a - 1) >= *(p + b - 1);
				break;
			case 5:
				*(p + a - 1) == *(p + b - 1);
				break;
			case 6:
				*(p + a - 1) != *(p + b - 1);
				break;
			default:
				break;
			}
		}
			break;
		case 6:

			break;
		default:
			break;
		}
		std::cout << "\n1. Countinue\n2. Exit" << std::endl;
		choice = getData<short>();
		if (choice == 2) break;
	} while (true);
}