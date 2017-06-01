#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"
#include "windows.h"

using namespace std;

namespace shapes {
	void Init(list &list);
	void Clear(list &list);
	void LoadElements(list &list, ifstream &inFileStream);
	void PrintElements(list &list, ostream &outFileStream);
	void PrintElementsByMask(list &list, ostream &outFileStream, mask mask);
	void SortByPerimeter(list &list);
}

using namespace shapes;

int main(int argc, char* argv[]) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");

	cout << "Старт" << endl;
	list list;
	Init(list);
	LoadElements(list, in);

	out << "Полный контейнер. " << endl << endl;
	PrintElements(list, out);

	out << "Сортированный контейнер. " << endl << endl;
	SortByPerimeter(list);

	PrintElements(list, out);

	out << endl << endl;

	int enter = 0;
	do {
		cout << "Что бы вы хотели вывести?" << endl;
		cout << "Пожалуйста, введите (1 - круг; 2 - прямоугольник; 0 - все):" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2 && enter != 0) {
			cout << "Ошибка! Только 1, 2 или 0!" << endl;
		}

	} while (enter != 1 && enter != 2 && enter != 0);

	out << "Ваши данные. " << endl << endl;

	switch (enter) {
	case 1:
		PrintElementsByMask(list, out, CIRCLE);
		break;
	case 2:
		PrintElementsByMask(list, out, RECTANGLE);
		break;
	default:
		PrintElementsByMask(list, out, RECTANGLE_AND_CIRCLE);
		break;
	}

	out << endl << endl;

	out << "Контейнер пуст. " << endl << endl;
	Clear(list);
	PrintElements(list, out);

	cout << "Выполнено!" << endl;
	cout << "Стоп" << endl;

	in.close();
	out.close();
	
	getchar();
	getchar();

	return 0;
}

