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
	void SortByPerimeter(list &list, bool sortByIncrease);
}

using namespace shapes;

int main(int argc, char* argv[]) {

	/*ifstream in;
	in.open("in.txt");

	ofstream out;
	out.open("out.txt");*/
	
	if (argc != 3) {
		cout << "Incorrect command line! " << "Waited: command in_file out_file" << endl;
		exit(1);
	}
	ifstream in(argv[1]);
	ofstream out(argv[2]);


	cout << "Start" << endl;
	list list;
	Init(list);
	LoadElements(list, in);
	out << "Filled container." << endl;
	PrintElements(list, out);

	cout << "Done!" << endl;
	int enter = 0;

	do {
		cout << "How to sort output? Please, enter (1 - increase; 2 - decrease):" << endl;
		cin >> enter;
		if (enter != 1 && enter != 2) {
			cout << "Error! Only 1 and 2!" << endl;
		}

	} while (enter != 1 && enter != 2);


	out << "Sorted container. " << endl << endl;
	if (enter == 1) {
		SortByPerimeter(list, true);
	}
	else {
		SortByPerimeter(list, false);
	}

	PrintElements(list, out);

	out << endl << endl;

	out << "Empty container. " << endl << endl;
	Clear(list);
	PrintElements(list, out);

	cout << "Stop" << endl;

	in.close();
	out.close();
	
	return 0;
}

