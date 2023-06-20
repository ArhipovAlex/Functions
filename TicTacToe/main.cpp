#include<iostream>
using namespace std;

#define VERTICAL_OFFSET
#define GORIZONTAL_OFFSET


void PrintField(char field[], const int n);

void main() {
	setlocale(LC_ALL, "rus");
	const int n = 9;
	char field[n] = { /*1,2,3,4,5,6,7,8,9*/ };
	PrintField(field, n);
}

void PrintField(char field[], const int n) {
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3) {
		cout << " ";
		for (int j = 0; j < 3; j++) {
			
			cout << field[i + j];
			if (j < 2) cout << " | ";
		}
		cout << endl;
		cout << GORIZONTAL_OFFSET;
		if (i>0)cout << "--- --- ---";
		cout << endl;
	}
}