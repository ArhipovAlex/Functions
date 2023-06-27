#include<iostream>
#include<conio.h>
using namespace std;

#define VERTICAL_OFFSET "\n\n\n\n\n"
#define GORIZONTAL_OFFSET "\t\t\t\t\t"


void PrintField(char field[], const int n, char player);
void Move(char field[], const int n, char player);
void Check(char field[], const int n, char player);

void main() {
	setlocale(LC_ALL, "rus");
	const int n = 9;
	char field[n] = { /*1,2,3,4,5,6,7,8,9*/ };
	PrintField(field, n, '0');
}

void PrintField(char field[], const int n, char player) {
	system("CLS");
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3) {
		cout << GORIZONTAL_OFFSET;
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
	Check(field, n, player);
}

void Move(char field[], const int n, char player) {
	char key;
	do {
		key = _getch();
		if (key == 27)return;
		if (key < '1' || key > '9') cout << "Ошибка! Выход за пределы игрового поля!"<<endl;
		else if (field[key-49]!=0) cout << "Ошибка! Клетка уже занята!" << endl;
	} while (key < '1' || key > '9'|| field[key - 49] != 0);
	field[key - 49] = player;
	PrintField(field, n, player);
}

void Check(char field[], const int n, char player) {
	bool game_over = false;
	if (field[0] == field[4] && field[0] == field[8] && field[4] != 0)game_over = true;
	if (field[2] == field[4] && field[4] == field[6] && field[4] != 0)game_over = true;

	if (field[0] == field[1] && field[1] == field[2] && field[0] != 0)game_over = true;
	if (field[3] == field[4] && field[4] == field[5] && field[3] != 0)game_over = true;
	if (field[6] == field[7] && field[7] == field[8] && field[6] != 0)game_over = true;

	if (field[0] == field[3] && field[3] == field[6] && field[0] != 0)game_over = true;
	if (field[1] == field[4] && field[4] == field[7] && field[1] != 0)game_over = true;
	if (field[2] == field[5] && field[5] == field[8] && field[2] != 0)game_over = true;
	bool draw = true;
	for (int i = 0; i < n - 1; i++) {
		if (field[i] != 0) draw = false;
		break;
	}
	if (draw) {
		cout << "Draw";
		return;
	}
	if (game_over) {
		cout << "Player " << player << " Win!";
		return;
	}
	cout << "Player " << player << endl;
	Move(field, n, player == 'X' ? '0' : 'X');
}