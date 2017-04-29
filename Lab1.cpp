#include "stdafx.h"
#include <fstream>
#include <iostream>
#include "list.h"

using namespace std;

namespace shapes {
	void Init(list &list);
	void Clear(list &list);
	void LoadElements(list &list, ifstream &inFileStream);
	void PrintElements(list &list, ofstream &outFileStream);
	void PrintElementsByMask(list &list, ofstream &outFileStream, mask mask);
}

using namespace shapes;

int main(int argc, char* argv[]) {

	ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");

	cout << "Start" << endl;

	list list;

	Init(list);
	LoadElements(list, in);

	out << "Filled container. " << endl << endl;
	PrintElements(list, out);

	out << endl << endl;

	int enter = 0;
	do {
		cout << "What mask for output do you want to use?" << endl;
		cout << "Please, enter (1 - circle; 2 - rectangle; 0 - all of them):" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2 && enter != 0) {
			cout << "Error! Only 1, 2 or 0!" << endl;
		}

	} while (enter != 1 && enter != 2 && enter != 0);

	out << "By your mask. " << endl << endl;

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

	out << "Empty container. " << endl << endl;
	Clear(list);
	PrintElements(list, out);

	cout << "Done!" << endl;
	cout << "Stop" << endl;

	in.close();
	out.close();
	
	getchar();
	getchar();

	return 0;
}

