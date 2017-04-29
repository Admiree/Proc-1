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
	Clear(list);
	out << "Empty container. " << endl;
	PrintElements(list, out);

	cout << "Stop" << endl;

	in.close();
	out.close();
	
	return 0;
}

